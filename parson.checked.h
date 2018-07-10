/*
 Parson ( http://kgabis.github.com/parson/ )
 Copyright (c) 2012 - 2017 Krzysztof Gabis

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/

#ifndef parson_parson_h
#define parson_parson_h

#ifdef __cplusplus
extern "C"
{
#endif

#include <stddef.h>   /* size_t */

/* Types and enums */
typedef struct json_object_t JSON_Object;
typedef struct json_array_t  JSON_Array;
typedef struct json_value_t  JSON_Value;

enum json_value_type {
    JSONError   = -1,
    JSONNull    = 1,
    JSONString  = 2,
    JSONNumber  = 3,
    JSONObject  = 4,
    JSONArray   = 5,
    JSONBoolean = 6
};
typedef int JSON_Value_Type;

enum json_result_t {
    JSONSuccess = 0,
    JSONFailure = -1
};
typedef int JSON_Status;

typedef void * (*JSON_Malloc_Function)(size_t);
typedef void   (*JSON_Free_Function)(void *);

/* Call only once, before calling any other function from parson API. If not called, malloc and free
   from stdlib will be used for all allocations */
void json_set_allocation_functions(_Ptr<void* (size_t )> malloc_fun, _Ptr<void (void* )> free_fun);

/* Parses first JSON value in a file, returns NULL in case of error */
_Ptr<JSON_Value>  json_parse_file(_Ptr<const char> filename);

/* Parses first JSON value in a file and ignores comments (/ * * / and //),
   returns NULL in case of error */
_Ptr<JSON_Value>  json_parse_file_with_comments(_Ptr<const char> filename);

/*  Parses first JSON value in a string, returns NULL in case of error */
_Ptr<JSON_Value>  json_parse_string(_Ptr<const char> string);

/*  Parses first JSON value in a string and ignores comments (/ * * / and //),
    returns NULL in case of error */
_Ptr<JSON_Value>  json_parse_string_with_comments(_Ptr<const char> string);

/* Serialization */
size_t      json_serialization_size(_Ptr<const JSON_Value> value); /* returns 0 on fail */
JSON_Status json_serialize_to_buffer(_Ptr<const JSON_Value> value, _Ptr<char> buf, size_t buf_size_in_bytes);
JSON_Status json_serialize_to_file(_Ptr<const JSON_Value> value, _Ptr<const char> filename);
_Ptr<char>       json_serialize_to_string(_Ptr<const JSON_Value> value);

/* Pretty serialization */
size_t      json_serialization_size_pretty(_Ptr<const JSON_Value> value); /* returns 0 on fail */
JSON_Status json_serialize_to_buffer_pretty(_Ptr<const JSON_Value> value, _Ptr<char> buf, size_t buf_size_in_bytes);
JSON_Status json_serialize_to_file_pretty(_Ptr<const JSON_Value> value, _Ptr<const char> filename);
_Ptr<char>       json_serialize_to_string_pretty(_Ptr<const JSON_Value> value);

void        json_free_serialized_string(char *string); /* frees string from json_serialize_to_string and json_serialize_to_string_pretty */

/* Comparing */
int  json_value_equals(_Ptr<const JSON_Value> a, _Ptr<const JSON_Value> b);

/* Validation
   This is *NOT* JSON Schema. It validates json by checking if object have identically
   named fields with matching types.
   For example schema {"name":"", "age":0} will validate
   {"name":"Joe", "age":25} and {"name":"Joe", "age":25, "gender":"m"},
   but not {"name":"Joe"} or {"name":"Joe", "age":"Cucumber"}.
   In case of arrays, only first value in schema is checked against all values in tested array.
   Empty objects ({}) validate all objects, empty arrays ([]) validate all arrays,
   null validates values of every type.
 */
JSON_Status json_validate(_Ptr<const JSON_Value> schema, _Ptr<const JSON_Value> value);

/*
 * JSON Object
 */
_Ptr<JSON_Value>  json_object_get_value  (_Ptr<const JSON_Object> object, _Ptr<const char> name);
const _Ptr<const char>  json_object_get_string (_Ptr<const JSON_Object> object, _Ptr<const char> name);
_Ptr<JSON_Object>  json_object_get_object (_Ptr<const JSON_Object> object, _Ptr<const char> name);
_Ptr<JSON_Array>  json_object_get_array  (_Ptr<const JSON_Object> object, _Ptr<const char> name);
double        json_object_get_number (_Ptr<const JSON_Object> object, _Ptr<const char> name); /* returns 0 on fail */
int           json_object_get_boolean(_Ptr<const JSON_Object> object, _Ptr<const char> name); /* returns -1 on fail */

/* dotget functions enable addressing values with dot notation in nested objects,
 just like in structs or c++/java/c# objects (e.g. objectA.objectB.value).
 Because valid names in JSON can contain dots, some values may be inaccessible
 this way. */
_Ptr<JSON_Value>  json_object_dotget_value  (_Ptr<const JSON_Object> object, _Ptr<const char> name);
const _Ptr<const char>  json_object_dotget_string (_Ptr<const JSON_Object> object, _Ptr<const char> name);
_Ptr<JSON_Object>  json_object_dotget_object (_Ptr<const JSON_Object> object, _Ptr<const char> name);
_Ptr<JSON_Array>  json_object_dotget_array  (_Ptr<const JSON_Object> object, _Ptr<const char> name);
double        json_object_dotget_number (_Ptr<const JSON_Object> object, _Ptr<const char> name); /* returns 0 on fail */
int           json_object_dotget_boolean(_Ptr<const JSON_Object> object, _Ptr<const char> name); /* returns -1 on fail */

/* Functions to get available names */
size_t        json_object_get_count   (_Ptr<const JSON_Object> object);
const _Ptr<const char>  json_object_get_name    (_Ptr<const JSON_Object> object, size_t index);
_Ptr<JSON_Value>  json_object_get_value_at(_Ptr<const JSON_Object> object, size_t index);
_Ptr<JSON_Value>  json_object_get_wrapping_value(_Ptr<const JSON_Object> object);

/* Functions to check if object has a value with a specific name. Returned value is 1 if object has
 * a value and 0 if it doesn't. dothas functions behave exactly like dotget functions. */
int json_object_has_value        (_Ptr<const JSON_Object> object, _Ptr<const char> name);
int json_object_has_value_of_type(_Ptr<const JSON_Object> object, _Ptr<const char> name, JSON_Value_Type type);

int json_object_dothas_value        (_Ptr<const JSON_Object> object, _Ptr<const char> name);
int json_object_dothas_value_of_type(_Ptr<const JSON_Object> object, _Ptr<const char> name, JSON_Value_Type type);

/* Creates new name-value pair or frees and replaces old value with a new one.
 * json_object_set_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_object_set_value(_Ptr<JSON_Object> object, _Ptr<const char> name, _Ptr<JSON_Value> value);
JSON_Status json_object_set_string(_Ptr<JSON_Object> object, _Ptr<const char> name, _Ptr<const char> string);
JSON_Status json_object_set_number(_Ptr<JSON_Object> object, _Ptr<const char> name, double number);
JSON_Status json_object_set_boolean(_Ptr<JSON_Object> object, _Ptr<const char> name, int boolean);
JSON_Status json_object_set_null(_Ptr<JSON_Object> object, _Ptr<const char> name);

/* Works like dotget functions, but creates whole hierarchy if necessary.
 * json_object_dotset_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_object_dotset_value(_Ptr<JSON_Object> object, _Ptr<const char> name, _Ptr<JSON_Value> value);
JSON_Status json_object_dotset_string(_Ptr<JSON_Object> object, _Ptr<const char> name, _Ptr<const char> string);
JSON_Status json_object_dotset_number(_Ptr<JSON_Object> object, _Ptr<const char> name, double number);
JSON_Status json_object_dotset_boolean(_Ptr<JSON_Object> object, _Ptr<const char> name, int boolean);
JSON_Status json_object_dotset_null(_Ptr<JSON_Object> object, _Ptr<const char> name);

/* Frees and removes name-value pair */
JSON_Status json_object_remove(_Ptr<JSON_Object> object, _Ptr<const char> name);

/* Works like dotget function, but removes name-value pair only on exact match. */
JSON_Status json_object_dotremove(_Ptr<JSON_Object> object, const char *key);

/* Removes all name-value pairs in object */
JSON_Status json_object_clear(_Ptr<JSON_Object> object);

/*
 *JSON Array
 */
_Ptr<JSON_Value>  json_array_get_value  (_Ptr<const JSON_Array> array, size_t index);
const _Ptr<const char>  json_array_get_string (_Ptr<const JSON_Array> array, size_t index);
_Ptr<JSON_Object>  json_array_get_object (_Ptr<const JSON_Array> array, size_t index);
_Ptr<JSON_Array>  json_array_get_array  (_Ptr<const JSON_Array> array, size_t index);
double        json_array_get_number (_Ptr<const JSON_Array> array, size_t index); /* returns 0 on fail */
int           json_array_get_boolean(_Ptr<const JSON_Array> array, size_t index); /* returns -1 on fail */
size_t        json_array_get_count  (_Ptr<const JSON_Array> array);
_Ptr<JSON_Value>  json_array_get_wrapping_value(_Ptr<const JSON_Array> array);
    
/* Frees and removes value at given index, does nothing and returns JSONFailure if index doesn't exist.
 * Order of values in array may change during execution.  */
JSON_Status json_array_remove(_Ptr<JSON_Array> array, size_t i);

/* Frees and removes from array value at given index and replaces it with given one.
 * Does nothing and returns JSONFailure if index doesn't exist.
 * json_array_replace_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_array_replace_value(_Ptr<JSON_Array> array, size_t i, _Ptr<JSON_Value> value);
JSON_Status json_array_replace_string(_Ptr<JSON_Array> array, size_t i, _Ptr<const char> string);
JSON_Status json_array_replace_number(_Ptr<JSON_Array> array, size_t i, double number);
JSON_Status json_array_replace_boolean(_Ptr<JSON_Array> array, size_t i, int boolean);
JSON_Status json_array_replace_null(_Ptr<JSON_Array> array, size_t i);

/* Frees and removes all values from array */
JSON_Status json_array_clear(_Ptr<JSON_Array> array);

/* Appends new value at the end of array.
 * json_array_append_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_array_append_value(_Ptr<JSON_Array> array, _Ptr<JSON_Value> value);
JSON_Status json_array_append_string(_Ptr<JSON_Array> array, _Ptr<const char> string);
JSON_Status json_array_append_number(_Ptr<JSON_Array> array, double number);
JSON_Status json_array_append_boolean(_Ptr<JSON_Array> array, int boolean);
JSON_Status json_array_append_null(_Ptr<JSON_Array> array);

/*
 *JSON Value
 */
JSON_Value * json_value_init_object (void);
JSON_Value * json_value_init_array  (void);
_Ptr<JSON_Value>  json_value_init_string (_Ptr<const char> string); /* copies passed string */
_Ptr<JSON_Value>  json_value_init_number (double number);
_Ptr<JSON_Value>  json_value_init_boolean(int boolean);
_Ptr<JSON_Value>  json_value_init_null   (void);
_Ptr<JSON_Value>  json_value_deep_copy   (_Ptr<const JSON_Value> value);
void         json_value_free        (JSON_Value *value);

JSON_Value_Type json_value_get_type   (_Ptr<const JSON_Value> value);
_Ptr<JSON_Object>    json_value_get_object (const JSON_Value *value);
_Ptr<JSON_Array>    json_value_get_array  (const JSON_Value *value);
const _Ptr<const char>    json_value_get_string (_Ptr<const JSON_Value> value);
double          json_value_get_number (_Ptr<const JSON_Value> value);
int             json_value_get_boolean(_Ptr<const JSON_Value> value);
_Ptr<JSON_Value>    json_value_get_parent (_Ptr<const JSON_Value> value);

/* Same as above, but shorter */
JSON_Value_Type json_type   (_Ptr<const JSON_Value> value);
_Ptr<JSON_Object>    json_object (_Ptr<const JSON_Value> value);
_Ptr<JSON_Array>    json_array  (_Ptr<const JSON_Value> value);
const _Ptr<const char>    json_string (_Ptr<const JSON_Value> value);
double          json_number (_Ptr<const JSON_Value> value);
int             json_boolean(_Ptr<const JSON_Value> value);

#ifdef __cplusplus
}
#endif

#endif
