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

#include "parson.checked.h"

#include <stdio_checked.h>
#include <stdlib_checked.h>
#include <string_checked.h>
#include <ctype.h>
#include <math_checked.h>
#include <errno.h>



/* Type definitions */
typedef union json_value_value {
  _Ptr<char> string;
  double  number;
  _Ptr<JSON_Object> object;
  _Ptr<JSON_Array> array;
  int          boolean;
  int          null;
} JSON_Value_Value;

struct json_value_t {
  _Ptr<JSON_Value> parent;
  JSON_Value_Type  type;
  JSON_Value_Value value;
};

struct json_object_t {
  _Ptr<JSON_Value> wrapping_value;
  _Array_ptr<_Ptr<char>> names : byte_count(count*sizeof(_Ptr<char>));
  _Array_ptr<_Ptr<JSON_Value>> values : byte_count(count*sizeof(_Ptr<JSON_Value>));
  size_t       count;
  size_t       capacity;
};


_Ptr<JSON_Value>  json_object_nget_value(const JSON_Object *object : itype(_Ptr<const JSON_Object> ) , const char *name : itype(_Ptr<const char> ) , size_t n) : itype(_Ptr<JSON_Value>);


_Ptr<JSON_Value>  json_object_nget_value(const JSON_Object *object : itype(_Ptr<const JSON_Object> ) , const char *name : itype(_Ptr<const char> ) , size_t n) : itype(_Ptr<JSON_Value>) {
  size_t i, name_length;
  for (i = 0; i < json_object_get_count(object); i++) {
    name_length = strlen((const char*)object->names[i]);
    _Nt_array_ptr<const char> tmp_name : count(name_length) = _Dynamic_bounds_cast<_Nt_array_ptr<const char>>(object->names[i], count(name_length));
    
    if (name_length != n) {
      continue;
    }
    if (strncmp(tmp_name, name, n) == 0) {
      return object->values[i];
    }
  }
  return NULL;
}

size_t  json_object_get_count(const JSON_Object *object : itype(_Ptr<const JSON_Object> ) ) {
    return object ? object->count : 0;
}
