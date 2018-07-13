# 1 "<built-in>"
# 1 "tests.c"
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
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
# 26 "tests.c"

#if 0 /* expanded by -frewrite-includes */
#include "parson.h"
#endif /* expanded by -frewrite-includes */
# 27 "tests.c"
# 1 "./parson.h" 1
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
# 31 "./parson.h"

#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>   /* size_t */
#endif /* expanded by -frewrite-includes */
# 32 "./parson.h"
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
# 1 "/usr/local/lib/clang/6.0.0/include/__stddef_max_align_t.h" 1 3
/*===---- __stddef_max_align_t.h - Definition of max_align_t for modules ---===
 *
 * Copyright (c) 2014 Chandler Carruth
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __CLANG_MAX_ALIGN_T_DEFINED
#define __CLANG_MAX_ALIGN_T_DEFINED

#if defined(_MSC_VER)
typedef double max_align_t;
#elif defined(__APPLE__)
# 32 "/usr/local/lib/clang/6.0.0/include/__stddef_max_align_t.h" 3
typedef long double max_align_t;
#else
# 34 "/usr/local/lib/clang/6.0.0/include/__stddef_max_align_t.h" 3
// Define 'max_align_t' to match the GCC definition.
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
#endif
# 42 "/usr/local/lib/clang/6.0.0/include/__stddef_max_align_t.h" 3

#endif
# 44 "/usr/local/lib/clang/6.0.0/include/__stddef_max_align_t.h" 3
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 2 3
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3
# 33 "./parson.h" 2

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
void json_set_allocation_functions(JSON_Malloc_Function malloc_fun, JSON_Free_Function free_fun);

/* Parses first JSON value in a file, returns NULL in case of error */
JSON_Value * json_parse_file(const char *filename);

/* Parses first JSON value in a file and ignores comments (/ * * / and //),
   returns NULL in case of error */
JSON_Value * json_parse_file_with_comments(const char *filename);

/*  Parses first JSON value in a string, returns NULL in case of error */
JSON_Value * json_parse_string(const char *string);

/*  Parses first JSON value in a string and ignores comments (/ * * / and //),
    returns NULL in case of error */
JSON_Value * json_parse_string_with_comments(const char *string);

/* Serialization */
size_t      json_serialization_size(const JSON_Value *value); /* returns 0 on fail */
JSON_Status json_serialize_to_buffer(const JSON_Value *value, char *buf, size_t buf_size_in_bytes);
JSON_Status json_serialize_to_file(const JSON_Value *value, const char *filename);
char *      json_serialize_to_string(const JSON_Value *value);

/* Pretty serialization */
size_t      json_serialization_size_pretty(const JSON_Value *value); /* returns 0 on fail */
JSON_Status json_serialize_to_buffer_pretty(const JSON_Value *value, char *buf, size_t buf_size_in_bytes);
JSON_Status json_serialize_to_file_pretty(const JSON_Value *value, const char *filename);
char *      json_serialize_to_string_pretty(const JSON_Value *value);

void        json_free_serialized_string(char *string); /* frees string from json_serialize_to_string and json_serialize_to_string_pretty */

/* Comparing */
int  json_value_equals(const JSON_Value *a, const JSON_Value *b);

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
JSON_Status json_validate(const JSON_Value *schema, const JSON_Value *value);

/*
 * JSON Object
 */
JSON_Value  * json_object_get_value  (const JSON_Object *object, const char *name);
const char  * json_object_get_string (const JSON_Object *object, const char *name);
JSON_Object * json_object_get_object (const JSON_Object *object, const char *name);
JSON_Array  * json_object_get_array  (const JSON_Object *object, const char *name);
double        json_object_get_number (const JSON_Object *object, const char *name); /* returns 0 on fail */
int           json_object_get_boolean(const JSON_Object *object, const char *name); /* returns -1 on fail */

/* dotget functions enable addressing values with dot notation in nested objects,
 just like in structs or c++/java/c# objects (e.g. objectA.objectB.value).
 Because valid names in JSON can contain dots, some values may be inaccessible
 this way. */
JSON_Value  * json_object_dotget_value  (const JSON_Object *object, const char *name);
const char  * json_object_dotget_string (const JSON_Object *object, const char *name);
JSON_Object * json_object_dotget_object (const JSON_Object *object, const char *name);
JSON_Array  * json_object_dotget_array  (const JSON_Object *object, const char *name);
double        json_object_dotget_number (const JSON_Object *object, const char *name); /* returns 0 on fail */
int           json_object_dotget_boolean(const JSON_Object *object, const char *name); /* returns -1 on fail */

/* Functions to get available names */
size_t        json_object_get_count   (const JSON_Object *object);
const char  * json_object_get_name    (const JSON_Object *object, size_t index);
JSON_Value  * json_object_get_value_at(const JSON_Object *object, size_t index);
JSON_Value  * json_object_get_wrapping_value(const JSON_Object *object);

/* Functions to check if object has a value with a specific name. Returned value is 1 if object has
 * a value and 0 if it doesn't. dothas functions behave exactly like dotget functions. */
int json_object_has_value        (const JSON_Object *object, const char *name);
int json_object_has_value_of_type(const JSON_Object *object, const char *name, JSON_Value_Type type);

int json_object_dothas_value        (const JSON_Object *object, const char *name);
int json_object_dothas_value_of_type(const JSON_Object *object, const char *name, JSON_Value_Type type);

/* Creates new name-value pair or frees and replaces old value with a new one.
 * json_object_set_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_object_set_value(JSON_Object *object, const char *name, JSON_Value *value);
JSON_Status json_object_set_string(JSON_Object *object, const char *name, const char *string);
JSON_Status json_object_set_number(JSON_Object *object, const char *name, double number);
JSON_Status json_object_set_boolean(JSON_Object *object, const char *name, int boolean);
JSON_Status json_object_set_null(JSON_Object *object, const char *name);

/* Works like dotget functions, but creates whole hierarchy if necessary.
 * json_object_dotset_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_object_dotset_value(JSON_Object *object, const char *name, JSON_Value *value);
JSON_Status json_object_dotset_string(JSON_Object *object, const char *name, const char *string);
JSON_Status json_object_dotset_number(JSON_Object *object, const char *name, double number);
JSON_Status json_object_dotset_boolean(JSON_Object *object, const char *name, int boolean);
JSON_Status json_object_dotset_null(JSON_Object *object, const char *name);

/* Frees and removes name-value pair */
JSON_Status json_object_remove(JSON_Object *object, const char *name);

/* Works like dotget function, but removes name-value pair only on exact match. */
JSON_Status json_object_dotremove(JSON_Object *object, const char *key);

/* Removes all name-value pairs in object */
JSON_Status json_object_clear(JSON_Object *object);

/*
 *JSON Array
 */
JSON_Value  * json_array_get_value  (const JSON_Array *array, size_t index);
const char  * json_array_get_string (const JSON_Array *array, size_t index);
JSON_Object * json_array_get_object (const JSON_Array *array, size_t index);
JSON_Array  * json_array_get_array  (const JSON_Array *array, size_t index);
double        json_array_get_number (const JSON_Array *array, size_t index); /* returns 0 on fail */
int           json_array_get_boolean(const JSON_Array *array, size_t index); /* returns -1 on fail */
size_t        json_array_get_count  (const JSON_Array *array);
JSON_Value  * json_array_get_wrapping_value(const JSON_Array *array);
    
/* Frees and removes value at given index, does nothing and returns JSONFailure if index doesn't exist.
 * Order of values in array may change during execution.  */
JSON_Status json_array_remove(JSON_Array *array, size_t i);

/* Frees and removes from array value at given index and replaces it with given one.
 * Does nothing and returns JSONFailure if index doesn't exist.
 * json_array_replace_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_array_replace_value(JSON_Array *array, size_t i, JSON_Value *value);
JSON_Status json_array_replace_string(JSON_Array *array, size_t i, const char* string);
JSON_Status json_array_replace_number(JSON_Array *array, size_t i, double number);
JSON_Status json_array_replace_boolean(JSON_Array *array, size_t i, int boolean);
JSON_Status json_array_replace_null(JSON_Array *array, size_t i);

/* Frees and removes all values from array */
JSON_Status json_array_clear(JSON_Array *array);

/* Appends new value at the end of array.
 * json_array_append_value does not copy passed value so it shouldn't be freed afterwards. */
JSON_Status json_array_append_value(JSON_Array *array, JSON_Value *value);
JSON_Status json_array_append_string(JSON_Array *array, const char *string);
JSON_Status json_array_append_number(JSON_Array *array, double number);
JSON_Status json_array_append_boolean(JSON_Array *array, int boolean);
JSON_Status json_array_append_null(JSON_Array *array);

/*
 *JSON Value
 */
JSON_Value * json_value_init_object (void);
JSON_Value * json_value_init_array  (void);
JSON_Value * json_value_init_string (const char *string); /* copies passed string */
JSON_Value * json_value_init_number (double number);
JSON_Value * json_value_init_boolean(int boolean);
JSON_Value * json_value_init_null   (void);
JSON_Value * json_value_deep_copy   (const JSON_Value *value);
void         json_value_free        (JSON_Value *value);

JSON_Value_Type json_value_get_type   (const JSON_Value *value);
JSON_Object *   json_value_get_object (const JSON_Value *value);
JSON_Array  *   json_value_get_array  (const JSON_Value *value);
const char  *   json_value_get_string (const JSON_Value *value);
double          json_value_get_number (const JSON_Value *value);
int             json_value_get_boolean(const JSON_Value *value);
JSON_Value  *   json_value_get_parent (const JSON_Value *value);

/* Same as above, but shorter */
JSON_Value_Type json_type   (const JSON_Value *value);
JSON_Object *   json_object (const JSON_Value *value);
JSON_Array  *   json_array  (const JSON_Value *value);
const char  *   json_string (const JSON_Value *value);
double          json_number (const JSON_Value *value);
int             json_boolean(const JSON_Value *value);

#ifdef __cplusplus
}
#endif
# 233 "./parson.h"

#endif
# 235 "./parson.h"
# 28 "tests.c" 2

#if 0 /* expanded by -frewrite-includes */
#include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 29 "tests.c"
# 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */

#ifndef _STDIO_H
#define _STDIO_H	1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#if 0 /* expanded by -frewrite-includes */
#include <bits/libc-header-start.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */

#ifndef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
# error "Never include <bits/libc-header-start.h> directly."
#endif
# 30 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_FEATURES_H
#define	_FEATURES_H	1

/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   __STDC_WANT_LIB_EXT2__
			Extensions to ISO C99 from TR 27431-2:2010.
   __STDC_WANT_IEC_60559_BFP_EXT__
			Extensions to ISO C11 from TS 18661-1:2014.
   __STDC_WANT_IEC_60559_FUNCS_EXT__
			Extensions to ISO C11 from TS 18661-4:2015.
   __STDC_WANT_IEC_60559_TYPES_EXT__
			Extensions to ISO C11 from TS 18661-3:2015.

   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _ATFILE_SOURCE	Additional *at interfaces.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).

   _FORTIFY_SOURCE	Add security hardening to many library functions.
			Set to 1 or 2; 2 performs stricter checks than 1.

   _REENTRANT, _THREAD_SAFE
			Obsolete; equivalent to _POSIX_C_SOURCE=199506L.

   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200809L, as well as enabling miscellaneous functions from BSD and
   SVID.  If more than one of these are defined, they accumulate.  For
   example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE together
   give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __GLIBC_USE (F)	Define things from feature set F.  This is defined
			to 1 or 0; the subsequent macros are either defined
			or undefined, and those tests should be moved to
			__GLIBC_USE.
   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_ISOCXX11	Define ISO C++11 things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_MISC		Define things from 4.3BSD or System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_GNU		Define GNU extensions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.

   ISO C feature test macros depend on the definition of the macro
   when an affected header is included, not when the first system
   header is included, and so they are handled in
   <bits/libc-header-start.h>, which does not have a multiple include
   guard.  Feature test macros that can be handled from the first
   system header included are handled here.  */


/* Undefine everything, so we get a clean slate.  */
#undef	__USE_ISOC11
#undef	__USE_ISOC99
#undef	__USE_ISOC95
#undef	__USE_ISOCXX11
#undef	__USE_POSIX
#undef	__USE_POSIX2
#undef	__USE_POSIX199309
#undef	__USE_POSIX199506
#undef	__USE_XOPEN
#undef	__USE_XOPEN_EXTENDED
#undef	__USE_UNIX98
#undef	__USE_XOPEN2K
#undef	__USE_XOPEN2KXSI
#undef	__USE_XOPEN2K8
#undef	__USE_XOPEN2K8XSI
#undef	__USE_LARGEFILE
#undef	__USE_LARGEFILE64
#undef	__USE_FILE_OFFSET64
#undef	__USE_MISC
#undef	__USE_ATFILE
#undef	__USE_GNU
#undef	__USE_FORTIFY_LEVEL
#undef	__KERNEL_STRICT_NAMES
#undef	__GLIBC_USE_DEPRECATED_GETS

/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */
#ifndef _LOOSE_KERNEL_NAMES
# define __KERNEL_STRICT_NAMES
#endif
# 149 "/usr/include/features.h" 3 4

/* Convenience macro to test the version of gcc.
   Use like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note: only works for GCC 2.0 and later, because __GNUC_MINOR__ was
   added in 2.0.  */
#if defined __GNUC__ && defined __GNUC_MINOR__
# define __GNUC_PREREQ(maj, min) \
	((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#else
# 161 "/usr/include/features.h" 3 4
# define __GNUC_PREREQ(maj, min) 0
#endif
# 163 "/usr/include/features.h" 3 4

/* Similarly for clang.  Features added to GCC after version 4.2 may
   or may not also be available in clang, and clang's definitions of
   __GNUC(_MINOR)__ are fixed at 4 and 2 respectively.  Not all such
   features can be queried via __has_extension/__has_feature.  */
#if defined __clang_major__ && defined __clang_minor__
# define __glibc_clang_prereq(maj, min) \
  ((__clang_major__ << 16) + __clang_minor__ >= ((maj) << 16) + (min))
#else
# 172 "/usr/include/features.h" 3 4
# define __glibc_clang_prereq(maj, min) 0
#endif
# 174 "/usr/include/features.h" 3 4

/* Whether to use feature set F.  */
#define __GLIBC_USE(F)	__GLIBC_USE_ ## F

/* _BSD_SOURCE and _SVID_SOURCE are deprecated aliases for
   _DEFAULT_SOURCE.  If _DEFAULT_SOURCE is present we do not
   issue a warning; the expectation is that the source is being
   transitioned to use the new macro.  */
#if (defined _BSD_SOURCE || defined _SVID_SOURCE) \
    && !defined _DEFAULT_SOURCE
# warning "_BSD_SOURCE and _SVID_SOURCE are deprecated, use _DEFAULT_SOURCE"
# undef  _DEFAULT_SOURCE
# define _DEFAULT_SOURCE	1
#endif
# 188 "/usr/include/features.h" 3 4

/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
#ifdef _GNU_SOURCE
# undef  _ISOC95_SOURCE
# define _ISOC95_SOURCE	1
# undef  _ISOC99_SOURCE
# define _ISOC99_SOURCE	1
# undef  _ISOC11_SOURCE
# define _ISOC11_SOURCE	1
# undef  _POSIX_SOURCE
# define _POSIX_SOURCE	1
# undef  _POSIX_C_SOURCE
# define _POSIX_C_SOURCE	200809L
# undef  _XOPEN_SOURCE
# define _XOPEN_SOURCE	700
# undef  _XOPEN_SOURCE_EXTENDED
# define _XOPEN_SOURCE_EXTENDED	1
# undef	 _LARGEFILE64_SOURCE
# define _LARGEFILE64_SOURCE	1
# undef  _DEFAULT_SOURCE
# define _DEFAULT_SOURCE	1
# undef  _ATFILE_SOURCE
# define _ATFILE_SOURCE	1
#endif
# 212 "/usr/include/features.h" 3 4

/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE.  */
#if (defined _DEFAULT_SOURCE					\
     || (!defined __STRICT_ANSI__				\
	 && !defined _ISOC99_SOURCE				\
	 && !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE	\
	 && !defined _XOPEN_SOURCE))
# undef  _DEFAULT_SOURCE
# define _DEFAULT_SOURCE	1
#endif
# 223 "/usr/include/features.h" 3 4

/* This is to enable the ISO C11 extension.  */
#if (defined _ISOC11_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 201112L))
# define __USE_ISOC11	1
#endif
# 229 "/usr/include/features.h" 3 4

/* This is to enable the ISO C99 extension.  */
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L))
# define __USE_ISOC99	1
#endif
# 235 "/usr/include/features.h" 3 4

/* This is to enable the ISO C90 Amendment 1:1995 extension.  */
#if (defined _ISOC99_SOURCE || defined _ISOC11_SOURCE \
     || (defined __STDC_VERSION__ && __STDC_VERSION__ >= 199409L))
# define __USE_ISOC95	1
#endif
# 241 "/usr/include/features.h" 3 4

#ifdef __cplusplus
/* This is to enable compatibility for ISO C++17.  */
# if __cplusplus >= 201703L
#  define __USE_ISOC11	1
# endif
# 247 "/usr/include/features.h" 3 4
/* This is to enable compatibility for ISO C++11.
   Check the temporary macro for now, too.  */
# if __cplusplus >= 201103L || defined __GXX_EXPERIMENTAL_CXX0X__
#  define __USE_ISOCXX11	1
#  define __USE_ISOC99	1
# endif
# 253 "/usr/include/features.h" 3 4
#endif
# 254 "/usr/include/features.h" 3 4

/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
#ifdef _DEFAULT_SOURCE
# if !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE
#  define __USE_POSIX_IMPLICITLY	1
# endif
# 262 "/usr/include/features.h" 3 4
# undef  _POSIX_SOURCE
# define _POSIX_SOURCE	1
# undef  _POSIX_C_SOURCE
# define _POSIX_C_SOURCE	200809L
#endif
# 267 "/usr/include/features.h" 3 4

#if ((!defined __STRICT_ANSI__					\
      || (defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) >= 500))	\
     && !defined _POSIX_SOURCE && !defined _POSIX_C_SOURCE)
# define _POSIX_SOURCE	1
# if defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 500
#  define _POSIX_C_SOURCE	2
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 600
# 275 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	199506L
# elif defined _XOPEN_SOURCE && (_XOPEN_SOURCE - 0) < 700
# 277 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	200112L
# else
# 279 "/usr/include/features.h" 3 4
#  define _POSIX_C_SOURCE	200809L
# endif
# 281 "/usr/include/features.h" 3 4
# define __USE_POSIX_IMPLICITLY	1
#endif
# 283 "/usr/include/features.h" 3 4

/* Some C libraries once required _REENTRANT and/or _THREAD_SAFE to be
   defined in all multithreaded code.  GNU libc has not required this
   for many years.  We now treat them as compatibility synonyms for
   _POSIX_C_SOURCE=199506L, which is the earliest level of POSIX with
   comprehensive support for multithreaded code.  Using them never
   lowers the selected level of POSIX conformance, only raises it.  */
#if ((!defined _POSIX_C_SOURCE || (_POSIX_C_SOURCE - 0) < 199506L) \
     && (defined _REENTRANT || defined _THREAD_SAFE))
# define _POSIX_SOURCE   1
# undef  _POSIX_C_SOURCE
# define _POSIX_C_SOURCE 199506L
#endif
# 296 "/usr/include/features.h" 3 4

#if (defined _POSIX_SOURCE					\
     || (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 1)	\
     || defined _XOPEN_SOURCE)
# define __USE_POSIX	1
#endif
# 302 "/usr/include/features.h" 3 4

#if defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 2 || defined _XOPEN_SOURCE
# define __USE_POSIX2	1
#endif
# 306 "/usr/include/features.h" 3 4

#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 199309L
# define __USE_POSIX199309	1
#endif
# 310 "/usr/include/features.h" 3 4

#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 199506L
# define __USE_POSIX199506	1
#endif
# 314 "/usr/include/features.h" 3 4

#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 200112L
# define __USE_XOPEN2K		1
# undef __USE_ISOC95
# define __USE_ISOC95		1
# undef __USE_ISOC99
# define __USE_ISOC99		1
#endif
# 322 "/usr/include/features.h" 3 4

#if defined _POSIX_C_SOURCE && (_POSIX_C_SOURCE - 0) >= 200809L
# define __USE_XOPEN2K8		1
# undef  _ATFILE_SOURCE
# define _ATFILE_SOURCE	1
#endif
# 328 "/usr/include/features.h" 3 4

#ifdef	_XOPEN_SOURCE
# define __USE_XOPEN	1
# if (_XOPEN_SOURCE - 0) >= 500
#  define __USE_XOPEN_EXTENDED	1
#  define __USE_UNIX98	1
#  undef _LARGEFILE_SOURCE
#  define _LARGEFILE_SOURCE	1
#  if (_XOPEN_SOURCE - 0) >= 600
#   if (_XOPEN_SOURCE - 0) >= 700
#    define __USE_XOPEN2K8	1
#    define __USE_XOPEN2K8XSI	1
#   endif
# 341 "/usr/include/features.h" 3 4
#   define __USE_XOPEN2K	1
#   define __USE_XOPEN2KXSI	1
#   undef __USE_ISOC95
#   define __USE_ISOC95		1
#   undef __USE_ISOC99
#   define __USE_ISOC99		1
#  endif
# 348 "/usr/include/features.h" 3 4
# else
# 349 "/usr/include/features.h" 3 4
#  ifdef _XOPEN_SOURCE_EXTENDED
#   define __USE_XOPEN_EXTENDED	1
#  endif
# 352 "/usr/include/features.h" 3 4
# endif
# 353 "/usr/include/features.h" 3 4
#endif
# 354 "/usr/include/features.h" 3 4

#ifdef _LARGEFILE_SOURCE
# define __USE_LARGEFILE	1
#endif
# 358 "/usr/include/features.h" 3 4

#ifdef _LARGEFILE64_SOURCE
# define __USE_LARGEFILE64	1
#endif
# 362 "/usr/include/features.h" 3 4

#if defined _FILE_OFFSET_BITS && _FILE_OFFSET_BITS == 64
# define __USE_FILE_OFFSET64	1
#endif
# 366 "/usr/include/features.h" 3 4

#if defined _DEFAULT_SOURCE
# define __USE_MISC	1
#endif
# 370 "/usr/include/features.h" 3 4

#ifdef	_ATFILE_SOURCE
# define __USE_ATFILE	1
#endif
# 374 "/usr/include/features.h" 3 4

#ifdef	_GNU_SOURCE
# define __USE_GNU	1
#endif
# 378 "/usr/include/features.h" 3 4

#if defined _FORTIFY_SOURCE && _FORTIFY_SOURCE > 0 \
    && __GNUC_PREREQ (4, 1) && defined __OPTIMIZE__ && __OPTIMIZE__ > 0
# if _FORTIFY_SOURCE > 1
#  define __USE_FORTIFY_LEVEL 2
# else
# 384 "/usr/include/features.h" 3 4
#  define __USE_FORTIFY_LEVEL 1
# endif
# 386 "/usr/include/features.h" 3 4
#else
# 387 "/usr/include/features.h" 3 4
# define __USE_FORTIFY_LEVEL 0
#endif
# 389 "/usr/include/features.h" 3 4

/* The function 'gets' existed in C89, but is impossible to use
   safely.  It has been removed from ISO C11 and ISO C++14.  Note: for
   compatibility with various implementations of <cstdio>, this test
   must consider only the value of __cplusplus when compiling C++.  */
#if defined __cplusplus ? __cplusplus >= 201402L : defined __USE_ISOC11
# define __GLIBC_USE_DEPRECATED_GETS 0
#else
# 397 "/usr/include/features.h" 3 4
# define __GLIBC_USE_DEPRECATED_GETS 1
#endif
# 399 "/usr/include/features.h" 3 4

/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
#if 0 /* expanded by -frewrite-includes */
#include <stdc-predef.h>
#endif /* expanded by -frewrite-includes */
# 402 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_STDC_PREDEF_H
#define	_STDC_PREDEF_H	1

/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */

#ifdef __GCC_IEC_559
# if __GCC_IEC_559 > 0
#  define __STDC_IEC_559__		1
# endif
# 40 "/usr/include/stdc-predef.h" 3 4
#else
# 41 "/usr/include/stdc-predef.h" 3 4
# define __STDC_IEC_559__		1
#endif
# 43 "/usr/include/stdc-predef.h" 3 4

#ifdef __GCC_IEC_559_COMPLEX
# if __GCC_IEC_559_COMPLEX > 0
#  define __STDC_IEC_559_COMPLEX__	1
# endif
# 48 "/usr/include/stdc-predef.h" 3 4
#else
# 49 "/usr/include/stdc-predef.h" 3 4
# define __STDC_IEC_559_COMPLEX__	1
#endif
# 51 "/usr/include/stdc-predef.h" 3 4

/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
#define __STDC_ISO_10646__		201706L

/* We do not support C11 <threads.h>.  */
#define __STDC_NO_THREADS__		1

#endif
# 64 "/usr/include/stdc-predef.h" 3 4
# 403 "/usr/include/features.h" 2 3 4

/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */
#undef  __GNU_LIBRARY__
#define __GNU_LIBRARY__ 6

/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */
#define	__GLIBC__	2
#define	__GLIBC_MINOR__	27

#define __GLIBC_PREREQ(maj, min) \
	((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))

/* This is here only because every header file already includes this one.  */
#ifndef __ASSEMBLER__
# ifndef _SYS_CDEFS_H
#if 0 /* expanded by -frewrite-includes */
#  include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_SYS_CDEFS_H
#define	_SYS_CDEFS_H	1

/* We are almost always included from features.h. */
#ifndef _FEATURES_H
#if 0 /* expanded by -frewrite-includes */
# include <features.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 25 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   anymore supported.  */
#if defined __GNUC__ && !defined __STDC__
# error "You need a ISO C conforming compiler to use the glibc headers"
#endif
# 32 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Some user header file might have defined this before.  */
#undef	__P
#undef	__PMT

#ifdef __GNUC__

/* All functions, except those with callbacks or those that
   synchronize memory, are leaf functions.  */
# if __GNUC_PREREQ (4, 6) && !defined _LIBC
#  define __LEAF , __leaf__
#  define __LEAF_ATTR __attribute__ ((__leaf__))
# else
# 45 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  define __LEAF
#  define __LEAF_ATTR
# endif
# 48 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  For gcc 3.2 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
# if !defined __cplusplus && __GNUC_PREREQ (3, 3)
#  define __THROW	__attribute__ ((__nothrow__ __LEAF))
#  define __THROWNL	__attribute__ ((__nothrow__))
#  define __NTH(fct)	__attribute__ ((__nothrow__ __LEAF)) fct
#  define __NTHNL(fct)  __attribute__ ((__nothrow__)) fct
# else
# 60 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  if defined __cplusplus && __GNUC_PREREQ (2,8)
#   define __THROW	throw ()
#   define __THROWNL	throw ()
#   define __NTH(fct)	__LEAF_ATTR fct throw ()
#   define __NTHNL(fct) fct throw ()
#  else
# 66 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#   define __THROW
#   define __THROWNL
#   define __NTH(fct)	fct
#   define __NTHNL(fct) fct
#  endif
# 71 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# endif
# 72 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#else	/* Not GCC.  */
# 74 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

# define __inline		/* No inline functions.  */

# define __THROW
# define __THROWNL
# define __NTH(fct)	fct

#endif	/* GCC.  */
# 82 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Compilers that are not clang may object to
       #if defined __clang__ && __has_extension(...)
   even though they do not need to evaluate the right-hand side of the &&.  */
#if defined __clang__ && defined __has_extension
# define __glibc_clang_has_extension(ext) __has_extension (ext)
#else
# 89 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_clang_has_extension(ext) 0
#endif
# 91 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */
#define __P(args)	args
#define __PMT(args)	args

/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */

#define __CONCAT(x,y)	x ## y
#define __STRING(x)	#x

/* This is not a typedef so `const __ptr_t' does the right thing.  */
#define __ptr_t void *


/* C++ needs to know that types and declarations are C, not C++.  */
#ifdef	__cplusplus
# define __BEGIN_DECLS	extern "C" {
# define __END_DECLS	}
#else
# 112 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __BEGIN_DECLS
# define __END_DECLS
#endif
# 115 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4


/* Fortify support.  */
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __bos0(ptr) __builtin_object_size (ptr, 0)

#if __GNUC_PREREQ (4,3)
# define __warndecl(name, msg) \
  extern void name (void) __attribute__((__warning__ (msg)))
# define __warnattr(msg) __attribute__((__warning__ (msg)))
# define __errordecl(name, msg) \
  extern void name (void) __attribute__((__error__ (msg)))
#else
# 128 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __warndecl(name, msg) extern void name (void)
# define __warnattr(msg)
# define __errordecl(name, msg) extern void name (void)
#endif
# 132 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Support for flexible arrays.
   Headers that should use flexible arrays only if they're "real"
   (e.g. only if they won't affect sizeof()) should test
   #if __glibc_c99_flexarr_available.  */
#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
# define __flexarr	[]
# define __glibc_c99_flexarr_available 1
#elif __GNUC_PREREQ (2,97)
# 141 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* GCC 2.97 supports C99 flexible array members as an extension,
   even when in C89 mode or compiling C++ (any version).  */
# define __flexarr	[]
# define __glibc_c99_flexarr_available 1
#elif defined __GNUC__
# 146 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Pre-2.97 GCC did not support C99 flexible arrays but did have
   an equivalent extension with slightly different notation.  */
# define __flexarr	[0]
# define __glibc_c99_flexarr_available 1
#else
# 151 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Some other non-C99 compiler.  Approximate with [1].  */
# define __flexarr	[1]
# define __glibc_c99_flexarr_available 0
#endif
# 155 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4


/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */

#if defined __GNUC__ && __GNUC__ >= 2

# define __REDIRECT(name, proto, alias) name proto __asm__ (__ASMNAME (#alias))
# ifdef __cplusplus
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __THROW __asm__ (__ASMNAME (#alias))
#  define __REDIRECT_NTHNL(name, proto, alias) \
     name proto __THROWNL __asm__ (__ASMNAME (#alias))
# else
# 176 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  define __REDIRECT_NTH(name, proto, alias) \
     name proto __asm__ (__ASMNAME (#alias)) __THROW
#  define __REDIRECT_NTHNL(name, proto, alias) \
     name proto __asm__ (__ASMNAME (#alias)) __THROWNL
# endif
# 181 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __ASMNAME(cname)  __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
# define __ASMNAME2(prefix, cname) __STRING (prefix) cname

/*
#elif __SOME_OTHER_COMPILER__

# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/
#endif
# 191 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */
#if !defined __GNUC__ || __GNUC__ < 2
# define __attribute__(xyz)	/* Ignore */
#endif
# 198 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if __GNUC_PREREQ (2,96)
# define __attribute_malloc__ __attribute__ ((__malloc__))
#else
# 205 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_malloc__ /* Ignore */
#endif
# 207 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */
#if __GNUC_PREREQ (4, 3)
# define __attribute_alloc_size__(params) \
  __attribute__ ((__alloc_size__ params))
#else
# 214 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_alloc_size__(params) /* Ignore.  */
#endif
# 216 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if __GNUC_PREREQ (2,96)
# define __attribute_pure__ __attribute__ ((__pure__))
#else
# 223 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_pure__ /* Ignore */
#endif
# 225 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* This declaration tells the compiler that the value is constant.  */
#if __GNUC_PREREQ (2,5)
# define __attribute_const__ __attribute__ ((__const__))
#else
# 230 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_const__ /* Ignore */
#endif
# 232 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
#if __GNUC_PREREQ (3,1)
# define __attribute_used__ __attribute__ ((__used__))
# define __attribute_noinline__ __attribute__ ((__noinline__))
#else
# 240 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_used__ __attribute__ ((__unused__))
# define __attribute_noinline__ /* Ignore */
#endif
# 243 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Since version 3.2, gcc allows marking deprecated functions.  */
#if __GNUC_PREREQ (3,2)
# define __attribute_deprecated__ __attribute__ ((__deprecated__))
#else
# 248 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_deprecated__ /* Ignore */
#endif
# 250 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Since version 4.5, gcc also allows one to specify the message printed
   when a deprecated function is used.  clang claims to be gcc 4.2, but
   may also support this feature.  */
#if __GNUC_PREREQ (4,5) || \
    __glibc_clang_has_extension (__attribute_deprecated_with_message__)
# define __attribute_deprecated_msg__(msg) \
	 __attribute__ ((__deprecated__ (msg)))
#else
# 259 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_deprecated_msg__(msg) __attribute_deprecated__
#endif
# 261 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */
#if __GNUC_PREREQ (2,8)
# define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#else
# 271 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_arg__(x) /* Ignore */
#endif
# 273 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */
#if __GNUC_PREREQ (2,97)
# define __attribute_format_strfmon__(a,b) \
  __attribute__ ((__format__ (__strfmon__, a, b)))
#else
# 282 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_format_strfmon__(a,b) /* Ignore */
#endif
# 284 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* The nonull function attribute allows to mark pointer parameters which
   must not be NULL.  */
#if __GNUC_PREREQ (3,3)
# define __nonnull(params) __attribute__ ((__nonnull__ params))
#else
# 290 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __nonnull(params)
#endif
# 292 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
#if __GNUC_PREREQ (3,4)
# define __attribute_warn_unused_result__ \
   __attribute__ ((__warn_unused_result__))
# if __USE_FORTIFY_LEVEL > 0
#  define __wur __attribute_warn_unused_result__
# endif
# 301 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#else
# 302 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_warn_unused_result__ /* empty */
#endif
# 304 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#ifndef __wur
# define __wur /* Ignore */
#endif
# 307 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Forces a function to be always inlined.  */
#if __GNUC_PREREQ (3,2)
/* The Linux kernel defines __always_inline in stddef.h (283d7573), and
   it conflicts with this definition.  Therefore undefine it first to
   allow either header to be included first.  */
# undef __always_inline
# define __always_inline __inline __attribute__ ((__always_inline__))
#else
# 316 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# undef __always_inline
# define __always_inline __inline
#endif
# 319 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */
#if __GNUC_PREREQ (4,3)
# define __attribute_artificial__ __attribute__ ((__artificial__))
#else
# 325 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_artificial__ /* Ignore */
#endif
# 327 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  Using __GNUC_STDC_INLINE__
   or __GNUC_GNU_INLINE is not a good enough check for gcc because gcc versions
   older than 4.3 may define these macros and still not guarantee GNU inlining
   semantics.

   clang++ identifies itself as gcc-4.2, but has support for GNU inlining
   semantics, that can be checked fot by using the __GNUC_STDC_INLINE_ and
   __GNUC_GNU_INLINE__ macro definitions.  */
#if (!defined __cplusplus || __GNUC_PREREQ (4,3) \
     || (defined __clang__ && (defined __GNUC_STDC_INLINE__ \
			       || defined __GNUC_GNU_INLINE__)))
# if defined __GNUC_STDC_INLINE__ || defined __cplusplus
#  define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#  define __extern_always_inline \
  extern __always_inline __attribute__ ((__gnu_inline__))
# else
# 345 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  define __extern_inline extern __inline
#  define __extern_always_inline extern __always_inline
# endif
# 348 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 349 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#ifdef __extern_always_inline
# define __fortify_function __extern_always_inline __attribute_artificial__
#endif
# 353 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */
#if __GNUC_PREREQ (4,3)
# define __va_arg_pack() __builtin_va_arg_pack ()
# define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#endif
# 360 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */
#if !__GNUC_PREREQ (2,8)
# define __extension__		/* Ignore */
#endif
# 368 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* __restrict is known in EGCS 1.2 and above. */
#if !__GNUC_PREREQ (2,92)
# define __restrict	/* Ignore */
#endif
# 373 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 supports this.  */
#if __GNUC_PREREQ (3,1) && !defined __GNUG__
# define __restrict_arr	__restrict
#else
# 380 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# ifdef __GNUC__
#  define __restrict_arr	/* Not supported in old GCC.  */
# else
# 383 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#   define __restrict_arr	restrict
#  else
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
/* Some other non-C99 compiler.  */
#   define __restrict_arr	/* Not supported.  */
#  endif
# 389 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# endif
# 390 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 391 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#if __GNUC__ >= 3
# define __glibc_unlikely(cond)	__builtin_expect ((cond), 0)
# define __glibc_likely(cond)	__builtin_expect ((cond), 1)
#else
# 396 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_unlikely(cond)	(cond)
# define __glibc_likely(cond)	(cond)
#endif
# 399 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#if (!defined _Noreturn \
     && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) < 201112 \
     &&  !__GNUC_PREREQ (4,7))
# if __GNUC_PREREQ (2,8)
#  define _Noreturn __attribute__ ((__noreturn__))
# else
# 406 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#  define _Noreturn
# endif
# 408 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 409 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#if __GNUC_PREREQ (8, 0)
/* Describes a char array whose address can safely be passed as the first
   argument to strncpy and strncat, as the char array is not necessarily
   a NUL-terminated string.  */
# define __attribute_nonstring__ __attribute__ ((__nonstring__))
#else
# 416 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __attribute_nonstring__
#endif
# 418 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#if (!defined _Static_assert && !defined __cplusplus \
     && (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0) < 201112 \
     && (!__GNUC_PREREQ (4, 6) || defined __STRICT_ANSI__))
# define _Static_assert(expr, diagnostic) \
    extern int (*__Static_assert_function (void)) \
      [!!sizeof (struct { int __error_if_negative: (expr) ? 2 : -1; })]
#endif
# 426 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#define __WORDSIZE32_SIZE_ULONG		0
#define __WORDSIZE32_PTRDIFF_LONG	0
#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#else
# 16 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE_TIME64_COMPAT32	0
#endif
# 18 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/long-double.h>
#endif /* expanded by -frewrite-includes */
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4

#if defined __LONG_DOUBLE_MATH_OPTIONAL && defined __NO_LONG_DOUBLE_MATH
# define __LDBL_COMPAT 1
# ifdef __REDIRECT
#  define __LDBL_REDIR1(name, proto, alias) __REDIRECT (name, proto, alias)
#  define __LDBL_REDIR(name, proto) \
  __LDBL_REDIR1 (name, proto, __nldbl_##name)
#  define __LDBL_REDIR1_NTH(name, proto, alias) __REDIRECT_NTH (name, proto, alias)
#  define __LDBL_REDIR_NTH(name, proto) \
  __LDBL_REDIR1_NTH (name, proto, __nldbl_##name)
#  define __LDBL_REDIR1_DECL(name, alias) \
  extern __typeof (name) name __asm (__ASMNAME (#alias));
#  define __LDBL_REDIR_DECL(name) \
  extern __typeof (name) name __asm (__ASMNAME ("__nldbl_" #name));
#  define __REDIRECT_LDBL(name, proto, alias) \
  __LDBL_REDIR1 (name, proto, __nldbl_##alias)
#  define __REDIRECT_NTH_LDBL(name, proto, alias) \
  __LDBL_REDIR1_NTH (name, proto, __nldbl_##alias)
# endif
# 448 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 449 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#if !defined __LDBL_COMPAT || !defined __REDIRECT
# define __LDBL_REDIR1(name, proto, alias) name proto
# define __LDBL_REDIR(name, proto) name proto
# define __LDBL_REDIR1_NTH(name, proto, alias) name proto __THROW
# define __LDBL_REDIR_NTH(name, proto) name proto __THROW
# define __LDBL_REDIR_DECL(name)
# ifdef __REDIRECT
#  define __REDIRECT_LDBL(name, proto, alias) __REDIRECT (name, proto, alias)
#  define __REDIRECT_NTH_LDBL(name, proto, alias) \
  __REDIRECT_NTH (name, proto, alias)
# endif
# 460 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
#endif
# 461 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* __glibc_macro_warning (MESSAGE) issues warning MESSAGE.  This is
   intended for use in preprocessor macros.

   Note: MESSAGE must be a _single_ string; concatenation of string
   literals is not supported.  */
#if __GNUC_PREREQ (4,8) || __glibc_clang_prereq (3,5)
# define __glibc_macro_warning1(message) _Pragma (#message)
# define __glibc_macro_warning(message) \
  __glibc_macro_warning1 (GCC warning message)
#else
# 472 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __glibc_macro_warning(msg)
#endif
# 474 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

/* Generic selection (ISO C11) is a C-only feature, available in GCC
   since version 4.9.  Previous versions do not provide generic
   selection, even though they might set __STDC_VERSION__ to 201112L,
   when in -std=c11 mode.  Thus, we must check for !defined __GNUC__
   when testing __STDC_VERSION__ for generic selection support.
   On the other hand, Clang also defines __GNUC__, so a clang-specific
   check is required to enable the use of generic selection.  */
#if !defined __cplusplus \
    && (__GNUC_PREREQ (4, 9) \
	|| __glibc_clang_has_extension (c_generic_selections) \
	|| (!defined __GNUC__ && defined __STDC_VERSION__ \
	    && __STDC_VERSION__ >= 201112L))
# define __HAVE_GENERIC_SELECTION 1
#else
# 489 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# define __HAVE_GENERIC_SELECTION 0
#endif
# 491 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4

#endif	 /* sys/cdefs.h */
# 493 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 425 "/usr/include/features.h" 2 3 4
# endif
# 426 "/usr/include/features.h" 3 4

/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */
# if defined __USE_FILE_OFFSET64 && !defined __REDIRECT
#  define __USE_LARGEFILE	1
#  define __USE_LARGEFILE64	1
# endif
# 433 "/usr/include/features.h" 3 4

#endif	/* !ASSEMBLER */
# 435 "/usr/include/features.h" 3 4

/* Decide whether we can define 'extern inline' functions in headers.  */
#if __GNUC_PREREQ (2, 7) && defined __OPTIMIZE__ \
    && !defined __OPTIMIZE_SIZE__ && !defined __NO_INLINE__ \
    && defined __extern_inline
# define __USE_EXTERN_INLINES	1
#endif
# 442 "/usr/include/features.h" 3 4


/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
#if 0 /* expanded by -frewrite-includes */
#include <gnu/stubs.h>
#endif /* expanded by -frewrite-includes */
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */


#if !defined __x86_64__
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-32.h>
#endif /* expanded by -frewrite-includes */
# 7 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 8 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#endif
# 9 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#if defined __x86_64__ && defined __LP64__
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-64.h>
#endif /* expanded by -frewrite-includes */
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */

#ifdef _LIBC
# error Applications may not define the macro _LIBC
#endif
# 9 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 3 4

#define __stub___compat_bdflush
#define __stub_chflags
#define __stub_fattach
#define __stub_fchflags
#define __stub_fdetach
#define __stub_getmsg
#define __stub_gtty
#define __stub_lchmod
#define __stub_putmsg
#define __stub_revoke
#define __stub_setlogin
#define __stub_sigreturn
#define __stub_sstk
#define __stub_stty
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
#endif
# 12 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#if defined __x86_64__ && defined __ILP32__
#if 0 /* expanded by -frewrite-includes */
# include <gnu/stubs-x32.h>
#endif /* expanded by -frewrite-includes */
# 13 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 14 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
#endif
# 15 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 449 "/usr/include/features.h" 2 3 4


#endif	/* features.h  */
# 452 "/usr/include/features.h" 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#undef __GLIBC_USE_LIB_EXT2
#if (defined __USE_GNU							\
     || (defined __STDC_WANT_LIB_EXT2__ && __STDC_WANT_LIB_EXT2__ > 0))
# define __GLIBC_USE_LIB_EXT2 1
#else
# 42 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 0
#endif
# 44 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  */
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_BFP_EXT__
# define __GLIBC_USE_IEC_60559_BFP_EXT 1
#else
# 51 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 0
#endif
# 53 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#else
# 60 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#endif
# 62 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_TYPES_EXT__
# define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#else
# 69 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#endif
# 71 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 28 "/usr/include/stdio.h" 2 3 4

__BEGIN_DECLS

#define __need_size_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/stdio.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 34 "/usr/include/stdio.h" 2 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 35 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */

#ifndef	_BITS_TYPES_H
#define	_BITS_TYPES_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#define __WORDSIZE32_SIZE_ULONG		0
#define __WORDSIZE32_PTRDIFF_LONG	0
#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#else
# 16 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE_TIME64_COMPAT32	0
#endif
# 18 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#if __WORDSIZE == 64
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#else
# 46 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
#endif
# 49 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4

/* quad_t is also 64 bits.  */
#if __WORDSIZE == 64
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#else
# 55 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
#endif
# 58 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4

/* Largest integral types.  */
#if __WORDSIZE == 64
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
#else
# 64 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
__extension__ typedef long long int __intmax_t;
__extension__ typedef unsigned long long int __uintmax_t;
#endif
# 67 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4


/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, always long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */

#define	__S16_TYPE		short int
#define __U16_TYPE		unsigned short int
#define	__S32_TYPE		int
#define __U32_TYPE		unsigned int
#define __SLONGWORD_TYPE	long int
#define __ULONGWORD_TYPE	unsigned long int
#if __WORDSIZE == 32
# define __SQUAD_TYPE		__quad_t
# define __UQUAD_TYPE		__u_quad_t
# define __SWORD_TYPE		int
# define __UWORD_TYPE		unsigned int
# define __SLONG32_TYPE		long int
# define __ULONG32_TYPE		unsigned long int
# define __S64_TYPE		__quad_t
# define __U64_TYPE		__u_quad_t
/* We want __extension__ before typedef's that use nonstandard base types
   such as `long long' in C89 mode.  */
# define __STD_TYPE		__extension__ typedef
#elif __WORDSIZE == 64
# 117 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# define __SQUAD_TYPE		long int
# define __UQUAD_TYPE		unsigned long int
# define __SWORD_TYPE		long int
# define __UWORD_TYPE		unsigned long int
# define __SLONG32_TYPE		int
# define __ULONG32_TYPE		unsigned int
# define __S64_TYPE		long int
# define __U64_TYPE		unsigned long int
/* No need to mark the typedef with __extension__.   */
# define __STD_TYPE		typedef
#else
# 128 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# error
#endif
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/typesizes.h>	/* Defines __*_T_TYPE macros.  */
#endif /* expanded by -frewrite-includes */
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_TYPES_H
# error "Never include <bits/typesizes.h> directly; use <sys/types.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4

#ifndef	_BITS_TYPESIZES_H
#define	_BITS_TYPESIZES_H	1

/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */

/* X32 kernel interface is 64-bit.  */
#if defined __x86_64__ && defined __ILP32__
# define __SYSCALL_SLONG_TYPE	__SQUAD_TYPE
# define __SYSCALL_ULONG_TYPE	__UQUAD_TYPE
#else
# 34 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
# define __SYSCALL_SLONG_TYPE	__SLONGWORD_TYPE
# define __SYSCALL_ULONG_TYPE	__ULONGWORD_TYPE
#endif
# 37 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4

#define __DEV_T_TYPE		__UQUAD_TYPE
#define __UID_T_TYPE		__U32_TYPE
#define __GID_T_TYPE		__U32_TYPE
#define __INO_T_TYPE		__SYSCALL_ULONG_TYPE
#define __INO64_T_TYPE		__UQUAD_TYPE
#define __MODE_T_TYPE		__U32_TYPE
#ifdef __x86_64__
# define __NLINK_T_TYPE		__SYSCALL_ULONG_TYPE
# define __FSWORD_T_TYPE	__SYSCALL_SLONG_TYPE
#else
# 48 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
# define __NLINK_T_TYPE		__UWORD_TYPE
# define __FSWORD_T_TYPE	__SWORD_TYPE
#endif
# 51 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
#define __OFF_T_TYPE		__SYSCALL_SLONG_TYPE
#define __OFF64_T_TYPE		__SQUAD_TYPE
#define __PID_T_TYPE		__S32_TYPE
#define __RLIM_T_TYPE		__SYSCALL_ULONG_TYPE
#define __RLIM64_T_TYPE		__UQUAD_TYPE
#define __BLKCNT_T_TYPE		__SYSCALL_SLONG_TYPE
#define __BLKCNT64_T_TYPE	__SQUAD_TYPE
#define __FSBLKCNT_T_TYPE	__SYSCALL_ULONG_TYPE
#define __FSBLKCNT64_T_TYPE	__UQUAD_TYPE
#define __FSFILCNT_T_TYPE	__SYSCALL_ULONG_TYPE
#define __FSFILCNT64_T_TYPE	__UQUAD_TYPE
#define __ID_T_TYPE		__U32_TYPE
#define __CLOCK_T_TYPE		__SYSCALL_SLONG_TYPE
#define __TIME_T_TYPE		__SYSCALL_SLONG_TYPE
#define __USECONDS_T_TYPE	__U32_TYPE
#define __SUSECONDS_T_TYPE	__SYSCALL_SLONG_TYPE
#define __DADDR_T_TYPE		__S32_TYPE
#define __KEY_T_TYPE		__S32_TYPE
#define __CLOCKID_T_TYPE	__S32_TYPE
#define __TIMER_T_TYPE		void *
#define __BLKSIZE_T_TYPE	__SYSCALL_SLONG_TYPE
#define __FSID_T_TYPE		struct { int __val[2]; }
#define __SSIZE_T_TYPE		__SWORD_TYPE
#define __CPU_MASK_TYPE 	__SYSCALL_ULONG_TYPE

#ifdef __x86_64__
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */
# define __OFF_T_MATCHES_OFF64_T	1

/* Same for ino_t and ino64_t.  */
# define __INO_T_MATCHES_INO64_T	1

/* And for __rlim_t and __rlim64_t.  */
# define __RLIM_T_MATCHES_RLIM64_T	1
#else
# 88 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
# define __RLIM_T_MATCHES_RLIM64_T	0
#endif
# 90 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4

/* Number of descriptors that can fit in an `fd_set'.  */
#define __FD_SETSIZE		1024


#endif /* bits/typesizes.h */
# 96 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


__STD_TYPE __DEV_T_TYPE __dev_t;	/* Type of device numbers.  */
__STD_TYPE __UID_T_TYPE __uid_t;	/* Type of user identifications.  */
__STD_TYPE __GID_T_TYPE __gid_t;	/* Type of group identifications.  */
__STD_TYPE __INO_T_TYPE __ino_t;	/* Type of file serial numbers.  */
__STD_TYPE __INO64_T_TYPE __ino64_t;	/* Type of file serial numbers (LFS).*/
__STD_TYPE __MODE_T_TYPE __mode_t;	/* Type of file attribute bitmasks.  */
__STD_TYPE __NLINK_T_TYPE __nlink_t;	/* Type of file link counts.  */
__STD_TYPE __OFF_T_TYPE __off_t;	/* Type of file sizes and offsets.  */
__STD_TYPE __OFF64_T_TYPE __off64_t;	/* Type of file sizes and offsets (LFS).  */
__STD_TYPE __PID_T_TYPE __pid_t;	/* Type of process identifications.  */
__STD_TYPE __FSID_T_TYPE __fsid_t;	/* Type of file system IDs.  */
__STD_TYPE __CLOCK_T_TYPE __clock_t;	/* Type of CPU usage counts.  */
__STD_TYPE __RLIM_T_TYPE __rlim_t;	/* Type for resource measurement.  */
__STD_TYPE __RLIM64_T_TYPE __rlim64_t;	/* Type for resource measurement (LFS).  */
__STD_TYPE __ID_T_TYPE __id_t;		/* General type for IDs.  */
__STD_TYPE __TIME_T_TYPE __time_t;	/* Seconds since the Epoch.  */
__STD_TYPE __USECONDS_T_TYPE __useconds_t; /* Count of microseconds.  */
__STD_TYPE __SUSECONDS_T_TYPE __suseconds_t; /* Signed count of microseconds.  */

__STD_TYPE __DADDR_T_TYPE __daddr_t;	/* The type of a disk address.  */
__STD_TYPE __KEY_T_TYPE __key_t;	/* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
__STD_TYPE __CLOCKID_T_TYPE __clockid_t;

/* Timer ID returned by `timer_create'.  */
__STD_TYPE __TIMER_T_TYPE __timer_t;

/* Type to represent block size.  */
__STD_TYPE __BLKSIZE_T_TYPE __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */
__STD_TYPE __BLKCNT_T_TYPE __blkcnt_t;
__STD_TYPE __BLKCNT64_T_TYPE __blkcnt64_t;

/* Type to count file system blocks.  */
__STD_TYPE __FSBLKCNT_T_TYPE __fsblkcnt_t;
__STD_TYPE __FSBLKCNT64_T_TYPE __fsblkcnt64_t;

/* Type to count file system nodes.  */
__STD_TYPE __FSFILCNT_T_TYPE __fsfilcnt_t;
__STD_TYPE __FSFILCNT64_T_TYPE __fsfilcnt64_t;

/* Type of miscellaneous file system fields.  */
__STD_TYPE __FSWORD_T_TYPE __fsword_t;

__STD_TYPE __SSIZE_T_TYPE __ssize_t; /* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */
__STD_TYPE __SYSCALL_SLONG_TYPE __syscall_slong_t;
/* Unsigned long type used in system calls.  */
__STD_TYPE __SYSCALL_ULONG_TYPE __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t;	/* Type of file sizes and offsets (LFS).  */
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
__STD_TYPE __SWORD_TYPE __intptr_t;

/* Duplicate info from sys/socket.h.  */
__STD_TYPE __U32_TYPE __socklen_t;

/* C99: An integer type that can be accessed as an atomic entity,
   even in the presence of asynchronous interrupts.
   It is not currently necessary for this to be machine-specific.  */
typedef int __sig_atomic_t;

#undef __STD_TYPE

#endif /* bits/types.h */
# 207 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 36 "/usr/include/stdio.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__FILE.h>
#endif /* expanded by -frewrite-includes */
# 36 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4
#ifndef ____FILE_defined
#define ____FILE_defined 1

struct _IO_FILE;
typedef struct _IO_FILE __FILE;

#endif
# 8 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 3 4
# 37 "/usr/include/stdio.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/FILE.h>
#endif /* expanded by -frewrite-includes */
# 37 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4
#ifndef __FILE_defined
#define __FILE_defined 1

struct _IO_FILE;

/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;

#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 3 4
# 38 "/usr/include/stdio.h" 2 3 4

#define _STDIO_USES_IOSTREAM

#if 0 /* expanded by -frewrite-includes */
#include <bits/libio.h>
#endif /* expanded by -frewrite-includes */
# 41 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Per Bothner <bothner@cygnus.com>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.

   As a special exception, if you link the code in this file with
   files compiled with a GNU compiler to produce an executable,
   that does not cause the resulting executable to be covered by
   the GNU Lesser General Public License.  This exception does not
   however invalidate any other reasons why the executable file
   might be covered by the GNU Lesser General Public License.
   This exception applies to code released by its copyright holders
   in files containing the exception.  */

#ifndef _BITS_LIBIO_H
#define _BITS_LIBIO_H 1

#if !defined _STDIO_H && !defined _LIBIO_H
# error "Never include <bits/libio.h> directly; use <stdio.h> instead."
#endif
# 34 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/_G_config.h>
#endif /* expanded by -frewrite-includes */
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
/* This file is needed by libio to define various configuration parameters.
   These are always the same in the GNU C library.  */

#ifndef _BITS_G_CONFIG_H
#define _BITS_G_CONFIG_H 1

#if !defined _BITS_LIBIO_H && !defined _G_CONFIG_H
# error "Never include <bits/_G_config.h> directly; use <stdio.h> instead."
#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4

/* Define types for libio in terms of the standard internal type names.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 13 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 14 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
#define __need_size_t
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# define __need_wchar_t
#endif
# 18 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__mbstate_t.h>
#endif /* expanded by -frewrite-includes */
# 21 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
#ifndef ____mbstate_t_defined
#define ____mbstate_t_defined 1

/* Integral type unchanged by default argument promotions that can
   hold any value corresponding to members of the extended character
   set, as well as at least one value that does not correspond to any
   member of the extended character set.  */
#ifndef __WINT_TYPE__
# define __WINT_TYPE__ unsigned int
#endif
# 11 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4

/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    __WINT_TYPE__ __wch;
    char __wchb[4];
  } __value;		/* Value so far.  */
} __mbstate_t;

#endif
# 24 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/wint_t.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
#endif
# 25 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
#if 0 /* expanded by -frewrite-includes */
# include <gconv.h>
#endif /* expanded by -frewrite-includes */
# 37 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;
#endif
# 48 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4


/* These library features are always available in the GNU C library.  */
#define _G_va_list __gnuc_va_list

#define _G_HAVE_MMAP 1
#define _G_HAVE_MREMAP 1

#define _G_IO_IO_FILE_VERSION 0x20001

/* This is defined by <bits/stat.h> if `st_blksize' exists.  */
#define _G_HAVE_ST_BLKSIZE defined (_STATBUF_ST_BLKSIZE)

#define _G_BUFSIZ 8192

#endif	/* bits/_G_config.h */
# 64 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
/* ALL of these should be defined in _G_config.h */
#define _IO_fpos_t _G_fpos_t
#define _IO_fpos64_t _G_fpos64_t
#define _IO_size_t size_t
#define _IO_ssize_t __ssize_t
#define _IO_off_t __off_t
#define _IO_off64_t __off64_t
#define _IO_pid_t __pid_t
#define _IO_uid_t __uid_t
#define _IO_iconv_t _G_iconv_t
#define _IO_HAVE_ST_BLKSIZE _G_HAVE_ST_BLKSIZE
#define _IO_BUFSIZ _G_BUFSIZ
#define _IO_va_list _G_va_list
#define _IO_wint_t wint_t

/* This define avoids name pollution if we're using GNU stdarg.h */
#define __need___va_list
#if 0 /* expanded by -frewrite-includes */
#include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __STDARG_H
#define __STDARG_H

#ifndef _VA_LIST
typedef __builtin_va_list va_list;
#define _VA_LIST
#endif
# 33 "/usr/local/lib/clang/6.0.0/include/stdarg.h" 3 4
#define va_start(ap, param) __builtin_va_start(ap, param)
#define va_end(ap)          __builtin_va_end(ap)
#define va_arg(ap, type)    __builtin_va_arg(ap, type)

/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */
#define __va_copy(d,s) __builtin_va_copy(d,s)

#if __STDC_VERSION__ >= 199901L || __cplusplus >= 201103L || !defined(__STRICT_ANSI__)
#define va_copy(dest, src)  __builtin_va_copy(dest, src)
#endif
# 45 "/usr/local/lib/clang/6.0.0/include/stdarg.h" 3 4

#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST 1
typedef __builtin_va_list __gnuc_va_list;
#endif
# 50 "/usr/local/lib/clang/6.0.0/include/stdarg.h" 3 4

#endif /* __STDARG_H */
# 52 "/usr/local/lib/clang/6.0.0/include/stdarg.h" 3 4
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
#ifdef __GNUC_VA_LIST
# undef _IO_va_list
# define _IO_va_list __gnuc_va_list
#endif /* __GNUC_VA_LIST */
# 58 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#ifndef __P
#if 0 /* expanded by -frewrite-includes */
# include <sys/cdefs.h>
#endif /* expanded by -frewrite-includes */
# 60 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 61 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#endif /*!__P*/
# 62 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#define _IO_UNIFIED_JUMPTABLES 1

#ifndef EOF
# define EOF (-1)
#endif
# 68 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#ifndef NULL
# if defined __GNUG__ && \
    (__GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 8))
#  define NULL (__null)
# else
# 73 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#  if !defined(__cplusplus)
#   define NULL ((void*)0)
#  else
# 76 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#   define NULL (0)
#  endif
# 78 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# endif
# 79 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#endif
# 80 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#define _IOS_INPUT	1
#define _IOS_OUTPUT	2
#define _IOS_ATEND	4
#define _IOS_APPEND	8
#define _IOS_TRUNC	16
#define _IOS_NOCREATE	32
#define _IOS_NOREPLACE	64
#define _IOS_BIN	128

/* Magic numbers and bits for the _flags field.
   The magic numbers use the high-order bits of _flags;
   the remaining bits are available for variable flags.
   Note: The magic numbers must all be negative if stdio
   emulation is desired. */

#define _IO_MAGIC 0xFBAD0000 /* Magic number */
#define _OLD_STDIO_MAGIC 0xFABC0000 /* Emulate old stdio. */
#define _IO_MAGIC_MASK 0xFFFF0000
#define _IO_USER_BUF 1 /* User owns buffer; don't delete it on close. */
#define _IO_UNBUFFERED 2
#define _IO_NO_READS 4 /* Reading not allowed */
#define _IO_NO_WRITES 8 /* Writing not allowd */
#define _IO_EOF_SEEN 0x10
#define _IO_ERR_SEEN 0x20
#define _IO_DELETE_DONT_CLOSE 0x40 /* Don't call close(_fileno) on cleanup. */
#define _IO_LINKED 0x80 /* Set if linked (using _chain) to streambuf::_list_all.*/
#define _IO_IN_BACKUP 0x100
#define _IO_LINE_BUF 0x200
#define _IO_TIED_PUT_GET 0x400 /* Set if put and get pointer logicly tied. */
#define _IO_CURRENTLY_PUTTING 0x800
#define _IO_IS_APPENDING 0x1000
#define _IO_IS_FILEBUF 0x2000
#define _IO_BAD_SEEN 0x4000
#define _IO_USER_LOCK 0x8000

#define _IO_FLAGS2_MMAP 1
#define _IO_FLAGS2_NOTCANCEL 2
#ifdef _LIBC
# define _IO_FLAGS2_FORTIFY 4
#endif
# 121 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#define _IO_FLAGS2_USER_WBUF 8
#ifdef _LIBC
# define _IO_FLAGS2_SCANF_STD 16
# define _IO_FLAGS2_NOCLOSE 32
# define _IO_FLAGS2_CLOEXEC 64
# define _IO_FLAGS2_NEED_LOCK 128
#endif
# 128 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

/* These are "formatting flags" matching the iostream fmtflags enum values. */
#define _IO_SKIPWS 01
#define _IO_LEFT 02
#define _IO_RIGHT 04
#define _IO_INTERNAL 010
#define _IO_DEC 020
#define _IO_OCT 040
#define _IO_HEX 0100
#define _IO_SHOWBASE 0200
#define _IO_SHOWPOINT 0400
#define _IO_UPPERCASE 01000
#define _IO_SHOWPOS 02000
#define _IO_SCIENTIFIC 04000
#define _IO_FIXED 010000
#define _IO_UNITBUF 020000
#define _IO_STDIO 040000
#define _IO_DONT_CLOSE 0100000
#define _IO_BOOLALPHA 0200000


struct _IO_jump_t;  struct _IO_FILE;

/* During the build of glibc itself, _IO_lock_t will already have been
   defined by internal headers.  */
#ifndef _IO_lock_t_defined
typedef void _IO_lock_t;
#endif
# 156 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4


/* A streammarker remembers a position in a buffer. */

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  /* If _pos >= 0
 it points to _buf->Gbase()+_pos. FIXME comment */
  /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
  int _pos;
#if 0
    void set_streampos(streampos sp) { _spos = sp; }
    void set_offset(int offset) { _pos = offset; _spos = (streampos)(-2); }
  public:
    streammarker(streambuf *sb);
    ~streammarker();
    int saving() { return  _spos == -2; }
    int delta(streammarker&);
    int delta();
#endif
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};

/* This is the structure from the libstdc++ codecvt class.  */
enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};

#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
/* The order of the elements in the following struct must match the order
   of the virtual functions in the libstdc++ codecvt class.  */
struct _IO_codecvt
{
  void (*__codecvt_destr) (struct _IO_codecvt *);
  enum __codecvt_result (*__codecvt_do_out) (struct _IO_codecvt *,
					     __mbstate_t *,
					     const wchar_t *,
					     const wchar_t *,
					     const wchar_t **, char *,
					     char *, char **);
  enum __codecvt_result (*__codecvt_do_unshift) (struct _IO_codecvt *,
						 __mbstate_t *, char *,
						 char *, char **);
  enum __codecvt_result (*__codecvt_do_in) (struct _IO_codecvt *,
					    __mbstate_t *,
					    const char *, const char *,
					    const char **, wchar_t *,
					    wchar_t *, wchar_t **);
  int (*__codecvt_do_encoding) (struct _IO_codecvt *);
  int (*__codecvt_do_always_noconv) (struct _IO_codecvt *);
  int (*__codecvt_do_length) (struct _IO_codecvt *, __mbstate_t *,
			      const char *, const char *, _IO_size_t);
  int (*__codecvt_do_max_length) (struct _IO_codecvt *);

  _IO_iconv_t __cd_in;
  _IO_iconv_t __cd_out;
};

/* Extra data for wide character streams.  */
struct _IO_wide_data
{
  wchar_t *_IO_read_ptr;	/* Current read pointer */
  wchar_t *_IO_read_end;	/* End of get area. */
  wchar_t *_IO_read_base;	/* Start of putback+get area. */
  wchar_t *_IO_write_base;	/* Start of put area. */
  wchar_t *_IO_write_ptr;	/* Current put pointer. */
  wchar_t *_IO_write_end;	/* End of put area. */
  wchar_t *_IO_buf_base;	/* Start of reserve area. */
  wchar_t *_IO_buf_end;		/* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  wchar_t *_IO_save_base;	/* Pointer to start of non-current get area. */
  wchar_t *_IO_backup_base;	/* Pointer to first valid character of
				   backup area */
  wchar_t *_IO_save_end;	/* Pointer to end of non-current get area. */

  __mbstate_t _IO_state;
  __mbstate_t _IO_last_state;
  struct _IO_codecvt _codecvt;

  wchar_t _shortbuf[1];

  const struct _IO_jump_t *_wide_vtable;
};
#endif
# 244 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

struct _IO_FILE {
  int _flags;		/* High-order word is _IO_MAGIC; rest is flags. */
#define _IO_file_flags _flags

  /* The following pointers correspond to the C++ streambuf protocol. */
  /* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
  char* _IO_read_ptr;	/* Current read pointer */
  char* _IO_read_end;	/* End of get area. */
  char* _IO_read_base;	/* Start of putback+get area. */
  char* _IO_write_base;	/* Start of put area. */
  char* _IO_write_ptr;	/* Current put pointer. */
  char* _IO_write_end;	/* End of put area. */
  char* _IO_buf_base;	/* Start of reserve area. */
  char* _IO_buf_end;	/* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base;  /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
#if 0
  int _blksize;
#else
# 272 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  int _flags2;
#endif
# 274 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  _IO_off_t _old_offset; /* This used to be _offset but it's too small.  */

#define __HAVE_COLUMN /* temporary */
  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  /*  char* _save_gptr;  char* _save_egptr; */

  _IO_lock_t *_lock;
#ifdef _IO_USE_OLD_IO_FILE
};

struct _IO_FILE_complete
{
  struct _IO_FILE _file;
#endif
# 292 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#if defined _G_IO_IO_FILE_VERSION && _G_IO_IO_FILE_VERSION == 0x20001
  _IO_off64_t _offset;
# if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
  /* Wide character stream stuff.  */
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
# else
# 301 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
# endif
# 306 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  size_t __pad5;
  int _mode;
  /* Make sure we don't get into trouble again.  */
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
#endif
# 311 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};

#ifndef __cplusplus
typedef struct _IO_FILE _IO_FILE;
#endif
# 316 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
#ifndef _LIBC
#define _IO_stdin ((_IO_FILE*)(&_IO_2_1_stdin_))
#define _IO_stdout ((_IO_FILE*)(&_IO_2_1_stdout_))
#define _IO_stderr ((_IO_FILE*)(&_IO_2_1_stderr_))
#else
# 327 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern _IO_FILE *_IO_stdin attribute_hidden;
extern _IO_FILE *_IO_stdout attribute_hidden;
extern _IO_FILE *_IO_stderr attribute_hidden;
#endif
# 331 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4


/* Functions to do I/O and file management for a stream.  */

/* Read NBYTES bytes from COOKIE into a buffer pointed to by BUF.
   Return number of bytes read.  */
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);

/* Write N bytes pointed to by BUF to COOKIE.  Write all N bytes
   unless there is an error.  Return number of bytes written.  If
   there is an error, return 0 and do not write anything.  If the file
   has been opened for append (__mode.__append set), then set the file
   pointer to the end of the file and then do the write; if not, just
   write at the current file pointer.  */
typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
				 size_t __n);

/* Move COOKIE's file position to *POS bytes from the
   beginning of the file (if W is SEEK_SET),
   the current position (if W is SEEK_CUR),
   or the end of the file (if W is SEEK_END).
   Set *POS to the new file position.
   Returns zero if successful, nonzero if not.  */
typedef int __io_seek_fn (void *__cookie, _IO_off64_t *__pos, int __w);

/* Close COOKIE.  */
typedef int __io_close_fn (void *__cookie);


#ifdef __USE_GNU
/* User-visible names for the above.  */
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;

/* The structure with the cookie function pointers.  */
typedef struct
{
  __io_read_fn *read;		/* Read bytes.  */
  __io_write_fn *write;		/* Write bytes.  */
  __io_seek_fn *seek;		/* Seek/tell file position.  */
  __io_close_fn *close;		/* Close file.  */
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;

/* Initialize one of those.  */
extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
			     void *__cookie, _IO_cookie_io_functions_t __fns);
#endif
# 383 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4


#ifdef __cplusplus
extern "C" {
#endif
# 388 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
extern _IO_wint_t __wunderflow (_IO_FILE *);
extern _IO_wint_t __wuflow (_IO_FILE *);
extern _IO_wint_t __woverflow (_IO_FILE *, _IO_wint_t);
#endif
# 397 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#if  __GNUC__ >= 3
# define _IO_BE(expr, res) __builtin_expect ((expr), res)
#else
# 401 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# define _IO_BE(expr, res) (expr)
#endif
# 403 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#define _IO_getc_unlocked(_fp) \
       (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) \
	? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _IO_peekc_unlocked(_fp) \
       (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) \
	  && __underflow (_fp) == EOF ? EOF \
	: *(unsigned char *) (_fp)->_IO_read_ptr)
#define _IO_putc_unlocked(_ch, _fp) \
   (_IO_BE ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end, 0) \
    ? __overflow (_fp, (unsigned char) (_ch)) \
    : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))

#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
# define _IO_getwc_unlocked(_fp) \
  (_IO_BE ((_fp)->_wide_data == NULL					\
	   || ((_fp)->_wide_data->_IO_read_ptr				\
	       >= (_fp)->_wide_data->_IO_read_end), 0)			\
   ? __wuflow (_fp) : (_IO_wint_t) *(_fp)->_wide_data->_IO_read_ptr++)
# define _IO_putwc_unlocked(_wch, _fp) \
  (_IO_BE ((_fp)->_wide_data == NULL					\
	   || ((_fp)->_wide_data->_IO_write_ptr				\
	       >= (_fp)->_wide_data->_IO_write_end), 0)			\
   ? __woverflow (_fp, _wch)						\
   : (_IO_wint_t) (*(_fp)->_wide_data->_IO_write_ptr++ = (_wch)))
#endif
# 429 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#define _IO_feof_unlocked(__fp) (((__fp)->_flags & _IO_EOF_SEEN) != 0)
#define _IO_ferror_unlocked(__fp) (((__fp)->_flags & _IO_ERR_SEEN) != 0)

extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __THROW;
extern int _IO_ferror (_IO_FILE *__fp) __THROW;

extern int _IO_peekc_locked (_IO_FILE *__fp);

/* This one is for Emacs. */
#define _IO_PENDING_OUTPUT_COUNT(_fp)	\
	((_fp)->_IO_write_ptr - (_fp)->_IO_write_base)

extern void _IO_flockfile (_IO_FILE *) __THROW;
extern void _IO_funlockfile (_IO_FILE *) __THROW;
extern int _IO_ftrylockfile (_IO_FILE *) __THROW;

#define _IO_peekc(_fp) _IO_peekc_unlocked (_fp)
#define _IO_flockfile(_fp) /**/
#define _IO_funlockfile(_fp) /**/
#define _IO_ftrylockfile(_fp) /**/
#ifndef _IO_cleanup_region_start
#define _IO_cleanup_region_start(_fct, _fp) /**/
#endif
# 455 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#ifndef _IO_cleanup_region_end
#define _IO_cleanup_region_end(_Doit) /**/
#endif
# 458 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#define _IO_need_lock(_fp) \
  (((_fp)->_flags2 & _IO_FLAGS2_NEED_LOCK) != 0)

extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
			_IO_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
			 _IO_va_list);
extern _IO_ssize_t _IO_padn (_IO_FILE *, int, _IO_ssize_t);
extern _IO_size_t _IO_sgetn (_IO_FILE *, void *, _IO_size_t);

extern _IO_off64_t _IO_seekoff (_IO_FILE *, _IO_off64_t, int, int);
extern _IO_off64_t _IO_seekpos (_IO_FILE *, _IO_off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __THROW;

#if defined _LIBC || defined _GLIBCPP_USE_WCHAR_T
extern _IO_wint_t _IO_getwc (_IO_FILE *__fp);
extern _IO_wint_t _IO_putwc (wchar_t __wc, _IO_FILE *__fp);
extern int _IO_fwide (_IO_FILE *__fp, int __mode) __THROW;
# if __GNUC__ >= 2
/* While compiling glibc we have to handle compatibility with very old
   versions.  */
#  if defined _LIBC && defined SHARED
#if 0 /* expanded by -frewrite-includes */
#   include <shlib-compat.h>
#endif /* expanded by -frewrite-includes */
# 482 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 483 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#   if SHLIB_COMPAT (libc, GLIBC_2_0, GLIBC_2_1)
#    define _IO_fwide_maybe_incompatible \
  (__builtin_expect (&_IO_stdin_used == NULL, 0))
extern const int _IO_stdin_used;
weak_extern (_IO_stdin_used);
#   endif
# 489 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#  endif
# 490 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#  ifndef _IO_fwide_maybe_incompatible
#   define _IO_fwide_maybe_incompatible (0)
#  endif
# 493 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
/* A special optimized version of the function above.  It optimizes the
   case of initializing an unoriented byte stream.  */
#  define _IO_fwide(__fp, __mode) \
  ({ int __result = (__mode);						      \
     if (__result < 0 && ! _IO_fwide_maybe_incompatible)		      \
       {								      \
	 if ((__fp)->_mode == 0)					      \
	   /* We know that all we have to do is to set the flag.  */	      \
	   (__fp)->_mode = -1;						      \
	 __result = (__fp)->_mode;					      \
       }								      \
     else if (__builtin_constant_p (__mode) && (__mode) == 0)		      \
       __result = _IO_fwide_maybe_incompatible ? -1 : (__fp)->_mode;	      \
     else								      \
       __result = _IO_fwide (__fp, __result);				      \
     __result; })
# endif
# 510 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

extern int _IO_vfwscanf (_IO_FILE * __restrict, const wchar_t * __restrict,
			 _IO_va_list, int *__restrict);
extern int _IO_vfwprintf (_IO_FILE *__restrict, const wchar_t *__restrict,
			  _IO_va_list);
extern _IO_ssize_t _IO_wpadn (_IO_FILE *, wint_t, _IO_ssize_t);
extern void _IO_free_wbackup_area (_IO_FILE *) __THROW;
#endif
# 518 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/libio-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 520 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 521 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
#endif
# 522 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#ifdef __cplusplus
}
#endif
# 526 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4

#endif /* _BITS_LIBIO_H */
# 528 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 42 "/usr/include/stdio.h" 2 3 4

#if defined __USE_XOPEN || defined __USE_XOPEN2K8
# ifdef __GNUC__
#  ifndef _VA_LIST_DEFINED
typedef _G_va_list va_list;
#   define _VA_LIST_DEFINED
#  endif
# 49 "/usr/include/stdio.h" 3 4
# else
# 50 "/usr/include/stdio.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <stdarg.h>
#endif /* expanded by -frewrite-includes */
# 50 "/usr/include/stdio.h" 3 4
# 51 "/usr/include/stdio.h" 3 4
# endif
# 52 "/usr/include/stdio.h" 3 4
#endif
# 53 "/usr/include/stdio.h" 3 4

#if defined __USE_UNIX98 || defined __USE_XOPEN2K
# ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __off_t off_t;
# else
# 59 "/usr/include/stdio.h" 3 4
typedef __off64_t off_t;
# endif
# 61 "/usr/include/stdio.h" 3 4
# define __off_t_defined
# endif
# 63 "/usr/include/stdio.h" 3 4
# if defined __USE_LARGEFILE64 && !defined __off64_t_defined
typedef __off64_t off64_t;
# define __off64_t_defined
# endif
# 67 "/usr/include/stdio.h" 3 4
#endif
# 68 "/usr/include/stdio.h" 3 4

#ifdef __USE_XOPEN2K8
# ifndef __ssize_t_defined
typedef __ssize_t ssize_t;
# define __ssize_t_defined
# endif
# 74 "/usr/include/stdio.h" 3 4
#endif
# 75 "/usr/include/stdio.h" 3 4

/* The type of the second argument to `fgetpos' and `fsetpos'.  */
#ifndef __USE_FILE_OFFSET64
typedef _G_fpos_t fpos_t;
#else
# 80 "/usr/include/stdio.h" 3 4
typedef _G_fpos64_t fpos_t;
#endif
# 82 "/usr/include/stdio.h" 3 4
#ifdef __USE_LARGEFILE64
typedef _G_fpos64_t fpos64_t;
#endif
# 85 "/usr/include/stdio.h" 3 4

/* The possibilities for the third argument to `setvbuf'.  */
#define _IOFBF 0		/* Fully buffered.  */
#define _IOLBF 1		/* Line buffered.  */
#define _IONBF 2		/* No buffering.  */


/* Default buffer size.  */
#ifndef BUFSIZ
# define BUFSIZ _IO_BUFSIZ
#endif
# 96 "/usr/include/stdio.h" 3 4


/* End of file character.
   Some things throughout the library rely on this being -1.  */
#ifndef EOF
# define EOF (-1)
#endif
# 103 "/usr/include/stdio.h" 3 4


/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
#define SEEK_SET	0	/* Seek from beginning of file.  */
#define SEEK_CUR	1	/* Seek from current position.  */
#define SEEK_END	2	/* Seek from end of file.  */
#ifdef __USE_GNU
# define SEEK_DATA	3	/* Seek to next data.  */
# define SEEK_HOLE	4	/* Seek to next hole.  */
#endif
# 114 "/usr/include/stdio.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN
/* Default path prefix for `tempnam' and `tmpnam'.  */
# define P_tmpdir	"/tmp"
#endif
# 120 "/usr/include/stdio.h" 3 4


/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/stdio_lim.h>
#endif /* expanded by -frewrite-includes */
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
/* Copyright (C) 1994-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_STDIO_LIM_H
#define _BITS_STDIO_LIM_H 1

#ifndef _STDIO_H
# error "Never include <bits/stdio_lim.h> directly; use <stdio.h> instead."
#endif
# 24 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4

#define L_tmpnam 20
#define TMP_MAX 238328
#define FILENAME_MAX 4096

#ifdef __USE_POSIX
# define L_ctermid 9
# if !defined __USE_XOPEN2K || defined __USE_GNU
#  define L_cuserid 9
# endif
# 34 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4
#endif
# 35 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4

#undef  FOPEN_MAX
#define FOPEN_MAX 16

#endif /* bits/stdio_lim.h */
# 40 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 3 4
# 132 "/usr/include/stdio.h" 2 3 4


/* Standard streams.  */
extern struct _IO_FILE *stdin;		/* Standard input stream.  */
extern struct _IO_FILE *stdout;		/* Standard output stream.  */
extern struct _IO_FILE *stderr;		/* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */
#define stdin stdin
#define stdout stdout
#define stderr stderr

/* Remove file FILENAME.  */
extern int remove (const char *__filename) __THROW;
/* Rename file OLD to NEW.  */
extern int rename (const char *__old, const char *__new) __THROW;

#ifdef __USE_ATFILE
/* Rename file OLD relative to OLDFD to NEW relative to NEWFD.  */
extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) __THROW;
#endif
# 153 "/usr/include/stdio.h" 3 4

/* Create a temporary file and open it read/write.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
#ifndef __USE_FILE_OFFSET64
extern FILE *tmpfile (void) __wur;
#else
# 161 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern FILE *__REDIRECT (tmpfile, (void), tmpfile64) __wur;
# else
# 164 "/usr/include/stdio.h" 3 4
#  define tmpfile tmpfile64
# endif
# 166 "/usr/include/stdio.h" 3 4
#endif
# 167 "/usr/include/stdio.h" 3 4

#ifdef __USE_LARGEFILE64
extern FILE *tmpfile64 (void) __wur;
#endif
# 171 "/usr/include/stdio.h" 3 4

/* Generate a temporary filename.  */
extern char *tmpnam (char *__s) __THROW __wur;

#ifdef __USE_MISC
/* This is the reentrant variant of `tmpnam'.  The only difference is
   that it does not allow S to be NULL.  */
extern char *tmpnam_r (char *__s) __THROW __wur;
#endif
# 180 "/usr/include/stdio.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN
/* Generate a unique temporary filename using up to five characters of PFX
   if it is not NULL.  The directory to put this file in is searched for
   as follows: First the environment variable "TMPDIR" is checked.
   If it contains the name of a writable directory, that directory is used.
   If not and if DIR is not NULL, that value is checked.  If that fails,
   P_tmpdir is tried and finally "/tmp".  The storage for the filename
   is allocated by `malloc'.  */
extern char *tempnam (const char *__dir, const char *__pfx)
     __THROW __attribute_malloc__ __wur;
#endif
# 193 "/usr/include/stdio.h" 3 4


/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream);
/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);

#ifdef __USE_MISC
/* Faster versions when locking is not required.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fflush_unlocked (FILE *__stream);
#endif
# 215 "/usr/include/stdio.h" 3 4

#ifdef __USE_GNU
/* Close all streams.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fcloseall (void);
#endif
# 225 "/usr/include/stdio.h" 3 4


#ifndef __USE_FILE_OFFSET64
/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (const char *__restrict __filename,
		    const char *__restrict __modes) __wur;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (const char *__restrict __filename,
		      const char *__restrict __modes,
		      FILE *__restrict __stream) __wur;
#else
# 242 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern FILE *__REDIRECT (fopen, (const char *__restrict __filename,
				 const char *__restrict __modes), fopen64)
  __wur;
extern FILE *__REDIRECT (freopen, (const char *__restrict __filename,
				   const char *__restrict __modes,
				   FILE *__restrict __stream), freopen64)
  __wur;
# else
# 251 "/usr/include/stdio.h" 3 4
#  define fopen fopen64
#  define freopen freopen64
# endif
# 254 "/usr/include/stdio.h" 3 4
#endif
# 255 "/usr/include/stdio.h" 3 4
#ifdef __USE_LARGEFILE64
extern FILE *fopen64 (const char *__restrict __filename,
		      const char *__restrict __modes) __wur;
extern FILE *freopen64 (const char *__restrict __filename,
			const char *__restrict __modes,
			FILE *__restrict __stream) __wur;
#endif
# 262 "/usr/include/stdio.h" 3 4

#ifdef	__USE_POSIX
/* Create a new stream that refers to an existing system file descriptor.  */
extern FILE *fdopen (int __fd, const char *__modes) __THROW __wur;
#endif
# 267 "/usr/include/stdio.h" 3 4

#ifdef	__USE_GNU
/* Create a new stream that refers to the given magic cookie,
   and uses the given functions for input and output.  */
extern FILE *fopencookie (void *__restrict __magic_cookie,
			  const char *__restrict __modes,
			  _IO_cookie_io_functions_t __io_funcs) __THROW __wur;
#endif
# 275 "/usr/include/stdio.h" 3 4

#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
/* Create a new stream that refers to a memory buffer.  */
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __THROW __wur;

/* Open a stream that writes into a malloc'd buffer that is expanded as
   necessary.  *BUFLOC and *SIZELOC are updated with the buffer's location
   and the number of characters written on fflush or fclose.  */
extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __THROW __wur;
#endif
# 286 "/usr/include/stdio.h" 3 4


/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __THROW;
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
		    int __modes, size_t __n) __THROW;

#ifdef	__USE_MISC
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use SIZE bytes of BUF for buffering.  */
extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
		       size_t __size) __THROW;

/* Make STREAM line-buffered.  */
extern void setlinebuf (FILE *__stream) __THROW;
#endif
# 306 "/usr/include/stdio.h" 3 4


/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *__restrict __stream,
		    const char *__restrict __format, ...);
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (const char *__restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *__restrict __s,
		    const char *__restrict __format, ...) __THROWNL;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
		     _G_va_list __arg);
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (const char *__restrict __format, _G_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
		     _G_va_list __arg) __THROWNL;

#if defined __USE_ISOC99 || defined __USE_UNIX98
/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *__restrict __s, size_t __maxlen,
		     const char *__restrict __format, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
		      const char *__restrict __format, _G_va_list __arg)
     __THROWNL __attribute__ ((__format__ (__printf__, 3, 0)));
#endif
# 348 "/usr/include/stdio.h" 3 4

#if __GLIBC_USE (LIB_EXT2)
/* Write formatted output to a string dynamically allocated with `malloc'.
   Store the address of the string in *PTR.  */
extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
		      _G_va_list __arg)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 0))) __wur;
extern int __asprintf (char **__restrict __ptr,
		       const char *__restrict __fmt, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3))) __wur;
extern int asprintf (char **__restrict __ptr,
		     const char *__restrict __fmt, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3))) __wur;
#endif
# 362 "/usr/include/stdio.h" 3 4

#ifdef __USE_XOPEN2K8
/* Write formatted output to a file descriptor.  */
extern int vdprintf (int __fd, const char *__restrict __fmt,
		     _G_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
#endif
# 371 "/usr/include/stdio.h" 3 4


/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *__restrict __stream,
		   const char *__restrict __format, ...) __wur;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (const char *__restrict __format, ...) __wur;
/* Read formatted input from S.  */
extern int sscanf (const char *__restrict __s,
		   const char *__restrict __format, ...) __THROW;

#if defined __USE_ISOC99 && !defined __USE_GNU \
    && (!defined __LDBL_COMPAT || !defined __REDIRECT) \
    && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
# ifdef __REDIRECT
/* For strict ISO C99 or POSIX compliance disallow %as, %aS and %a[
   GNU extension which conflicts with valid %a followed by letter
   s, S or [.  */
extern int __REDIRECT (fscanf, (FILE *__restrict __stream,
				const char *__restrict __format, ...),
		       __isoc99_fscanf) __wur;
extern int __REDIRECT (scanf, (const char *__restrict __format, ...),
		       __isoc99_scanf) __wur;
extern int __REDIRECT_NTH (sscanf, (const char *__restrict __s,
				    const char *__restrict __format, ...),
			   __isoc99_sscanf);
# else
# 404 "/usr/include/stdio.h" 3 4
extern int __isoc99_fscanf (FILE *__restrict __stream,
			    const char *__restrict __format, ...) __wur;
extern int __isoc99_scanf (const char *__restrict __format, ...) __wur;
extern int __isoc99_sscanf (const char *__restrict __s,
			    const char *__restrict __format, ...) __THROW;
#  define fscanf __isoc99_fscanf
#  define scanf __isoc99_scanf
#  define sscanf __isoc99_sscanf
# endif
# 413 "/usr/include/stdio.h" 3 4
#endif
# 414 "/usr/include/stdio.h" 3 4

#ifdef	__USE_ISOC99
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
		    _G_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __wur;

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (const char *__restrict __format, _G_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __wur;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (const char *__restrict __s,
		    const char *__restrict __format, _G_va_list __arg)
     __THROW __attribute__ ((__format__ (__scanf__, 2, 0)));

# if !defined __USE_GNU \
     && (!defined __LDBL_COMPAT || !defined __REDIRECT) \
     && (defined __STRICT_ANSI__ || defined __USE_XOPEN2K)
#  ifdef __REDIRECT
/* For strict ISO C99 or POSIX compliance disallow %as, %aS and %a[
   GNU extension which conflicts with valid %a followed by letter
   s, S or [.  */
extern int __REDIRECT (vfscanf,
		       (FILE *__restrict __s,
			const char *__restrict __format, _G_va_list __arg),
		       __isoc99_vfscanf)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __wur;
extern int __REDIRECT (vscanf, (const char *__restrict __format,
				_G_va_list __arg), __isoc99_vscanf)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __wur;
extern int __REDIRECT_NTH (vsscanf,
			   (const char *__restrict __s,
			    const char *__restrict __format,
			    _G_va_list __arg), __isoc99_vsscanf)
     __attribute__ ((__format__ (__scanf__, 2, 0)));
#  else
# 457 "/usr/include/stdio.h" 3 4
extern int __isoc99_vfscanf (FILE *__restrict __s,
			     const char *__restrict __format,
			     _G_va_list __arg) __wur;
extern int __isoc99_vscanf (const char *__restrict __format,
			    _G_va_list __arg) __wur;
extern int __isoc99_vsscanf (const char *__restrict __s,
			     const char *__restrict __format,
			     _G_va_list __arg) __THROW;
#   define vfscanf __isoc99_vfscanf
#   define vscanf __isoc99_vscanf
#   define vsscanf __isoc99_vsscanf
#  endif
# 469 "/usr/include/stdio.h" 3 4
# endif
# 470 "/usr/include/stdio.h" 3 4
#endif /* Use ISO C9x.  */
# 471 "/usr/include/stdio.h" 3 4


/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);

/* The C standard explicitly says this is a macro, so we always do the
   optimization for it.  */
#define getc(_fp) _IO_getc (_fp)

#ifdef __USE_POSIX199506
/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
#endif /* Use POSIX.  */
# 498 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fgetc_unlocked (FILE *__stream);
#endif /* Use MISC.  */
# 508 "/usr/include/stdio.h" 3 4


/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.

   These functions is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);

/* The C standard explicitly says this can be a macro,
   so we always do the optimization for it.  */
#define putc(_ch, _fp) _IO_putc (_ch, _fp)

#ifdef __USE_MISC
/* Faster version when locking is not necessary.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputc_unlocked (int __c, FILE *__stream);
#endif /* Use MISC.  */
# 539 "/usr/include/stdio.h" 3 4

#ifdef __USE_POSIX199506
/* These are defined in POSIX.1:1996.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
#endif /* Use POSIX.  */
# 548 "/usr/include/stdio.h" 3 4


#if defined __USE_MISC \
    || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
/* Get a word (int) from STREAM.  */
extern int getw (FILE *__stream);

/* Write a word (int) to STREAM.  */
extern int putw (int __w, FILE *__stream);
#endif
# 558 "/usr/include/stdio.h" 3 4


/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __wur;

#if __GLIBC_USE (DEPRECATED_GETS)
/* Get a newline-terminated string from stdin, removing the newline.

   This function is impossible to use safely.  It has been officially
   removed from ISO C11 and ISO C++14, and we have also removed it
   from the _GNU_SOURCE feature list.  It remains available when
   explicitly using an old ISO C, Unix, or POSIX standard.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *gets (char *__s) __wur __attribute_deprecated__;
#endif
# 579 "/usr/include/stdio.h" 3 4

#ifdef __USE_GNU
/* This function does the same as `fgets' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern char *fgets_unlocked (char *__restrict __s, int __n,
			     FILE *__restrict __stream) __wur;
#endif
# 590 "/usr/include/stdio.h" 3 4


#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
/* Read up to (and including) a DELIMITER from STREAM into *LINEPTR
   (and null-terminate it). *LINEPTR is a pointer returned from malloc (or
   NULL), pointing to *N characters of space.  It is realloc'd as
   necessary.  Returns the number of characters read (not including the
   null terminator), or -1 on error or EOF.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern _IO_ssize_t __getdelim (char **__restrict __lineptr,
			       size_t *__restrict __n, int __delimiter,
			       FILE *__restrict __stream) __wur;
extern _IO_ssize_t getdelim (char **__restrict __lineptr,
			     size_t *__restrict __n, int __delimiter,
			     FILE *__restrict __stream) __wur;

/* Like `getdelim', but reads up to a newline.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern _IO_ssize_t getline (char **__restrict __lineptr,
			    size_t *__restrict __n,
			    FILE *__restrict __stream) __wur;
#endif
# 620 "/usr/include/stdio.h" 3 4


/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream);


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void *__restrict __ptr, size_t __size,
		     size_t __n, FILE *__restrict __stream) __wur;
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
		      size_t __n, FILE *__restrict __s);

#ifdef __USE_GNU
/* This function does the same as `fputs' but does not lock the stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int fputs_unlocked (const char *__restrict __s,
			   FILE *__restrict __stream);
#endif
# 665 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster versions when locking is not necessary.

   These functions are not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation they are cancellation points and
   therefore not marked with __THROW.  */
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
			      size_t __n, FILE *__restrict __stream) __wur;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
			       size_t __n, FILE *__restrict __stream);
#endif
# 678 "/usr/include/stdio.h" 3 4


/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) __wur;
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream);

/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */

#if defined __USE_LARGEFILE || defined __USE_XOPEN2K
# ifndef __USE_FILE_OFFSET64
/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseeko (FILE *__stream, __off_t __off, int __whence);
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern __off_t ftello (FILE *__stream) __wur;
# else
# 714 "/usr/include/stdio.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (fseeko,
		       (FILE *__stream, __off64_t __off, int __whence),
		       fseeko64);
extern __off64_t __REDIRECT (ftello, (FILE *__stream), ftello64);
#  else
# 720 "/usr/include/stdio.h" 3 4
#   define fseeko fseeko64
#   define ftello ftello64
#  endif
# 723 "/usr/include/stdio.h" 3 4
# endif
# 724 "/usr/include/stdio.h" 3 4
#endif
# 725 "/usr/include/stdio.h" 3 4

#ifndef __USE_FILE_OFFSET64
/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, const fpos_t *__pos);
#else
# 738 "/usr/include/stdio.h" 3 4
# ifdef __REDIRECT
extern int __REDIRECT (fgetpos, (FILE *__restrict __stream,
				 fpos_t *__restrict __pos), fgetpos64);
extern int __REDIRECT (fsetpos,
		       (FILE *__stream, const fpos_t *__pos), fsetpos64);
# else
# 744 "/usr/include/stdio.h" 3 4
#  define fgetpos fgetpos64
#  define fsetpos fsetpos64
# endif
# 747 "/usr/include/stdio.h" 3 4
#endif
# 748 "/usr/include/stdio.h" 3 4

#ifdef __USE_LARGEFILE64
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __wur;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);
#endif
# 755 "/usr/include/stdio.h" 3 4

/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) __THROW;
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) __THROW __wur;
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) __THROW __wur;

#ifdef __USE_MISC
/* Faster versions when locking is not required.  */
extern void clearerr_unlocked (FILE *__stream) __THROW;
extern int feof_unlocked (FILE *__stream) __THROW __wur;
extern int ferror_unlocked (FILE *__stream) __THROW __wur;
#endif
# 769 "/usr/include/stdio.h" 3 4


/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (const char *__s);

/* Provide the declarations for `sys_errlist' and `sys_nerr' if they
   are available on this system.  Even if available, these variables
   should not be used directly.  The `strerror' function provides
   all the necessary functionality.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/sys_errlist.h>
#endif /* expanded by -frewrite-includes */
# 781 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
/* Declare sys_errlist and sys_nerr, or don't.  Compatibility (do) version.
   Copyright (C) 2002-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _STDIO_H
# error "Never include <bits/sys_errlist.h> directly; use <stdio.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4

/* sys_errlist and sys_nerr are deprecated.  Use strerror instead.  */

#ifdef  __USE_MISC
extern int sys_nerr;
extern const char *const sys_errlist[];
#endif
# 29 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
#ifdef  __USE_GNU
extern int _sys_nerr;
extern const char *const _sys_errlist[];
#endif
# 33 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
# 782 "/usr/include/stdio.h" 2 3 4


#ifdef	__USE_POSIX
/* Return the system file descriptor for STREAM.  */
extern int fileno (FILE *__stream) __THROW __wur;
#endif /* Use POSIX.  */
# 788 "/usr/include/stdio.h" 3 4

#ifdef __USE_MISC
/* Faster version when locking is not required.  */
extern int fileno_unlocked (FILE *__stream) __THROW __wur;
#endif
# 793 "/usr/include/stdio.h" 3 4


#ifdef __USE_POSIX2
/* Create a new stream connected to a pipe running the given command.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *popen (const char *__command, const char *__modes) __wur;

/* Close a stream opened by popen and return the status of its child.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int pclose (FILE *__stream);
#endif
# 808 "/usr/include/stdio.h" 3 4


#ifdef	__USE_POSIX
/* Return the name of the controlling terminal.  */
extern char *ctermid (char *__s) __THROW;
#endif /* Use POSIX.  */
# 814 "/usr/include/stdio.h" 3 4


#if (defined __USE_XOPEN && !defined __USE_XOPEN2K) || defined __USE_GNU
/* Return the name of the current user.  */
extern char *cuserid (char *__s);
#endif /* Use X/Open, but not issue 6.  */
# 820 "/usr/include/stdio.h" 3 4


#ifdef	__USE_GNU
struct obstack;			/* See <obstack.h>.  */

/* Write formatted output to an obstack.  */
extern int obstack_printf (struct obstack *__restrict __obstack,
			   const char *__restrict __format, ...)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
			    const char *__restrict __format,
			    _G_va_list __args)
     __THROWNL __attribute__ ((__format__ (__printf__, 2, 0)));
#endif /* Use GNU.  */
# 834 "/usr/include/stdio.h" 3 4


#ifdef __USE_POSIX199506
/* These are defined in POSIX.1:1996.  */

/* Acquire ownership of STREAM.  */
extern void flockfile (FILE *__stream) __THROW;

/* Try to acquire ownership of STREAM but do not block if it is not
   possible.  */
extern int ftrylockfile (FILE *__stream) __THROW __wur;

/* Relinquish the ownership granted for STREAM.  */
extern void funlockfile (FILE *__stream) __THROW;
#endif /* POSIX */
# 849 "/usr/include/stdio.h" 3 4

#if defined __USE_XOPEN && !defined __USE_XOPEN2K && !defined __USE_GNU
/*  X/Open Issues 1-5 required getopt to be declared in this
   header.  It was removed in Issue 6.  GNU follows Issue 6.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/getopt_posix.h>
#endif /* expanded by -frewrite-includes */
# 853 "/usr/include/stdio.h" 3 4
# 854 "/usr/include/stdio.h" 3 4
#endif
# 855 "/usr/include/stdio.h" 3 4

/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio.h>
#endif /* expanded by -frewrite-includes */
# 859 "/usr/include/stdio.h" 3 4
# 860 "/usr/include/stdio.h" 3 4
#endif
# 861 "/usr/include/stdio.h" 3 4
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio2.h>
#endif /* expanded by -frewrite-includes */
# 862 "/usr/include/stdio.h" 3 4
# 863 "/usr/include/stdio.h" 3 4
#endif
# 864 "/usr/include/stdio.h" 3 4
#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdio-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 865 "/usr/include/stdio.h" 3 4
# 866 "/usr/include/stdio.h" 3 4
#endif
# 867 "/usr/include/stdio.h" 3 4

__END_DECLS

#endif /* <stdio.h> included.  */
# 871 "/usr/include/stdio.h" 3 4
# 30 "tests.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 30 "tests.c"
# 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */

#ifndef	_STDLIB_H

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#if 0 /* expanded by -frewrite-includes */
#include <bits/libc-header-start.h>
#endif /* expanded by -frewrite-includes */
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */

#ifndef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
# error "Never include <bits/libc-header-start.h> directly."
#endif
# 30 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#undef __GLIBC_USE_LIB_EXT2
#if (defined __USE_GNU							\
     || (defined __STDC_WANT_LIB_EXT2__ && __STDC_WANT_LIB_EXT2__ > 0))
# define __GLIBC_USE_LIB_EXT2 1
#else
# 42 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 0
#endif
# 44 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  */
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_BFP_EXT__
# define __GLIBC_USE_IEC_60559_BFP_EXT 1
#else
# 51 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 0
#endif
# 53 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#else
# 60 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#endif
# 62 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_TYPES_EXT__
# define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#else
# 69 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#endif
# 71 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 26 "/usr/include/stdlib.h" 2 3 4

/* Get size_t, wchar_t and NULL from <stddef.h>.  */
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 31 "/usr/include/stdlib.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 32 "/usr/include/stdlib.h" 2 3 4

__BEGIN_DECLS

#define	_STDLIB_H	1

#if (defined __USE_XOPEN || defined __USE_XOPEN2K8) && !defined _SYS_WAIT_H
/* XPG requires a few symbols from <sys/wait.h> being defined.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/waitflags.h>
#endif /* expanded by -frewrite-includes */
# 39 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
/* Definitions of flag bits for `waitpid' et al.
   Copyright (C) 1992-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _SYS_WAIT_H && !defined _STDLIB_H
# error "Never include <bits/waitflags.h> directly; use <sys/wait.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4


/* Bits in the third argument to `waitpid'.  */
#define	WNOHANG		1	/* Don't block waiting.  */
#define	WUNTRACED	2	/* Report status of stopped children.  */

/* Bits in the fourth argument to `waitid'.  */
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# define WSTOPPED	2	/* Report stopped child (same as WUNTRACED). */
# define WEXITED	4	/* Report dead child.  */
# define WCONTINUED	8	/* Report continued child.  */
# define WNOWAIT	0x01000000 /* Don't reap, just poll status.  */
#endif
# 35 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4

#define __WNOTHREAD     0x20000000 /* Don't wait on children of other threads
				      in this group */
#define __WALL		0x40000000 /* Wait for any child.  */
#define __WCLONE	0x80000000 /* Wait for cloned process.  */

/* The following values are used by the `waitid' function.  */
#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
# ifndef __ENUM_IDTYPE_T
# define __ENUM_IDTYPE_T 1

/* The Linux kernel defines these bare, rather than an enum,
   which causes a conflict if the include order is reversed. */
# undef P_ALL
# undef P_PID
# undef P_PGID

typedef enum
{
  P_ALL,		/* Wait for any child.  */
  P_PID,		/* Wait for specified process.  */
  P_PGID		/* Wait for members of process group.  */
} idtype_t;
# endif
# 59 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
#endif
# 60 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
# 40 "/usr/include/stdlib.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/waitstatus.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
/* Definitions of status bits for `wait' et al.
   Copyright (C) 1992-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _SYS_WAIT_H && !defined _STDLIB_H
# error "Never include <bits/waitstatus.h> directly; use <sys/wait.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4


/* Everything extant so far uses these same bits.  */


/* If WIFEXITED(STATUS), the low-order 8 bits of the status.  */
#define	__WEXITSTATUS(status)	(((status) & 0xff00) >> 8)

/* If WIFSIGNALED(STATUS), the terminating signal.  */
#define	__WTERMSIG(status)	((status) & 0x7f)

/* If WIFSTOPPED(STATUS), the signal that stopped the child.  */
#define	__WSTOPSIG(status)	__WEXITSTATUS(status)

/* Nonzero if STATUS indicates normal termination.  */
#define	__WIFEXITED(status)	(__WTERMSIG(status) == 0)

/* Nonzero if STATUS indicates termination by a signal.  */
#define __WIFSIGNALED(status) \
  (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)

/* Nonzero if STATUS indicates the child is stopped.  */
#define	__WIFSTOPPED(status)	(((status) & 0xff) == 0x7f)

/* Nonzero if STATUS indicates the child continued after a stop.  We only
   define this if <bits/waitflags.h> provides the WCONTINUED flag bit.  */
#ifdef WCONTINUED
# define __WIFCONTINUED(status)	((status) == __W_CONTINUED)
#endif
# 51 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4

/* Nonzero if STATUS indicates the child dumped core.  */
#define	__WCOREDUMP(status)	((status) & __WCOREFLAG)

/* Macros for constructing status values.  */
#define	__W_EXITCODE(ret, sig)	((ret) << 8 | (sig))
#define	__W_STOPCODE(sig)	((sig) << 8 | 0x7f)
#define __W_CONTINUED		0xffff
#define	__WCOREFLAG		0x80
# 41 "/usr/include/stdlib.h" 2 3 4

/* Define the macros <sys/wait.h> also would define this way.  */
# define WEXITSTATUS(status)	__WEXITSTATUS (status)
# define WTERMSIG(status)	__WTERMSIG (status)
# define WSTOPSIG(status)	__WSTOPSIG (status)
# define WIFEXITED(status)	__WIFEXITED (status)
# define WIFSIGNALED(status)	__WIFSIGNALED (status)
# define WIFSTOPPED(status)	__WIFSTOPPED (status)
# ifdef __WIFCONTINUED
#  define WIFCONTINUED(status)	__WIFCONTINUED (status)
# endif
# 52 "/usr/include/stdlib.h" 3 4
#endif	/* X/Open or XPG7 and <sys/wait.h> not included.  */
# 53 "/usr/include/stdlib.h" 3 4

/* _FloatN API tests for enablement.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/floatn.h>
#endif /* expanded by -frewrite-includes */
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
/* Macros to control TS 18661-3 glibc features on x86.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_FLOATN_H
#define _BITS_FLOATN_H

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the IEEE 754 binary128 format, and this
   glibc includes corresponding *f128 interfaces for it.  The required
   libgcc support was added some time after the basic compiler
   support, for x86_64 and x86.  */
#if (defined __x86_64__							\
     ? __GNUC_PREREQ (4, 3)						\
     : (defined __GNU__ ? __GNUC_PREREQ (4, 5) : __GNUC_PREREQ (4, 4))) \
     &&  !defined(__CUDACC__) && !defined(__ICC)
# define __HAVE_FLOAT128 1
#else
# 35 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# define __HAVE_FLOAT128 0
#endif
# 37 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* Defined to 1 if __HAVE_FLOAT128 is 1 and the type is ABI-distinct
   from the default float, double and long double types in this glibc.  */
#if __HAVE_FLOAT128
# define __HAVE_DISTINCT_FLOAT128 1
#else
# 43 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# define __HAVE_DISTINCT_FLOAT128 0
#endif
# 45 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for _Float64x, and this
   glibc includes corresponding *f64x interfaces for it.  */
#define __HAVE_FLOAT64X 1

/* Defined to 1 if __HAVE_FLOAT64X is 1 and _Float64x has the format
   of long double.  Otherwise, if __HAVE_FLOAT64X is 1, _Float64x has
   the format of _Float128, which must be different from that of long
   double.  */
#define __HAVE_FLOAT64X_LONG_DOUBLE 1

#ifndef __ASSEMBLER__

/* Defined to concatenate the literal suffix to be used with _Float128
   types, if __HAVE_FLOAT128 is 1. */
# if __HAVE_FLOAT128
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
/* The literal suffix f128 exists only since GCC 7.0.  */
#   define __f128(x) x##q
#  else
# 66 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
#   define __f128(x) x##f128
#  endif
# 68 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# endif
# 69 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* Defined to a complex binary128 type if __HAVE_FLOAT128 is 1.  */
# if __HAVE_FLOAT128
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
/* Add a typedef for older GCC compilers which don't natively support
   _Complex _Float128.  */
typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__)));
#   define __CFLOAT128 __cfloat128
#  else
# 78 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
#   define __CFLOAT128 _Complex _Float128
#  endif
# 80 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# endif
# 81 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* The remaining of this file provides support for older compilers.  */
# if __HAVE_FLOAT128

/* The type _Float128 exists only since GCC 7.0.  */
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef __float128 _Float128;
#  endif
# 89 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* __builtin_huge_valf128 doesn't exist before GCC 7.0.  */
#  if !__GNUC_PREREQ (7, 0)
#   define __builtin_huge_valf128() ((_Float128) __builtin_huge_val ())
#  endif
# 94 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* Older GCC has only a subset of built-in functions for _Float128 on
   x86, and __builtin_infq is not usable in static initializers.
   Converting a narrower sNaN to _Float128 produces a quiet NaN, so
   attempts to use _Float128 sNaNs will not work properly with older
   compilers.  */
#  if !__GNUC_PREREQ (7, 0)
#   define __builtin_copysignf128 __builtin_copysignq
#   define __builtin_fabsf128 __builtin_fabsq
#   define __builtin_inff128() ((_Float128) __builtin_inf ())
#   define __builtin_nanf128(x) ((_Float128) __builtin_nan (x))
#   define __builtin_nansf128(x) ((_Float128) __builtin_nans (x))
#  endif
# 107 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

/* In math/math.h, __MATH_TG will expand signbit to __builtin_signbit*,
   e.g.: __builtin_signbitf128, before GCC 6.  However, there has never
   been a __builtin_signbitf128 in GCC and the type-generic builtin is
   only available since GCC 6.  */
#  if !__GNUC_PREREQ (6, 0)
#   define __builtin_signbitf128 __signbitf128
#  endif
# 115 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

# endif
# 117 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

#endif /* !__ASSEMBLER__.  */
# 119 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/floatn-common.h>
#endif /* expanded by -frewrite-includes */
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
/* Macros to control TS 18661-3 glibc features where the same
   definitions are appropriate for all platforms.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_FLOATN_COMMON_H
#define _BITS_FLOATN_COMMON_H

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/long-double.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4

/* This header should be included at the bottom of each bits/floatn.h.
   It defines the following macros for each _FloatN and _FloatNx type,
   where the same definitions, or definitions based only on the macros
   in bits/floatn.h, are appropriate for all glibc configurations.  */

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for this type, and this
   glibc includes corresponding *fN or *fNx interfaces for it.  */
#define __HAVE_FLOAT16 0
#define __HAVE_FLOAT32 1
#define __HAVE_FLOAT64 1
#define __HAVE_FLOAT32X 1
#define __HAVE_FLOAT128X 0

/* Defined to 1 if the corresponding __HAVE_<type> macro is 1 and the
   type is the first with its format in the sequence of (the default
   choices for) float, double, long double, _Float16, _Float32,
   _Float64, _Float128, _Float32x, _Float64x, _Float128x for this
   glibc; that is, if functions present once per floating-point format
   rather than once per type are present for this type.

   All configurations supported by glibc have _Float32 the same format
   as float, _Float64 and _Float32x the same format as double, the
   _Float64x the same format as either long double or _Float128.  No
   configurations support _Float128x or, as of GCC 7, have compiler
   support for a type meeting the requirements for _Float128x.  */
#define __HAVE_DISTINCT_FLOAT16 __HAVE_FLOAT16
#define __HAVE_DISTINCT_FLOAT32 0
#define __HAVE_DISTINCT_FLOAT64 0
#define __HAVE_DISTINCT_FLOAT32X 0
#define __HAVE_DISTINCT_FLOAT64X 0
#define __HAVE_DISTINCT_FLOAT128X __HAVE_FLOAT128X

/* Defined to 1 if any _FloatN or _FloatNx types that are not
   ABI-distinct are however distinct types at the C language level (so
   for the purposes of __builtin_types_compatible_p and _Generic).  */
#if __GNUC_PREREQ (7, 0) && !defined __cplusplus
# define __HAVE_FLOATN_NOT_TYPEDEF 1
#else
# 65 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# define __HAVE_FLOATN_NOT_TYPEDEF 0
#endif
# 67 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#ifndef __ASSEMBLER__

/* Defined to concatenate the literal suffix to be used with _FloatN
   or _FloatNx types, if __HAVE_<type> is 1.  The corresponding
   literal suffixes exist since GCC 7, for C only.  */
# if __HAVE_FLOAT16
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
/* No corresponding suffix available for this type.  */
#   define __f16(x) ((_Float16) x##f)
#  else
# 78 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f16(x) x##f16
#  endif
# 80 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 81 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT32
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   define __f32(x) x##f
#  else
# 86 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f32(x) x##f32
#  endif
# 88 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 89 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT64
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   ifdef __NO_LONG_DOUBLE_MATH
#    define __f64(x) x##l
#   else
# 95 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#    define __f64(x) x
#   endif
# 97 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 98 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f64(x) x##f64
#  endif
# 100 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 101 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT32X
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   define __f32x(x) x
#  else
# 106 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f32x(x) x##f32x
#  endif
# 108 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 109 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT64X
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   if __HAVE_FLOAT64X_LONG_DOUBLE
#    define __f64x(x) x##l
#   else
# 115 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#    define __f64x(x) __f128 (x)
#   endif
# 117 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 118 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f64x(x) x##f64x
#  endif
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT128X
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   error "_Float128X supported but no constant suffix"
#  else
# 126 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __f128x(x) x##f128x
#  endif
# 128 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 129 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

/* Defined to a complex type if __HAVE_<type> is 1.  */
# if __HAVE_FLOAT16
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef _Complex float __cfloat16 __attribute__ ((__mode__ (__HC__)));
#   define __CFLOAT16 __cfloat16
#  else
# 136 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT16 _Complex _Float16
#  endif
# 138 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 139 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT32
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   define __CFLOAT32 _Complex float
#  else
# 144 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT32 _Complex _Float32
#  endif
# 146 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 147 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT64
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   ifdef __NO_LONG_DOUBLE_MATH
#    define __CFLOAT64 _Complex long double
#   else
# 153 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#    define __CFLOAT64 _Complex double
#   endif
# 155 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 156 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT64 _Complex _Float64
#  endif
# 158 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 159 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT32X
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   define __CFLOAT32X _Complex double
#  else
# 164 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT32X _Complex _Float32x
#  endif
# 166 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 167 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT64X
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   if __HAVE_FLOAT64X_LONG_DOUBLE
#    define __CFLOAT64X _Complex long double
#   else
# 173 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#    define __CFLOAT64X __CFLOAT128
#   endif
# 175 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#  else
# 176 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT64X _Complex _Float64x
#  endif
# 178 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 179 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT128X
#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   error "_Float128X supported but no complex type"
#  else
# 184 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
#   define __CFLOAT128X _Complex _Float128x
#  endif
# 186 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# endif
# 187 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

/* The remaining of this file provides support for older compilers.  */
# if __HAVE_FLOAT16

#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef float _Float16 __attribute__ ((__mode__ (__HF__)));
#  endif
# 194 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  if !__GNUC_PREREQ (7, 0)
#   define __builtin_huge_valf16() ((_Float16) __builtin_huge_val ())
#   define __builtin_inff16() ((_Float16) __builtin_inf ())
#   define __builtin_nanf16(x) ((_Float16) __builtin_nan (x))
#   define __builtin_nansf16(x) ((_Float16) __builtin_nans (x))
#  endif
# 201 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 203 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT32

#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef float _Float32;
#  endif
# 209 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  if !__GNUC_PREREQ (7, 0)
#   define __builtin_huge_valf32() (__builtin_huge_valf ())
#   define __builtin_inff32() (__builtin_inff ())
#   define __builtin_nanf32(x) (__builtin_nanf (x))
#   define __builtin_nansf32(x) (__builtin_nansf (x))
#  endif
# 216 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 218 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT64

/* If double, long double and _Float64 all have the same set of
   values, TS 18661-3 requires the usual arithmetic conversions on
   long double and _Float64 to produce _Float64.  For this to be the
   case when building with a compiler without a distinct _Float64
   type, _Float64 must be a typedef for long double, not for
   double.  */

#  ifdef __NO_LONG_DOUBLE_MATH

#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef long double _Float64;
#   endif
# 233 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#   if !__GNUC_PREREQ (7, 0)
#    define __builtin_huge_valf64() (__builtin_huge_vall ())
#    define __builtin_inff64() (__builtin_infl ())
#    define __builtin_nanf64(x) (__builtin_nanl (x))
#    define __builtin_nansf64(x) (__builtin_nansl (x))
#   endif
# 240 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  else
# 242 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef double _Float64;
#   endif
# 246 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#   if !__GNUC_PREREQ (7, 0)
#    define __builtin_huge_valf64() (__builtin_huge_val ())
#    define __builtin_inff64() (__builtin_inf ())
#    define __builtin_nanf64(x) (__builtin_nan (x))
#    define __builtin_nansf64(x) (__builtin_nans (x))
#   endif
# 253 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  endif
# 255 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 257 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT32X

#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef double _Float32x;
#  endif
# 263 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  if !__GNUC_PREREQ (7, 0)
#   define __builtin_huge_valf32x() (__builtin_huge_val ())
#   define __builtin_inff32x() (__builtin_inf ())
#   define __builtin_nanf32x(x) (__builtin_nan (x))
#   define __builtin_nansf32x(x) (__builtin_nans (x))
#  endif
# 270 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 272 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT64X

#  if __HAVE_FLOAT64X_LONG_DOUBLE

#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef long double _Float64x;
#   endif
# 280 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#   if !__GNUC_PREREQ (7, 0)
#    define __builtin_huge_valf64x() (__builtin_huge_vall ())
#    define __builtin_inff64x() (__builtin_infl ())
#    define __builtin_nanf64x(x) (__builtin_nanl (x))
#    define __builtin_nansf64x(x) (__builtin_nansl (x))
#   endif
# 287 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  else
# 289 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#   if !__GNUC_PREREQ (7, 0) || defined __cplusplus
typedef _Float128 _Float64x;
#   endif
# 293 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#   if !__GNUC_PREREQ (7, 0)
#    define __builtin_huge_valf64x() (__builtin_huge_valf128 ())
#    define __builtin_inff64x() (__builtin_inff128 ())
#    define __builtin_nanf64x(x) (__builtin_nanf128 (x))
#    define __builtin_nansf64x(x) (__builtin_nansf128 (x))
#   endif
# 300 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  endif
# 302 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 304 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# if __HAVE_FLOAT128X

#  if !__GNUC_PREREQ (7, 0) || defined __cplusplus
#   error "_Float128x supported but no type"
#  endif
# 310 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#  if !__GNUC_PREREQ (7, 0)
#   define __builtin_huge_valf128x() ((_Float128x) __builtin_huge_val ())
#   define __builtin_inff128x() ((_Float128x) __builtin_inf ())
#   define __builtin_nanf128x(x) ((_Float128x) __builtin_nan (x))
#   define __builtin_nansf128x(x) ((_Float128x) __builtin_nans (x))
#  endif
# 317 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

# endif
# 319 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#endif /* !__ASSEMBLER__.  */
# 321 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4

#endif /* _BITS_FLOATN_COMMON_H */
# 323 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4

#endif /* _BITS_FLOATN_H */
# 123 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 56 "/usr/include/stdlib.h" 2 3 4

/* Returned by `div'.  */
typedef struct
  {
    int quot;			/* Quotient.  */
    int rem;			/* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */
#ifndef __ldiv_t_defined
typedef struct
  {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
  } ldiv_t;
# define __ldiv_t_defined	1
#endif
# 73 "/usr/include/stdlib.h" 3 4

#if defined __USE_ISOC99 && !defined __lldiv_t_defined
/* Returned by `lldiv'.  */
__extension__ typedef struct
  {
    long long int quot;		/* Quotient.  */
    long long int rem;		/* Remainder.  */
  } lldiv_t;
# define __lldiv_t_defined	1
#endif
# 83 "/usr/include/stdlib.h" 3 4


/* The largest number rand will return (same as INT_MAX).  */
#define	RAND_MAX	2147483647


/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */
#define	EXIT_FAILURE	1	/* Failing exit status.  */
#define	EXIT_SUCCESS	0	/* Successful exit status.  */


/* Maximum length of a multibyte character in the current locale.  */
#define	MB_CUR_MAX	(__ctype_get_mb_cur_max ())
extern size_t __ctype_get_mb_cur_max (void) __THROW __wur;


/* Convert a string to a floating-point number.  */
extern double atof (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to an integer.  */
extern int atoi (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
/* Convert a string to a long integer.  */
extern long int atol (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;

#ifdef __USE_ISOC99
/* Convert a string to a long long integer.  */
__extension__ extern long long int atoll (const char *__nptr)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;
#endif
# 115 "/usr/include/stdlib.h" 3 4

/* Convert a string to a floating-point number.  */
extern double strtod (const char *__restrict __nptr,
		      char **__restrict __endptr)
     __THROW __nonnull ((1));

#ifdef	__USE_ISOC99
/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (const char *__restrict __nptr,
		     char **__restrict __endptr) __THROW __nonnull ((1));

extern long double strtold (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 130 "/usr/include/stdlib.h" 3 4

/* Likewise for '_FloatN' and '_FloatNx'.  */

#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern _Float16 strtof16 (const char *__restrict __nptr,
			  char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 138 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern _Float32 strtof32 (const char *__restrict __nptr,
			  char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 144 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern _Float64 strtof64 (const char *__restrict __nptr,
			  char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 150 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern _Float128 strtof128 (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 156 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern _Float32x strtof32x (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 162 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern _Float64x strtof64x (const char *__restrict __nptr,
			    char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 168 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern _Float128x strtof128x (const char *__restrict __nptr,
			      char **__restrict __endptr)
     __THROW __nonnull ((1));
#endif
# 174 "/usr/include/stdlib.h" 3 4

/* Convert a string to a long integer.  */
extern long int strtol (const char *__restrict __nptr,
			char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (const char *__restrict __nptr,
				  char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));

#ifdef __USE_MISC
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoq (const char *__restrict __nptr,
			     char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
				       char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
#endif /* Use misc.  */
# 196 "/usr/include/stdlib.h" 3 4

#ifdef __USE_ISOC99
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoll (const char *__restrict __nptr,
			      char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
					char **__restrict __endptr, int __base)
     __THROW __nonnull ((1));
#endif /* ISO C99 or use MISC.  */
# 209 "/usr/include/stdlib.h" 3 4

/* Convert a floating-point number to a string.  */
#if __GLIBC_USE (IEC_60559_BFP_EXT)
extern int strfromd (char *__dest, size_t __size, const char *__format,
		     double __f)
     __THROW __nonnull ((3));

extern int strfromf (char *__dest, size_t __size, const char *__format,
		     float __f)
     __THROW __nonnull ((3));

extern int strfroml (char *__dest, size_t __size, const char *__format,
		     long double __f)
     __THROW __nonnull ((3));
#endif
# 224 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern int strfromf16 (char *__dest, size_t __size, const char * __format,
		       _Float16 __f)
     __THROW __nonnull ((3));
#endif
# 230 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
		       _Float32 __f)
     __THROW __nonnull ((3));
#endif
# 236 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern int strfromf64 (char *__dest, size_t __size, const char * __format,
		       _Float64 __f)
     __THROW __nonnull ((3));
#endif
# 242 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern int strfromf128 (char *__dest, size_t __size, const char * __format,
			_Float128 __f)
     __THROW __nonnull ((3));
#endif
# 248 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
			_Float32x __f)
     __THROW __nonnull ((3));
#endif
# 254 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern int strfromf64x (char *__dest, size_t __size, const char * __format,
			_Float64x __f)
     __THROW __nonnull ((3));
#endif
# 260 "/usr/include/stdlib.h" 3 4

#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
extern int strfromf128x (char *__dest, size_t __size, const char * __format,
			 _Float128x __f)
     __THROW __nonnull ((3));
#endif
# 266 "/usr/include/stdlib.h" 3 4


#ifdef __USE_GNU
/* Parallel versions of the functions above which take the locale to
   use as an additional parameter.  These are GNU extensions inspired
   by the POSIX.1-2008 extended locale API.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/locale_t.h>
#endif /* expanded by -frewrite-includes */
# 272 "/usr/include/stdlib.h" 3 4
# 273 "/usr/include/stdlib.h" 3 4

extern long int strtol_l (const char *__restrict __nptr,
			  char **__restrict __endptr, int __base,
			  locale_t __loc) __THROW __nonnull ((1, 4));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
				    char **__restrict __endptr,
				    int __base, locale_t __loc)
     __THROW __nonnull ((1, 4));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
				char **__restrict __endptr, int __base,
				locale_t __loc)
     __THROW __nonnull ((1, 4));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
					  char **__restrict __endptr,
					  int __base, locale_t __loc)
     __THROW __nonnull ((1, 4));

extern double strtod_l (const char *__restrict __nptr,
			char **__restrict __endptr, locale_t __loc)
     __THROW __nonnull ((1, 3));

extern float strtof_l (const char *__restrict __nptr,
		       char **__restrict __endptr, locale_t __loc)
     __THROW __nonnull ((1, 3));

extern long double strtold_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));

# if __HAVE_FLOAT16
extern _Float16 strtof16_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 314 "/usr/include/stdlib.h" 3 4

# if __HAVE_FLOAT32
extern _Float32 strtof32_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 321 "/usr/include/stdlib.h" 3 4

# if __HAVE_FLOAT64
extern _Float64 strtof64_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 328 "/usr/include/stdlib.h" 3 4

# if __HAVE_FLOAT128
extern _Float128 strtof128_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 335 "/usr/include/stdlib.h" 3 4

# if __HAVE_FLOAT32X
extern _Float32x strtof32x_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 342 "/usr/include/stdlib.h" 3 4

# if __HAVE_FLOAT64X
extern _Float64x strtof64x_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 349 "/usr/include/stdlib.h" 3 4

# if __HAVE_FLOAT128X
extern _Float128x strtof128x_l (const char *__restrict __nptr,
				char **__restrict __endptr,
				locale_t __loc)
     __THROW __nonnull ((1, 3));
# endif
# 356 "/usr/include/stdlib.h" 3 4
#endif /* GNU */
# 357 "/usr/include/stdlib.h" 3 4


#ifdef __USE_EXTERN_INLINES
__extern_inline int
__NTH (atoi (const char *__nptr))
{
  return (int) strtol (__nptr, (char **) NULL, 10);
}
__extern_inline long int
__NTH (atol (const char *__nptr))
{
  return strtol (__nptr, (char **) NULL, 10);
}

# ifdef __USE_ISOC99
__extension__ __extern_inline long long int
__NTH (atoll (const char *__nptr))
{
  return strtoll (__nptr, (char **) NULL, 10);
}
# endif
# 378 "/usr/include/stdlib.h" 3 4
#endif /* Optimizing and Inlining.  */
# 379 "/usr/include/stdlib.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
/* Convert N to base 64 using the digits "./0-9A-Za-z", least-significant
   digit first.  Returns a pointer to static storage overwritten by the
   next call.  */
extern char *l64a (long int __n) __THROW __wur;

/* Read a number from a string S in base 64 as above.  */
extern long int a64l (const char *__s)
     __THROW __attribute_pure__ __nonnull ((1)) __wur;

#endif	/* Use misc || extended X/Open.  */
# 392 "/usr/include/stdlib.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
#if 0 /* expanded by -frewrite-includes */
# include <sys/types.h>	/* we need int32_t... */
#endif /* expanded by -frewrite-includes */
# 394 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */

#ifndef	_SYS_TYPES_H
#define	_SYS_TYPES_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 25 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

__BEGIN_DECLS

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 29 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifdef	__USE_MISC
# ifndef __u_char_defined
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#  define __u_char_defined
# endif
# 42 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 43 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

typedef __loff_t loff_t;

#ifndef __ino_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __ino_t ino_t;
# else
# 50 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __ino64_t ino_t;
# endif
# 52 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# define __ino_t_defined
#endif
# 54 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#if defined __USE_LARGEFILE64 && !defined __ino64_t_defined
typedef __ino64_t ino64_t;
# define __ino64_t_defined
#endif
# 58 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __dev_t_defined
typedef __dev_t dev_t;
# define __dev_t_defined
#endif
# 63 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __gid_t_defined
typedef __gid_t gid_t;
# define __gid_t_defined
#endif
# 68 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __mode_t_defined
typedef __mode_t mode_t;
# define __mode_t_defined
#endif
# 73 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __nlink_t_defined
typedef __nlink_t nlink_t;
# define __nlink_t_defined
#endif
# 78 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __uid_t_defined
typedef __uid_t uid_t;
# define __uid_t_defined
#endif
# 83 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __off_t_defined
# ifndef __USE_FILE_OFFSET64
typedef __off_t off_t;
# else
# 88 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __off64_t off_t;
# endif
# 90 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# define __off_t_defined
#endif
# 92 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#if defined __USE_LARGEFILE64 && !defined __off64_t_defined
typedef __off64_t off64_t;
# define __off64_t_defined
#endif
# 96 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __pid_t_defined
typedef __pid_t pid_t;
# define __pid_t_defined
#endif
# 101 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#if (defined __USE_XOPEN || defined __USE_XOPEN2K8) \
    && !defined __id_t_defined
typedef __id_t id_t;
# define __id_t_defined
#endif
# 107 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifndef __ssize_t_defined
typedef __ssize_t ssize_t;
# define __ssize_t_defined
#endif
# 112 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifdef	__USE_MISC
# ifndef __daddr_t_defined
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#  define __daddr_t_defined
# endif
# 119 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 120 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#if (defined __USE_MISC || defined __USE_XOPEN) && !defined __key_t_defined
typedef __key_t key_t;
# define __key_t_defined
#endif
# 125 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#if defined __USE_XOPEN || defined __USE_XOPEN2K8
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/clock_t.h>
#endif /* expanded by -frewrite-includes */
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4
#ifndef __clock_t_defined
#define __clock_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 3 4

/* Returned by `clock'.  */
typedef __clock_t clock_t;

#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 3 4
# 128 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#endif
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/clockid_t.h>
#endif /* expanded by -frewrite-includes */
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4
#ifndef __clockid_t_defined
#define __clockid_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 3 4

/* Clock ID used in clock and timer functions.  */
typedef __clockid_t clockid_t;

#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 3 4
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/time_t.h>
#endif /* expanded by -frewrite-includes */
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4
#ifndef __time_t_defined
#define __time_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4

/* Returned by `time'.  */
typedef __time_t time_t;

#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 3 4
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/timer_t.h>
#endif /* expanded by -frewrite-includes */
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4
#ifndef __timer_t_defined
#define __timer_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 3 4

/* Timer ID returned by `timer_create'.  */
typedef __timer_t timer_t;

#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 3 4
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

#ifdef __USE_XOPEN
# ifndef __useconds_t_defined
typedef __useconds_t useconds_t;
#  define __useconds_t_defined
# endif
# 138 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __suseconds_t_defined
typedef __suseconds_t suseconds_t;
#  define __suseconds_t_defined
# endif
# 142 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 143 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#define	__need_size_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

#ifdef __USE_MISC
/* Old compatibility names for C types.  */
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#endif
# 153 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* These size-specific names are used by some of the inet code.  */

#if 0 /* expanded by -frewrite-includes */
#include <bits/stdint-intn.h>
#endif /* expanded by -frewrite-includes */
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
/* Define intN_t types.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_STDINT_INTN_H
#define _BITS_STDINT_INTN_H	1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;

#endif /* bits/stdint-intn.h */
# 30 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
# 157 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

#if !__GNUC_PREREQ (2, 7)

/* These were defined by ISO C without the first `_'.  */
typedef	unsigned char u_int8_t;
typedef	unsigned short int u_int16_t;
typedef	unsigned int u_int32_t;
# if __WORDSIZE == 64
typedef unsigned long int u_int64_t;
# else
# 167 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
__extension__ typedef unsigned long long int u_int64_t;
# endif
# 169 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

typedef int register_t;

#else
# 173 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* For GCC 2.7 and later, we can use specific type-size attributes.  */
# define __u_intN_t(N, MODE) \
  typedef unsigned int u_int##N##_t __attribute__ ((__mode__ (MODE)))

__u_intN_t (8, __QI__);
__u_intN_t (16, __HI__);
__u_intN_t (32, __SI__);
__u_intN_t (64, __DI__);

typedef int register_t __attribute__ ((__mode__ (__word__)));


/* Some code from BIND tests this macro to see if the types above are
   defined.  */
#endif
# 189 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#define __BIT_TYPES_DEFINED__	1


#ifdef	__USE_MISC
/* In BSD <sys/types.h> is expected to define BYTE_ORDER.  */
#if 0 /* expanded by -frewrite-includes */
# include <endian.h>
#endif /* expanded by -frewrite-includes */
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
/* Copyright (C) 1992-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_ENDIAN_H
#define	_ENDIAN_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 21 "/usr/include/endian.h" 3 4
# 22 "/usr/include/endian.h" 3 4

/* Definitions for byte order, according to significance of bytes,
   from low addresses to high addresses.  The value is what you get by
   putting '4' in the most significant byte, '3' in the second most
   significant byte, '2' in the second least significant byte, and '1'
   in the least significant byte, and then writing down one digit for
   each byte, starting with the byte at the lowest address at the left,
   and proceeding to the byte with the highest address at the right.  */

#define	__LITTLE_ENDIAN	1234
#define	__BIG_ENDIAN	4321
#define	__PDP_ENDIAN	3412

/* This file defines `__BYTE_ORDER' for the particular machine.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/endian.h>
#endif /* expanded by -frewrite-includes */
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
/* i386/x86_64 are little-endian.  */

#ifndef _ENDIAN_H
# error "Never use <bits/endian.h> directly; include <endian.h> instead."
#endif
# 6 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4

#define __BYTE_ORDER __LITTLE_ENDIAN
# 37 "/usr/include/endian.h" 2 3 4

/* Some machines may need to use a different endianness for floating point
   values.  */
#ifndef __FLOAT_WORD_ORDER
# define __FLOAT_WORD_ORDER __BYTE_ORDER
#endif
# 43 "/usr/include/endian.h" 3 4

#ifdef	__USE_MISC
# define LITTLE_ENDIAN	__LITTLE_ENDIAN
# define BIG_ENDIAN	__BIG_ENDIAN
# define PDP_ENDIAN	__PDP_ENDIAN
# define BYTE_ORDER	__BYTE_ORDER
#endif
# 50 "/usr/include/endian.h" 3 4

#if __BYTE_ORDER == __LITTLE_ENDIAN
# define __LONG_LONG_PAIR(HI, LO) LO, HI
#elif __BYTE_ORDER == __BIG_ENDIAN
# 54 "/usr/include/endian.h" 3 4
# define __LONG_LONG_PAIR(HI, LO) HI, LO
#endif
# 56 "/usr/include/endian.h" 3 4


#if defined __USE_MISC && !defined __ASSEMBLER__
/* Conversion interfaces.  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/byteswap.h>
#endif /* expanded by -frewrite-includes */
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
/* Macros to swap the order of bytes in integer values.
   Copyright (C) 1997-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _BYTESWAP_H && !defined _NETINET_IN_H && !defined _ENDIAN_H
# error "Never use <bits/byteswap.h> directly; include <byteswap.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4

#ifndef _BITS_BYTESWAP_H
#define _BITS_BYTESWAP_H 1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#define __WORDSIZE32_SIZE_ULONG		0
#define __WORDSIZE32_PTRDIFF_LONG	0
#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#else
# 16 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE_TIME64_COMPAT32	0
#endif
# 18 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4

/* Swap bytes in 16 bit value.  */
#define __bswap_constant_16(x) \
     ((unsigned short int) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))

/* Get __bswap_16.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/byteswap-16.h>
#endif /* expanded by -frewrite-includes */
# 35 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
/* Macros to swap the order of bytes in 16-bit integer values.
   Copyright (C) 2012-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_BYTESWAP_H
# error "Never use <bits/byteswap-16.h> directly; include <byteswap.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4

#ifdef __GNUC__
# if __GNUC__ >= 2
#  define __bswap_16(x) \
     (__extension__							      \
      ({ unsigned short int __v, __x = (unsigned short int) (x);	      \
	 if (__builtin_constant_p (__x))				      \
	   __v = __bswap_constant_16 (__x);				      \
	 else								      \
	   __asm__ ("rorw $8, %w0"					      \
		    : "=r" (__v)					      \
		    : "0" (__x)						      \
		    : "cc");						      \
	 __v; }))
# else
# 37 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
/* This is better than nothing.  */
#  define __bswap_16(x) \
     (__extension__							      \
      ({ unsigned short int __x = (unsigned short int) (x);		      \
	 __bswap_constant_16 (__x); }))
# endif
# 43 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
#else
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
static __inline unsigned short int
__bswap_16 (unsigned short int __bsx)
{
  return __bswap_constant_16 (__bsx);
}
#endif
# 50 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4

/* Swap bytes in 32 bit value.  */
#define __bswap_constant_32(x) \
     ((((x) & 0xff000000) >> 24) | (((x) & 0x00ff0000) >>  8) |		      \
      (((x) & 0x0000ff00) <<  8) | (((x) & 0x000000ff) << 24))

#ifdef __GNUC__
# if __GNUC_PREREQ (4, 3)
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# elif __GNUC__ >= 2
# 50 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  if __WORDSIZE == 64 || (defined __i486__ || defined __pentium__	      \
			   || defined __pentiumpro__ || defined __pentium4__  \
			   || defined __k8__ || defined __athlon__	      \
			   || defined __k6__ || defined __nocona__	      \
			   || defined __core2__ || defined __geode__	      \
			   || defined __amdfam10__)
/* To swap the bytes in a word the i486 processors and up provide the
   `bswap' opcode.  On i386 we have to use three instructions.  */
#   define __bswap_32(x) \
      (__extension__							      \
       ({ unsigned int __v, __x = (x);					      \
	  if (__builtin_constant_p (__x))				      \
	    __v = __bswap_constant_32 (__x);				      \
	  else								      \
	    __asm__ ("bswap %0" : "=r" (__v) : "0" (__x));		      \
	  __v; }))
#  else
# 67 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#   define __bswap_32(x)						      \
      (__extension__							      \
       ({ unsigned int __v, __x = (x);					      \
	  if (__builtin_constant_p (__x))				      \
	    __v = __bswap_constant_32 (__x);				      \
	  else								      \
	    __asm__ ("rorw $8, %w0;"					      \
		     "rorl $16, %0;"					      \
		     "rorw $8, %w0"					      \
		     : "=r" (__v)					      \
		     : "0" (__x)					      \
		     : "cc");						      \
	  __v; }))
#  endif
# 81 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# else
# 82 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  define __bswap_32(x) \
     (__extension__							      \
      ({ unsigned int __x = (x); __bswap_constant_32 (__x); }))
# endif
# 86 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#else
# 87 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __bswap_constant_32 (__bsx);
}
#endif
# 93 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4


#if __GNUC_PREREQ (2, 0)
/* Swap bytes in 64 bit value.  */
# define __bswap_constant_64(x) \
     (__extension__ ((((x) & 0xff00000000000000ull) >> 56)		      \
		     | (((x) & 0x00ff000000000000ull) >> 40)		      \
		     | (((x) & 0x0000ff0000000000ull) >> 24)		      \
		     | (((x) & 0x000000ff00000000ull) >> 8)		      \
		     | (((x) & 0x00000000ff000000ull) << 8)		      \
		     | (((x) & 0x0000000000ff0000ull) << 24)		      \
		     | (((x) & 0x000000000000ff00ull) << 40)		      \
		     | (((x) & 0x00000000000000ffull) << 56)))

# if __GNUC_PREREQ (4, 3)
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# elif __WORDSIZE == 64
# 114 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  define __bswap_64(x) \
     (__extension__							      \
      ({ __uint64_t __v, __x = (x);					      \
	 if (__builtin_constant_p (__x))				      \
	   __v = __bswap_constant_64 (__x);				      \
	 else								      \
	   __asm__ ("bswap %q0" : "=r" (__v) : "0" (__x));		      \
	 __v; }))
# else
# 123 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#  define __bswap_64(x) \
     (__extension__                                                           \
      ({ union { __extension__ __uint64_t __ll;		                      \
		 unsigned int __l[2]; } __w, __r;                             \
	 if (__builtin_constant_p (x))                                        \
	   __r.__ll = __bswap_constant_64 (x);                                \
	 else                                                                 \
	   {                                                                  \
	     __w.__ll = (x);                                                  \
	     __r.__l[0] = __bswap_32 (__w.__l[1]);                            \
	     __r.__l[1] = __bswap_32 (__w.__l[0]);                            \
	   }                                                                  \
	 __r.__ll; }))
# endif
# 137 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
#else
# 138 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# define __bswap_constant_64(x) \
     ((((x) & 0xff00000000000000ull) >> 56)				      \
      | (((x) & 0x00ff000000000000ull) >> 40)				      \
      | (((x) & 0x0000ff0000000000ull) >> 24)				      \
      | (((x) & 0x000000ff00000000ull) >> 8)				      \
      | (((x) & 0x00000000ff000000ull) << 8)				      \
      | (((x) & 0x0000000000ff0000ull) << 24)				      \
      | (((x) & 0x000000000000ff00ull) << 40)				      \
      | (((x) & 0x00000000000000ffull) << 56))

static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __bswap_constant_64 (__bsx);
}
#endif
# 154 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4

#endif /* _BITS_BYTESWAP_H */
# 156 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 61 "/usr/include/endian.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/uintn-identity.h>
#endif /* expanded by -frewrite-includes */
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
/* Inline functions to return unsigned integer values unchanged.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#if !defined _NETINET_IN_H && !defined _ENDIAN_H
# error "Never use <bits/uintn-identity.h> directly; include <netinet/in.h> or <endian.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4

#ifndef _BITS_UINTN_IDENTITY_H
#define _BITS_UINTN_IDENTITY_H 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4

/* These inline functions are to ensure the appropriate type
   conversions and associated diagnostics from macros that convert to
   a given endianness.  */

static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}

#endif /* _BITS_UINTN_IDENTITY_H.  */
# 51 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
# 62 "/usr/include/endian.h" 2 3 4

# if __BYTE_ORDER == __LITTLE_ENDIAN
#  define htobe16(x) __bswap_16 (x)
#  define htole16(x) __uint16_identity (x)
#  define be16toh(x) __bswap_16 (x)
#  define le16toh(x) __uint16_identity (x)

#  define htobe32(x) __bswap_32 (x)
#  define htole32(x) __uint32_identity (x)
#  define be32toh(x) __bswap_32 (x)
#  define le32toh(x) __uint32_identity (x)

#  define htobe64(x) __bswap_64 (x)
#  define htole64(x) __uint64_identity (x)
#  define be64toh(x) __bswap_64 (x)
#  define le64toh(x) __uint64_identity (x)

# else
# 80 "/usr/include/endian.h" 3 4
#  define htobe16(x) __uint16_identity (x)
#  define htole16(x) __bswap_16 (x)
#  define be16toh(x) __uint16_identity (x)
#  define le16toh(x) __bswap_16 (x)

#  define htobe32(x) __uint32_identity (x)
#  define htole32(x) __bswap_32 (x)
#  define be32toh(x) __uint32_identity (x)
#  define le32toh(x) __bswap_32 (x)

#  define htobe64(x) __uint64_identity (x)
#  define htole64(x) __bswap_64 (x)
#  define be64toh(x) __uint64_identity (x)
#  define le64toh(x) __bswap_64 (x)
# endif
# 95 "/usr/include/endian.h" 3 4
#endif
# 96 "/usr/include/endian.h" 3 4

#endif	/* endian.h */
# 98 "/usr/include/endian.h" 3 4
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

/* It also defines `fd_set' and the FD_* macros for `select'.  */
#if 0 /* expanded by -frewrite-includes */
# include <sys/select.h>
#endif /* expanded by -frewrite-includes */
# 197 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
/* `fd_set' type and related macros, and `select'/`pselect' declarations.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*	POSIX 1003.1g: 6.2 Select from File Descriptor Sets <sys/select.h>  */

#ifndef _SYS_SELECT_H
#define _SYS_SELECT_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

/* Get definition of needed basic types.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

/* Get __FD_* definitions.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/select.h>
#endif /* expanded by -frewrite-includes */
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
/* Copyright (C) 1997-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _SYS_SELECT_H
# error "Never use <bits/select.h> directly; include <sys/select.h> instead."
#endif
# 21 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#define __WORDSIZE32_SIZE_ULONG		0
#define __WORDSIZE32_PTRDIFF_LONG	0
#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#else
# 16 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE_TIME64_COMPAT32	0
#endif
# 18 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4


#if defined __GNUC__ && __GNUC__ >= 2

# if __WORDSIZE == 64
#  define __FD_ZERO_STOS "stosq"
# else
# 30 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
#  define __FD_ZERO_STOS "stosl"
# endif
# 32 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

# define __FD_ZERO(fdsp) \
  do {									      \
    int __d0, __d1;							      \
    __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS			      \
			  : "=c" (__d0), "=D" (__d1)			      \
			  : "a" (0), "0" (sizeof (fd_set)		      \
					  / sizeof (__fd_mask)),	      \
			    "1" (&__FDS_BITS (fdsp)[0])			      \
			  : "memory");					      \
  } while (0)

#else	/* ! GNU CC */
# 45 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

/* We don't use `memset' because this would require a prototype and
   the array isn't too big.  */
# define __FD_ZERO(set)  \
  do {									      \
    unsigned int __i;							      \
    fd_set *__arr = (set);						      \
    for (__i = 0; __i < sizeof (fd_set) / sizeof (__fd_mask); ++__i)	      \
      __FDS_BITS (__arr)[__i] = 0;					      \
  } while (0)

#endif	/* GNU CC */
# 57 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4

#define __FD_SET(d, set) \
  ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))
#define __FD_CLR(d, set) \
  ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))
#define __FD_ISSET(d, set) \
  ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

/* Get sigset_t.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/sigset_t.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4
#ifndef __sigset_t_defined
#define __sigset_t_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__sigset_t.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4
#ifndef ____sigset_t_defined
#define ____sigset_t_defined

#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
typedef struct
{
  unsigned long int __val[_SIGSET_NWORDS];
} __sigset_t;

#endif
# 11 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4

/* A set of signals to be blocked, unblocked, or waited for.  */
typedef __sigset_t sigset_t;

#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 3 4
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

/* Get definition of timer specification structures.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/time_t.h>
#endif /* expanded by -frewrite-includes */
# 36 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types/struct_timeval.h>
#endif /* expanded by -frewrite-includes */
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4
#ifndef __timeval_defined
#define __timeval_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 3 4

/* A time value that is accurate to the nearest
   microsecond but also has a range of years.  */
struct timeval
{
  __time_t tv_sec;		/* Seconds.  */
  __suseconds_t tv_usec;	/* Microseconds.  */
};
#endif
# 14 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 3 4
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#ifdef __USE_XOPEN2K
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/struct_timespec.h>
#endif /* expanded by -frewrite-includes */
# 39 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
#ifndef __timespec_defined
#define __timespec_defined 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 4 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4

/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */
struct timespec
{
  __time_t tv_sec;		/* Seconds.  */
  __syscall_slong_t tv_nsec;	/* Nanoseconds.  */
};

#endif
# 15 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
#endif
# 41 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

#ifndef __suseconds_t_defined
typedef __suseconds_t suseconds_t;
# define __suseconds_t_defined
#endif
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4


/* The fd_set member is required to be an array of longs.  */
typedef long int __fd_mask;

/* Some versions of <linux/posix_types.h> define this macros.  */
#undef	__NFDBITS
/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */
#define __NFDBITS	(8 * (int) sizeof (__fd_mask))
#define	__FD_ELT(d)	((d) / __NFDBITS)
#define	__FD_MASK(d)	((__fd_mask) (1UL << ((d) % __NFDBITS)))

/* fd_set for select and pselect.  */
typedef struct
  {
    /* XPG4.2 requires this member name.  Otherwise avoid the name
       from the global namespace.  */
#ifdef __USE_XOPEN
    __fd_mask fds_bits[__FD_SETSIZE / __NFDBITS];
# define __FDS_BITS(set) ((set)->fds_bits)
#else
# 67 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
    __fd_mask __fds_bits[__FD_SETSIZE / __NFDBITS];
# define __FDS_BITS(set) ((set)->__fds_bits)
#endif
# 70 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
  } fd_set;

/* Maximum number of file descriptors in `fd_set'.  */
#define	FD_SETSIZE		__FD_SETSIZE

#ifdef __USE_MISC
/* Sometimes the fd_set member is assumed to have this type.  */
typedef __fd_mask fd_mask;

/* Number of bits per word of `fd_set' (some code assumes this is 32).  */
# define NFDBITS		__NFDBITS
#endif
# 82 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4


/* Access macros for `fd_set'.  */
#define	FD_SET(fd, fdsetp)	__FD_SET (fd, fdsetp)
#define	FD_CLR(fd, fdsetp)	__FD_CLR (fd, fdsetp)
#define	FD_ISSET(fd, fdsetp)	__FD_ISSET (fd, fdsetp)
#define	FD_ZERO(fdsetp)		__FD_ZERO (fdsetp)


__BEGIN_DECLS

/* Check the first NFDS descriptors each in READFDS (if not NULL) for read
   readiness, in WRITEFDS (if not NULL) for write readiness, and in EXCEPTFDS
   (if not NULL) for exceptional conditions.  If TIMEOUT is not NULL, time out
   after waiting the interval specified therein.  Returns the number of ready
   descriptors, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int select (int __nfds, fd_set *__restrict __readfds,
		   fd_set *__restrict __writefds,
		   fd_set *__restrict __exceptfds,
		   struct timeval *__restrict __timeout);

#ifdef __USE_XOPEN2K
/* Same as above only that the TIMEOUT value is given with higher
   resolution and a sigmask which is been set temporarily.  This version
   should be used.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pselect (int __nfds, fd_set *__restrict __readfds,
		    fd_set *__restrict __writefds,
		    fd_set *__restrict __exceptfds,
		    const struct timespec *__restrict __timeout,
		    const __sigset_t *__restrict __sigmask);
#endif
# 119 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4


/* Define some inlines helping to catch common problems.  */
#if __USE_FORTIFY_LEVEL > 0 && defined __GNUC__
#if 0 /* expanded by -frewrite-includes */
# include <bits/select2.h>
#endif /* expanded by -frewrite-includes */
# 123 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 124 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
#endif
# 125 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

__END_DECLS

#endif /* sys/select.h */
# 129 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 198 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

/* BSD defines `major', `minor', and `makedev' in this header.
   However, these symbols are likely to collide with user code, so we are
   going to stop defining them here in an upcoming release.  Code that needs
   these macros should include <sys/sysmacros.h> directly.  Code that does
   not need these macros should #undef them after including this header.  */
# define __SYSMACROS_DEPRECATED_INCLUSION
#if 0 /* expanded by -frewrite-includes */
# include <sys/sysmacros.h>
#endif /* expanded by -frewrite-includes */
# 205 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
/* Definitions of macros to access `dev_t' values.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _SYS_SYSMACROS_H_OUTER

#ifndef __SYSMACROS_DEPRECATED_INCLUSION
# define _SYS_SYSMACROS_H_OUTER 1
#endif
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

/* If <sys/sysmacros.h> is included after <sys/types.h>, these macros
   will already be defined, and we need to redefine them without the
   deprecation warnings.  (If they are included in the opposite order,
   the outer #ifndef will suppress this entire file and the macros
   will be usable without warnings.)  */
#undef major
#undef minor
#undef makedev

/* This is the macro that must be defined to satisfy the misuse check
   in bits/sysmacros.h. */
#ifndef _SYS_SYSMACROS_H
#define _SYS_SYSMACROS_H 1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 39 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 40 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/sysmacros.h>
#endif /* expanded by -frewrite-includes */
# 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sysmacros.h" 1 3 4
/* Definitions of macros to access `dev_t' values.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_SYSMACROS_H
#define _BITS_SYSMACROS_H 1

#ifndef _SYS_SYSMACROS_H
# error "Never include <bits/sysmacros.h> directly; use <sys/sysmacros.h> instead."
#endif
# 25 "/usr/include/x86_64-linux-gnu/bits/sysmacros.h" 3 4

/* dev_t in glibc is a 64-bit quantity, with 32-bit major and minor numbers.
   Our default encoding is MMMM Mmmm mmmM MMmm, where M is a hex digit of
   the major number and m is a hex digit of the minor number.  This is
   downward compatible with legacy systems where dev_t is 16 bits wide,
   encoded as MMmm.  It is also downward compatible with the Linux kernel,
   which (as of 2016) uses 32-bit dev_t, encoded as mmmM MMmm.

   Systems that use an incompatible encoding for dev_t should override this
   file in the appropriate sysdeps subdirectory.  */

#define __SYSMACROS_DECLARE_MAJOR(DECL_TEMPL)			\
  DECL_TEMPL(unsigned int, major, (__dev_t __dev))

#define __SYSMACROS_DEFINE_MAJOR(DECL_TEMPL)			\
  __SYSMACROS_DECLARE_MAJOR (DECL_TEMPL)			\
  {								\
    unsigned int __major;					\
    __major  = ((__dev & (__dev_t) 0x00000000000fff00u) >>  8); \
    __major |= ((__dev & (__dev_t) 0xfffff00000000000u) >> 32); \
    return __major;						\
  }

#define __SYSMACROS_DECLARE_MINOR(DECL_TEMPL)			\
  DECL_TEMPL(unsigned int, minor, (__dev_t __dev))

#define __SYSMACROS_DEFINE_MINOR(DECL_TEMPL)			\
  __SYSMACROS_DECLARE_MINOR (DECL_TEMPL)			\
  {								\
    unsigned int __minor;					\
    __minor  = ((__dev & (__dev_t) 0x00000000000000ffu) >>  0); \
    __minor |= ((__dev & (__dev_t) 0x00000ffffff00000u) >> 12); \
    return __minor;						\
  }

#define __SYSMACROS_DECLARE_MAKEDEV(DECL_TEMPL)			\
  DECL_TEMPL(__dev_t, makedev, (unsigned int __major, unsigned int __minor))

#define __SYSMACROS_DEFINE_MAKEDEV(DECL_TEMPL)			\
  __SYSMACROS_DECLARE_MAKEDEV (DECL_TEMPL)			\
  {								\
    __dev_t __dev;						\
    __dev  = (((__dev_t) (__major & 0x00000fffu)) <<  8);	\
    __dev |= (((__dev_t) (__major & 0xfffff000u)) << 32);	\
    __dev |= (((__dev_t) (__minor & 0x000000ffu)) <<  0);	\
    __dev |= (((__dev_t) (__minor & 0xffffff00u)) << 12);	\
    return __dev;						\
  }

#endif /* bits/sysmacros.h */
# 75 "/usr/include/x86_64-linux-gnu/bits/sysmacros.h" 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 2 3 4

/* Caution: The text of this deprecation message is unquoted, so that
   #symbol can be substituted.  (It is converted to a string by
   __SYSMACROS_DM1.)  This means the message must be a sequence of
   complete pp-tokens; in particular, English contractions (it's,
   can't) cannot be used.

   The message has been manually word-wrapped to fit in 80 columns
   when output by GCC 5 and 6.  The first line is shorter to leave
   some room for the "foo.c:23: warning:" annotation.  */
#define __SYSMACROS_DM(symbol) __SYSMACROS_DM1 \
 (In the GNU C Library, #symbol is defined\n\
  by <sys/sysmacros.h>. For historical compatibility, it is\n\
  currently defined by <sys/types.h> as well, but we plan to\n\
  remove this soon.  To use #symbol, include <sys/sysmacros.h>\n\
  directly.  If you did not intend to use a system-defined macro\n\
  #symbol, you should undefine it after including <sys/types.h>.)

/* This macro is variadic because the deprecation message above
   contains commas.  */
#define __SYSMACROS_DM1(...) __glibc_macro_warning (#__VA_ARGS__)

#define __SYSMACROS_DECL_TEMPL(rtype, name, proto)			     \
  extern rtype gnu_dev_##name proto __THROW __attribute_const__;

#define __SYSMACROS_IMPL_TEMPL(rtype, name, proto)			     \
  __extension__ __extern_inline __attribute_const__ rtype		     \
  __NTH (gnu_dev_##name proto)

__BEGIN_DECLS

__SYSMACROS_DECLARE_MAJOR (__SYSMACROS_DECL_TEMPL)
__SYSMACROS_DECLARE_MINOR (__SYSMACROS_DECL_TEMPL)
__SYSMACROS_DECLARE_MAKEDEV (__SYSMACROS_DECL_TEMPL)

#ifdef __USE_EXTERN_INLINES

__SYSMACROS_DEFINE_MAJOR (__SYSMACROS_IMPL_TEMPL)
__SYSMACROS_DEFINE_MINOR (__SYSMACROS_IMPL_TEMPL)
__SYSMACROS_DEFINE_MAKEDEV (__SYSMACROS_IMPL_TEMPL)

#endif
# 84 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

__END_DECLS

#endif /* _SYS_SYSMACROS_H */
# 88 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

#ifndef __SYSMACROS_NEED_IMPLEMENTATION
# undef __SYSMACROS_DECL_TEMPL
# undef __SYSMACROS_IMPL_TEMPL
# undef __SYSMACROS_DECLARE_MAJOR
# undef __SYSMACROS_DECLARE_MINOR
# undef __SYSMACROS_DECLARE_MAKEDEV
# undef __SYSMACROS_DEFINE_MAJOR
# undef __SYSMACROS_DEFINE_MINOR
# undef __SYSMACROS_DEFINE_MAKEDEV
#endif
# 99 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

#ifdef __SYSMACROS_DEPRECATED_INCLUSION
# define major(dev) __SYSMACROS_DM (major) gnu_dev_major (dev)
# define minor(dev) __SYSMACROS_DM (minor) gnu_dev_minor (dev)
# define makedev(maj, min) __SYSMACROS_DM (makedev) gnu_dev_makedev (maj, min)
#else
# 105 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# define major(dev) gnu_dev_major (dev)
# define minor(dev) gnu_dev_minor (dev)
# define makedev(maj, min) gnu_dev_makedev (maj, min)
#endif
# 109 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

#endif /* sys/sysmacros.h */
# 111 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
# 206 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# undef __SYSMACROS_DEPRECATED_INCLUSION
#endif /* Use misc.  */
# 208 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


#if (defined __USE_UNIX98 || defined __USE_XOPEN2K8) \
    && !defined __blksize_t_defined
typedef __blksize_t blksize_t;
# define __blksize_t_defined
#endif
# 215 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

/* Types from the Large File Support interface.  */
#ifndef __USE_FILE_OFFSET64
# ifndef __blkcnt_t_defined
typedef __blkcnt_t blkcnt_t;	 /* Type to count number of disk blocks.  */
#  define __blkcnt_t_defined
# endif
# 222 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsblkcnt_t_defined
typedef __fsblkcnt_t fsblkcnt_t; /* Type to count file system blocks.  */
#  define __fsblkcnt_t_defined
# endif
# 226 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsfilcnt_t_defined
typedef __fsfilcnt_t fsfilcnt_t; /* Type to count file system inodes.  */
#  define __fsfilcnt_t_defined
# endif
# 230 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#else
# 231 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __blkcnt_t_defined
typedef __blkcnt64_t blkcnt_t;	   /* Type to count number of disk blocks.  */
#  define __blkcnt_t_defined
# endif
# 235 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsblkcnt_t_defined
typedef __fsblkcnt64_t fsblkcnt_t; /* Type to count file system blocks.  */
#  define __fsblkcnt_t_defined
# endif
# 239 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# ifndef __fsfilcnt_t_defined
typedef __fsfilcnt64_t fsfilcnt_t; /* Type to count file system inodes.  */
#  define __fsfilcnt_t_defined
# endif
# 243 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
#endif
# 244 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

#ifdef __USE_LARGEFILE64
typedef __blkcnt64_t blkcnt64_t;     /* Type to count number of disk blocks. */
typedef __fsblkcnt64_t fsblkcnt64_t; /* Type to count file system blocks.  */
typedef __fsfilcnt64_t fsfilcnt64_t; /* Type to count file system inodes.  */
#endif
# 250 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


/* Now add the thread types.  */
#if defined __USE_POSIX199506 || defined __USE_UNIX98
#if 0 /* expanded by -frewrite-includes */
# include <bits/pthreadtypes.h>
#endif /* expanded by -frewrite-includes */
# 254 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
/* Declaration of common pthread types for all architectures.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_PTHREADTYPES_COMMON_H
# define _BITS_PTHREADTYPES_COMMON_H	1

/* For internal mutex and condition variable definitions.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/thread-shared-types.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
/* Common threading primitives definitions for both POSIX and C11.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _THREAD_SHARED_TYPES_H
#define _THREAD_SHARED_TYPES_H 1

/* Arch-specific definitions.  Each architecture must define the following
   macros to define the expected sizes of pthread data types:

   __SIZEOF_PTHREAD_ATTR_T        - size of pthread_attr_t.
   __SIZEOF_PTHREAD_MUTEX_T       - size of pthread_mutex_t.
   __SIZEOF_PTHREAD_MUTEXATTR_T   - size of pthread_mutexattr_t.
   __SIZEOF_PTHREAD_COND_T        - size of pthread_cond_t.
   __SIZEOF_PTHREAD_CONDATTR_T    - size of pthread_condattr_t.
   __SIZEOF_PTHREAD_RWLOCK_T      - size of pthread_rwlock_t.
   __SIZEOF_PTHREAD_RWLOCKATTR_T  - size of pthread_rwlockattr_t.
   __SIZEOF_PTHREAD_BARRIER_T     - size of pthread_barrier_t.
   __SIZEOF_PTHREAD_BARRIERATTR_T - size of pthread_barrierattr_t.

   Also, the following macros must be define for internal pthread_mutex_t
   struct definitions (struct __pthread_mutex_s):

   __PTHREAD_COMPAT_PADDING_MID   - any additional members after 'kind'
				    and before '__spin' (for 64 bits) or
				    '__nusers' (for 32 bits).
   __PTHREAD_COMPAT_PADDING_END   - any additional members at the end of
				    the internal structure.
   __PTHREAD_MUTEX_LOCK_ELISION   - 1 if the architecture supports lock
				    elision or 0 otherwise.
   __PTHREAD_MUTEX_NUSERS_AFTER_KIND - control where to put __nusers.  The
				       preferred value for new architectures
				       is 0.
   __PTHREAD_MUTEX_USE_UNION      - control whether internal __spins and
				    __list will be place inside a union for
				    linuxthreads compatibility.
				    The preferred value for new architectures
				    is 0.

   For a new port the preferred values for the required defines are:

   #define __PTHREAD_COMPAT_PADDING_MID
   #define __PTHREAD_COMPAT_PADDING_END
   #define __PTHREAD_MUTEX_LOCK_ELISION         0
   #define __PTHREAD_MUTEX_NUSERS_AFTER_KIND    0
   #define __PTHREAD_MUTEX_USE_UNION            0

   __PTHREAD_MUTEX_LOCK_ELISION can be set to 1 if the hardware plans to
   eventually support lock elision using transactional memory.

   The additional macro defines any constraint for the lock alignment
   inside the thread structures:

   __LOCK_ALIGNMENT - for internal lock/futex usage.

   Same idea but for the once locking primitive:

   __ONCE_ALIGNMENT - for pthread_once_t/once_flag definition.

   And finally the internal pthread_rwlock_t (struct __pthread_rwlock_arch_t)
   must be defined.
 */
#if 0 /* expanded by -frewrite-includes */
#include <bits/pthreadtypes-arch.h>
#endif /* expanded by -frewrite-includes */
# 77 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
/* Copyright (C) 2002-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_PTHREADTYPES_ARCH_H
#define _BITS_PTHREADTYPES_ARCH_H	1

#if 0 /* expanded by -frewrite-includes */
#include <bits/wordsize.h>
#endif /* expanded by -frewrite-includes */
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */

#if defined __x86_64__ && !defined __ILP32__
# define __WORDSIZE	64
#else
# 6 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE	32
#define __WORDSIZE32_SIZE_ULONG		0
#define __WORDSIZE32_PTRDIFF_LONG	0
#endif
# 10 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4

#ifdef __x86_64__
# define __WORDSIZE_TIME64_COMPAT32	1
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# define __SYSCALL_WORDSIZE		64
#else
# 16 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# define __WORDSIZE_TIME64_COMPAT32	0
#endif
# 18 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4

#ifdef __x86_64__
# if __WORDSIZE == 64
#  define __SIZEOF_PTHREAD_MUTEX_T 40
#  define __SIZEOF_PTHREAD_ATTR_T 56
#  define __SIZEOF_PTHREAD_MUTEX_T 40
#  define __SIZEOF_PTHREAD_RWLOCK_T 56
#  define __SIZEOF_PTHREAD_BARRIER_T 32
# else
# 31 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
#  define __SIZEOF_PTHREAD_MUTEX_T 32
#  define __SIZEOF_PTHREAD_ATTR_T 32
#  define __SIZEOF_PTHREAD_MUTEX_T 32
#  define __SIZEOF_PTHREAD_RWLOCK_T 44
#  define __SIZEOF_PTHREAD_BARRIER_T 20
# endif
# 37 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
#else
# 38 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# define __SIZEOF_PTHREAD_MUTEX_T 24
# define __SIZEOF_PTHREAD_ATTR_T 36
# define __SIZEOF_PTHREAD_MUTEX_T 24
# define __SIZEOF_PTHREAD_RWLOCK_T 32
# define __SIZEOF_PTHREAD_BARRIER_T 20
#endif
# 44 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define __SIZEOF_PTHREAD_COND_T 48
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4

/* Definitions for internal mutex struct.  */
#define __PTHREAD_COMPAT_PADDING_MID
#define __PTHREAD_COMPAT_PADDING_END
#define __PTHREAD_MUTEX_LOCK_ELISION    1
#ifdef __x86_64__
# define __PTHREAD_MUTEX_NUSERS_AFTER_KIND  0
# define __PTHREAD_MUTEX_USE_UNION          0
#else
# 58 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# define __PTHREAD_MUTEX_NUSERS_AFTER_KIND  1
# define __PTHREAD_MUTEX_USE_UNION          1
#endif
# 61 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4

#define __LOCK_ALIGNMENT
#define __ONCE_ALIGNMENT

struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
#ifdef __x86_64__
  int __cur_writer;
  int __shared;
  signed char __rwelision;
# ifdef  __ILP32__
  unsigned char __pad1[3];
#  define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0 }
# else
# 81 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
  unsigned char __pad1[7];
#  define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0, 0, 0, 0, 0 }
# endif
# 84 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
  unsigned long int __pad2;
  /* FLAGS must stay at this position in the structure to maintain
     binary compatibility.  */
  unsigned int __flags;
# define __PTHREAD_RWLOCK_INT_FLAGS_SHARED	1
#else
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
  /* FLAGS must stay at this position in the structure to maintain
     binary compatibility.  */
  unsigned char __flags;
  unsigned char __shared;
  signed char __rwelision;
# define __PTHREAD_RWLOCK_ELISION_EXTRA 0
  unsigned char __pad2;
  int __cur_writer;
#endif
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
};

#ifndef __x86_64__
/* Extra attributes for the cleanup functions.  */
# define __cleanup_fct_attribute __attribute__ ((__regparm__ (1)))
#endif
# 105 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4

#endif	/* bits/pthreadtypes.h */
# 107 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 78 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

/* Common definition of pthread_mutex_t. */

#if !__PTHREAD_MUTEX_USE_UNION
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#else
# 88 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#endif
# 93 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4

/* Lock elision support.  */
#if __PTHREAD_MUTEX_LOCK_ELISION
# if !__PTHREAD_MUTEX_USE_UNION
#  define __PTHREAD_SPINS_DATA	\
  short __spins;		\
  short __elision
#  define __PTHREAD_SPINS             0, 0
# else
# 102 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
#  define __PTHREAD_SPINS_DATA	\
  struct			\
  {				\
    short __espins;		\
    short __eelision;		\
  } __elision_data
#  define __PTHREAD_SPINS         { 0, 0 }
#  define __spins __elision_data.__espins
#  define __elision __elision_data.__eelision
# endif
# 112 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
#else
# 113 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# define __PTHREAD_SPINS_DATA int __spins
/* Mutex __spins initializer used by PTHREAD_MUTEX_INITIALIZER.  */
# define __PTHREAD_SPINS 0
#endif
# 117 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4

struct __pthread_mutex_s
{
  int __lock __LOCK_ALIGNMENT;
  unsigned int __count;
  int __owner;
#if !__PTHREAD_MUTEX_NUSERS_AFTER_KIND
  unsigned int __nusers;
#endif
# 126 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  /* KIND must stay at this position in the structure to maintain
     binary compatibility with static initializers.  */
  int __kind;
  __PTHREAD_COMPAT_PADDING_MID
#if __PTHREAD_MUTEX_NUSERS_AFTER_KIND
  unsigned int __nusers;
#endif
# 133 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
#if !__PTHREAD_MUTEX_USE_UNION
  __PTHREAD_SPINS_DATA;
  __pthread_list_t __list;
# define __PTHREAD_MUTEX_HAVE_PREV      1
#else
# 138 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  __extension__ union
  {
    __PTHREAD_SPINS_DATA;
    __pthread_slist_t __list;
  };
# define __PTHREAD_MUTEX_HAVE_PREV      0
#endif
# 145 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
  __PTHREAD_COMPAT_PADDING_END
};


/* Common definition of pthread_cond_t. */

struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] __LOCK_ALIGNMENT;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

#endif /* _THREAD_SHARED_TYPES_H  */
# 179 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4

/* Thread identifiers.  The structure of the attribute type is not
   exposed on purpose.  */
typedef unsigned long int pthread_t;


/* Data structures for mutex handling.  The structure of the attribute
   type is not exposed on purpose.  */
typedef union
{
  char __size[__SIZEOF_PTHREAD_MUTEXATTR_T];
  int __align;
} pthread_mutexattr_t;


/* Data structure for condition variable handling.  The structure of
   the attribute type is not exposed on purpose.  */
typedef union
{
  char __size[__SIZEOF_PTHREAD_CONDATTR_T];
  int __align;
} pthread_condattr_t;


/* Keys for thread-specific data */
typedef unsigned int pthread_key_t;


/* Once-only execution */
typedef int __ONCE_ALIGNMENT pthread_once_t;


union pthread_attr_t
{
  char __size[__SIZEOF_PTHREAD_ATTR_T];
  long int __align;
};
#ifndef __have_pthread_attr_t
typedef union pthread_attr_t pthread_attr_t;
# define __have_pthread_attr_t 1
#endif
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4


typedef union
{
  struct __pthread_mutex_s __data;
  char __size[__SIZEOF_PTHREAD_MUTEX_T];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[__SIZEOF_PTHREAD_COND_T];
  __extension__ long long int __align;
} pthread_cond_t;


#if defined __USE_UNIX98 || defined __USE_XOPEN2K
/* Data structure for reader-writer lock variable handling.  The
   structure of the attribute type is deliberately not exposed.  */
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[__SIZEOF_PTHREAD_RWLOCK_T];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_RWLOCKATTR_T];
  long int __align;
} pthread_rwlockattr_t;
#endif
# 99 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4


#ifdef __USE_XOPEN2K
/* POSIX spinlock data type.  */
typedef volatile int pthread_spinlock_t;


/* POSIX barriers data type.  The structure of the type is
   deliberately not exposed.  */
typedef union
{
  char __size[__SIZEOF_PTHREAD_BARRIER_T];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[__SIZEOF_PTHREAD_BARRIERATTR_T];
  int __align;
} pthread_barrierattr_t;
#endif
# 120 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4

#endif
# 122 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 255 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
#endif
# 256 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

__END_DECLS

#endif /* sys/types.h */
# 260 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 395 "/usr/include/stdlib.h" 2 3 4

/* These are the functions that actually do things.  The `random', `srandom',
   `initstate' and `setstate' functions are those from BSD Unices.
   The `rand' and `srand' functions are required by the ANSI standard.
   We provide both interfaces to the same random number generator.  */
/* Return a random long integer between 0 and RAND_MAX inclusive.  */
extern long int random (void) __THROW;

/* Seed the random number generator with the given number.  */
extern void srandom (unsigned int __seed) __THROW;

/* Initialize the random number generator to use state buffer STATEBUF,
   of length STATELEN, and seed it with SEED.  Optimal lengths are 8, 16,
   32, 64, 128 and 256, the bigger the better; values less than 8 will
   cause an error and values greater than 256 will be rounded down.  */
extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen) __THROW __nonnull ((2));

/* Switch the random number generator to state buffer STATEBUF,
   which should have been previously initialized by `initstate'.  */
extern char *setstate (char *__statebuf) __THROW __nonnull ((1));


# ifdef __USE_MISC
/* Reentrant versions of the `random' family of functions.
   These functions all use the following data structure to contain
   state, rather than global state variables.  */

struct random_data
  {
    int32_t *fptr;		/* Front pointer.  */
    int32_t *rptr;		/* Rear pointer.  */
    int32_t *state;		/* Array of state values.  */
    int rand_type;		/* Type of random number generator.  */
    int rand_deg;		/* Degree of random number generator.  */
    int rand_sep;		/* Distance between front and rear.  */
    int32_t *end_ptr;		/* Pointer behind state table.  */
  };

extern int random_r (struct random_data *__restrict __buf,
		     int32_t *__restrict __result) __THROW __nonnull ((1, 2));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __THROW __nonnull ((2));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
			size_t __statelen,
			struct random_data *__restrict __buf)
     __THROW __nonnull ((2, 4));

extern int setstate_r (char *__restrict __statebuf,
		       struct random_data *__restrict __buf)
     __THROW __nonnull ((1, 2));
# endif	/* Use misc.  */
# 449 "/usr/include/stdlib.h" 3 4
#endif	/* Use extended X/Open || misc. */
# 450 "/usr/include/stdlib.h" 3 4


/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) __THROW;
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) __THROW;

#ifdef __USE_POSIX199506
/* Reentrant interface according to POSIX.1.  */
extern int rand_r (unsigned int *__seed) __THROW;
#endif
# 461 "/usr/include/stdlib.h" 3 4


#if defined __USE_MISC || defined __USE_XOPEN
/* System V style 48-bit random number generator functions.  */

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern double drand48 (void) __THROW;
extern double erand48 (unsigned short int __xsubi[3]) __THROW __nonnull ((1));

/* Return non-negative, long integer in [0,2^31).  */
extern long int lrand48 (void) __THROW;
extern long int nrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Return signed, long integers in [-2^31,2^31).  */
extern long int mrand48 (void) __THROW;
extern long int jrand48 (unsigned short int __xsubi[3])
     __THROW __nonnull ((1));

/* Seed random number generator.  */
extern void srand48 (long int __seedval) __THROW;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __THROW __nonnull ((1));
extern void lcong48 (unsigned short int __param[7]) __THROW __nonnull ((1));

# ifdef __USE_MISC
/* Data structure for communication with thread safe versions.  This
   type is to be regarded as opaque.  It's only exported because users
   have to allocate objects of this type.  */
struct drand48_data
  {
    unsigned short int __x[3];	/* Current state.  */
    unsigned short int __old_x[3]; /* Old state.  */
    unsigned short int __c;	/* Additive const. in congruential formula.  */
    unsigned short int __init;	/* Flag for initializing.  */
    __extension__ unsigned long long int __a;	/* Factor in congruential
						   formula.  */
  };

/* Return non-negative, double-precision floating-point value in [0.0,1.0).  */
extern int drand48_r (struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      double *__restrict __result) __THROW __nonnull ((1, 2));

/* Return non-negative, long integer in [0,2^31).  */
extern int lrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Return signed, long integers in [-2^31,2^31).  */
extern int mrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
     __THROW __nonnull ((1, 2));

/* Seed random number generator.  */
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __THROW __nonnull ((2));

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer) __THROW __nonnull ((1, 2));

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
     __THROW __nonnull ((1, 2));
# endif	/* Use misc.  */
# 536 "/usr/include/stdlib.h" 3 4
#endif	/* Use misc or X/Open.  */
# 537 "/usr/include/stdlib.h" 3 4

/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size) __THROW __attribute_malloc__ __wur;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
     __THROW __attribute_malloc__ __wur;

/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
     __THROW __attribute_warn_unused_result__;

#ifdef __USE_GNU
/* Re-allocate the previously allocated block in PTR, making the new
   block large enough for NMEMB elements of SIZE bytes each.  */
/* __attribute_malloc__ is not used, because if reallocarray returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __THROW __attribute_warn_unused_result__;
#endif
# 561 "/usr/include/stdlib.h" 3 4

/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) __THROW;

#ifdef __USE_MISC
#if 0 /* expanded by -frewrite-includes */
# include <alloca.h>
#endif /* expanded by -frewrite-includes */
# 566 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/alloca.h" 1 3 4
/* Copyright (C) 1992-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_ALLOCA_H
#define	_ALLOCA_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 21 "/usr/include/alloca.h" 3 4
# 22 "/usr/include/alloca.h" 3 4

#define	__need_size_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 25 "/usr/include/alloca.h" 2 3 4

__BEGIN_DECLS

/* Remove any previous definitions.  */
#undef	alloca

/* Allocate a block that will be freed when the calling function exits.  */
extern void *alloca (size_t __size) __THROW;

#ifdef	__GNUC__
# define alloca(size)	__builtin_alloca (size)
#endif /* GCC.  */
# 37 "/usr/include/alloca.h" 3 4

__END_DECLS

#endif /* alloca.h */
# 41 "/usr/include/alloca.h" 3 4
# 567 "/usr/include/stdlib.h" 2 3 4
#endif /* Use misc.  */
# 568 "/usr/include/stdlib.h" 3 4

#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K) \
    || defined __USE_MISC
/* Allocate SIZE bytes on a page boundary.  The storage cannot be freed.  */
extern void *valloc (size_t __size) __THROW __attribute_malloc__ __wur;
#endif
# 574 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN2K
/* Allocate memory of SIZE bytes with an alignment of ALIGNMENT.  */
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __THROW __nonnull ((1)) __wur;
#endif
# 580 "/usr/include/stdlib.h" 3 4

#ifdef __USE_ISOC11
/* ISO C variant of aligned allocation.  */
extern void *aligned_alloc (size_t __alignment, size_t __size)
     __THROW __attribute_malloc__ __attribute_alloc_size__ ((2)) __wur;
#endif
# 586 "/usr/include/stdlib.h" 3 4

/* Abort execution and generate a core-dump.  */
extern void abort (void) __THROW __attribute__ ((__noreturn__));


/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) __THROW __nonnull ((1));

#if defined __USE_ISOC11 || defined __USE_ISOCXX11
/* Register a function to be called when `quick_exit' is called.  */
# ifdef __cplusplus
extern "C++" int at_quick_exit (void (*__func) (void))
     __THROW __asm ("at_quick_exit") __nonnull ((1));
# else
# 600 "/usr/include/stdlib.h" 3 4
extern int at_quick_exit (void (*__func) (void)) __THROW __nonnull ((1));
# endif
# 602 "/usr/include/stdlib.h" 3 4
#endif
# 603 "/usr/include/stdlib.h" 3 4

#ifdef	__USE_MISC
/* Register a function to be called with the status
   given to `exit' and the given argument.  */
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __THROW __nonnull ((1));
#endif
# 610 "/usr/include/stdlib.h" 3 4

/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) __THROW __attribute__ ((__noreturn__));

#if defined __USE_ISOC11 || defined __USE_ISOCXX11
/* Call all functions registered with `at_quick_exit' in the reverse
   of the order in which they were registered and terminate program
   execution with STATUS.  */
extern void quick_exit (int __status) __THROW __attribute__ ((__noreturn__));
#endif
# 622 "/usr/include/stdlib.h" 3 4

#ifdef __USE_ISOC99
/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) __THROW __attribute__ ((__noreturn__));
#endif
# 628 "/usr/include/stdlib.h" 3 4


/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (const char *__name) __THROW __nonnull ((1)) __wur;

#ifdef __USE_GNU
/* This function is similar to the above but returns NULL if the
   programs is running with SUID or SGID enabled.  */
extern char *secure_getenv (const char *__name)
     __THROW __nonnull ((1)) __wur;
#endif
# 639 "/usr/include/stdlib.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN
/* The SVID says this is in <stdio.h>, but this seems a better place.	*/
/* Put STRING, which is of the form "NAME=VALUE", in the environment.
   If there is no `=', remove NAME from the environment.  */
extern int putenv (char *__string) __THROW __nonnull ((1));
#endif
# 646 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN2K
/* Set NAME to VALUE in the environment.
   If REPLACE is nonzero, overwrite an existing value.  */
extern int setenv (const char *__name, const char *__value, int __replace)
     __THROW __nonnull ((2));

/* Remove the variable NAME from the environment.  */
extern int unsetenv (const char *__name) __THROW __nonnull ((1));
#endif
# 656 "/usr/include/stdlib.h" 3 4

#ifdef	__USE_MISC
/* The `clearenv' was planned to be added to POSIX.1 but probably
   never made it.  Nevertheless the POSIX.9 standard (POSIX bindings
   for Fortran 77) requires this function.  */
extern int clearenv (void) __THROW;
#endif
# 663 "/usr/include/stdlib.h" 3 4


#if defined __USE_MISC \
    || (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8)
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the file name unique.
   Always returns TEMPLATE, it's either a temporary file name or a null
   string if it cannot get a unique file name.  */
extern char *mktemp (char *__template) __THROW __nonnull ((1));
#endif
# 674 "/usr/include/stdlib.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
/* Generate a unique temporary file name from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the filename unique.
   Returns a file descriptor open on the file for reading and writing,
   or -1 if it cannot create a uniquely-named file.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkstemp (char *__template) __nonnull ((1)) __wur;
# else
# 687 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkstemp, (char *__template), mkstemp64)
     __nonnull ((1)) __wur;
#  else
# 691 "/usr/include/stdlib.h" 3 4
#   define mkstemp mkstemp64
#  endif
# 693 "/usr/include/stdlib.h" 3 4
# endif
# 694 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkstemp64 (char *__template) __nonnull ((1)) __wur;
# endif
# 697 "/usr/include/stdlib.h" 3 4
#endif
# 698 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Similar to mkstemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkstemps (char *__template, int __suffixlen) __nonnull ((1)) __wur;
# else
# 709 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkstemps, (char *__template, int __suffixlen),
		       mkstemps64) __nonnull ((1)) __wur;
#  else
# 713 "/usr/include/stdlib.h" 3 4
#   define mkstemps mkstemps64
#  endif
# 715 "/usr/include/stdlib.h" 3 4
# endif
# 716 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkstemps64 (char *__template, int __suffixlen)
     __nonnull ((1)) __wur;
# endif
# 720 "/usr/include/stdlib.h" 3 4
#endif
# 721 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN2K8
/* Create a unique temporary directory from TEMPLATE.
   The last six characters of TEMPLATE must be "XXXXXX";
   they are replaced with a string that makes the directory name unique.
   Returns TEMPLATE, or a null pointer if it cannot get a unique name.
   The directory is created mode 700.  */
extern char *mkdtemp (char *__template) __THROW __nonnull ((1)) __wur;
#endif
# 730 "/usr/include/stdlib.h" 3 4

#ifdef __USE_GNU
/* Generate a unique temporary file name from TEMPLATE similar to
   mkstemp.  But allow the caller to pass additional flags which are
   used in the open call to create the file..

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkostemp (char *__template, int __flags) __nonnull ((1)) __wur;
# else
# 741 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkostemp, (char *__template, int __flags), mkostemp64)
     __nonnull ((1)) __wur;
#  else
# 745 "/usr/include/stdlib.h" 3 4
#   define mkostemp mkostemp64
#  endif
# 747 "/usr/include/stdlib.h" 3 4
# endif
# 748 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkostemp64 (char *__template, int __flags) __nonnull ((1)) __wur;
# endif
# 751 "/usr/include/stdlib.h" 3 4

/* Similar to mkostemp, but the template can have a suffix after the
   XXXXXX.  The length of the suffix is specified in the second
   parameter.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
# ifndef __USE_FILE_OFFSET64
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __nonnull ((1)) __wur;
# else
# 762 "/usr/include/stdlib.h" 3 4
#  ifdef __REDIRECT
extern int __REDIRECT (mkostemps, (char *__template, int __suffixlen,
				   int __flags), mkostemps64)
     __nonnull ((1)) __wur;
#  else
# 767 "/usr/include/stdlib.h" 3 4
#   define mkostemps mkostemps64
#  endif
# 769 "/usr/include/stdlib.h" 3 4
# endif
# 770 "/usr/include/stdlib.h" 3 4
# ifdef __USE_LARGEFILE64
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __nonnull ((1)) __wur;
# endif
# 774 "/usr/include/stdlib.h" 3 4
#endif
# 775 "/usr/include/stdlib.h" 3 4


/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (const char *__command) __wur;


#ifdef	__USE_GNU
/* Return a malloc'd string containing the canonical absolute name of the
   existing named file.  */
extern char *canonicalize_file_name (const char *__name)
     __THROW __nonnull ((1)) __wur;
#endif
# 790 "/usr/include/stdlib.h" 3 4

#if defined __USE_MISC || defined __USE_XOPEN_EXTENDED
/* Return the canonical absolute name of file NAME.  If RESOLVED is
   null, the result is malloc'd; otherwise, if the canonical name is
   PATH_MAX chars or more, returns null with `errno' set to
   ENAMETOOLONG; if the name fits in fewer than PATH_MAX chars,
   returns the name in RESOLVED.  */
extern char *realpath (const char *__restrict __name,
		       char *__restrict __resolved) __THROW __wur;
#endif
# 800 "/usr/include/stdlib.h" 3 4


/* Shorthand for type of comparison functions.  */
#ifndef __COMPAR_FN_T
# define __COMPAR_FN_T
typedef int (*__compar_fn_t) (const void *, const void *);

# ifdef	__USE_GNU
typedef __compar_fn_t comparison_fn_t;
# endif
# 810 "/usr/include/stdlib.h" 3 4
#endif
# 811 "/usr/include/stdlib.h" 3 4
#ifdef __USE_GNU
typedef int (*__compar_d_fn_t) (const void *, const void *, void *);
#endif
# 814 "/usr/include/stdlib.h" 3 4

/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __nonnull ((1, 2, 5)) __wur;

#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib-bsearch.h>
#endif /* expanded by -frewrite-includes */
# 822 "/usr/include/stdlib.h" 3 4
# 823 "/usr/include/stdlib.h" 3 4
#endif
# 824 "/usr/include/stdlib.h" 3 4

/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) __nonnull ((1, 4));
#ifdef __USE_GNU
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
		     __compar_d_fn_t __compar, void *__arg)
  __nonnull ((1, 4));
#endif
# 834 "/usr/include/stdlib.h" 3 4


/* Return the absolute value of X.  */
extern int abs (int __x) __THROW __attribute__ ((__const__)) __wur;
extern long int labs (long int __x) __THROW __attribute__ ((__const__)) __wur;

#ifdef __USE_ISOC99
__extension__ extern long long int llabs (long long int __x)
     __THROW __attribute__ ((__const__)) __wur;
#endif
# 844 "/usr/include/stdlib.h" 3 4


/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
     __THROW __attribute__ ((__const__)) __wur;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __THROW __attribute__ ((__const__)) __wur;

#ifdef __USE_ISOC99
__extension__ extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
     __THROW __attribute__ ((__const__)) __wur;
#endif
# 859 "/usr/include/stdlib.h" 3 4


#if (defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K8) \
    || defined __USE_MISC
/* Convert floating point numbers to strings.  The returned values are
   valid only until another call to the same function.  */

/* Convert VALUE to a string with NDIGIT digits and return a pointer to
   this.  Set *DECPT with the position of the decimal character and *SIGN
   with the sign of the number.  */
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* Convert VALUE to a string rounded to NDIGIT decimal digits.  Set *DECPT
   with the position of the decimal character and *SIGN with the sign of
   the number.  */
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign) __THROW __nonnull ((3, 4)) __wur;

/* If possible convert VALUE to a string with NDIGIT significant digits.
   Otherwise use exponential representation.  The resulting string will
   be written to BUF.  */
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;
#endif
# 884 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Long double versions of above functions.  */
extern char *qecvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qfcvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
     __THROW __nonnull ((3, 4)) __wur;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __THROW __nonnull ((3)) __wur;


/* Reentrant version of the functions above which provide their own
   buffers.  */
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len) __THROW __nonnull ((3, 4, 5));

extern int qecvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
     __THROW __nonnull ((3, 4, 5));
#endif	/* misc */
# 915 "/usr/include/stdlib.h" 3 4


/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (const char *__s, size_t __n) __THROW;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t *__restrict __pwc,
		   const char *__restrict __s, size_t __n) __THROW;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) __THROW;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t *__restrict  __pwcs,
			const char *__restrict __s, size_t __n) __THROW;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char *__restrict __s,
			const wchar_t *__restrict __pwcs, size_t __n)
     __THROW;


#ifdef __USE_MISC
/* Determine whether the string value of RESPONSE matches the affirmation
   or negative response expression as specified by the LC_MESSAGES category
   in the program's current locale.  Returns 1 if affirmative, 0 if
   negative, and -1 if not matching.  */
extern int rpmatch (const char *__response) __THROW __nonnull ((1)) __wur;
#endif
# 945 "/usr/include/stdlib.h" 3 4


#if defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8
/* Parse comma separated suboption from *OPTIONP and match against
   strings in TOKENS.  If found return index and set *VALUEP to
   optional value introduced by an equal sign.  If the suboption is
   not part of TOKENS return in *VALUEP beginning of unknown
   suboption.  On exit *OPTIONP is set to the beginning of the next
   token or at the terminating NUL character.  */
extern int getsubopt (char **__restrict __optionp,
		      char *const *__restrict __tokens,
		      char **__restrict __valuep)
     __THROW __nonnull ((1, 2, 3)) __wur;
#endif
# 959 "/usr/include/stdlib.h" 3 4


#ifdef __USE_XOPEN
/* Setup DES tables according KEY.  */
extern void setkey (const char *__key) __THROW __nonnull ((1));
#endif
# 965 "/usr/include/stdlib.h" 3 4


/* X/Open pseudo terminal handling.  */

#ifdef __USE_XOPEN2KXSI
/* Return a master pseudo-terminal handle.  */
extern int posix_openpt (int __oflag) __wur;
#endif
# 973 "/usr/include/stdlib.h" 3 4

#ifdef __USE_XOPEN_EXTENDED
/* The next four functions all take a master pseudo-tty fd and
   perform an operation on the associated slave:  */

/* Chown the slave to the calling user.  */
extern int grantpt (int __fd) __THROW;

/* Release an internal lock so the slave can be opened.
   Call after grantpt().  */
extern int unlockpt (int __fd) __THROW;

/* Return the pathname of the pseudo terminal slave associated with
   the master FD is open on, or NULL on errors.
   The returned storage is good until the next call to this function.  */
extern char *ptsname (int __fd) __THROW __wur;
#endif
# 990 "/usr/include/stdlib.h" 3 4

#ifdef __USE_GNU
/* Store at most BUFLEN characters of the pathname of the slave pseudo
   terminal associated with the master FD is open on in BUF.
   Return 0 on success, otherwise an error number.  */
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __THROW __nonnull ((2));

/* Open a master pseudo terminal and return its file descriptor.  */
extern int getpt (void);
#endif
# 1001 "/usr/include/stdlib.h" 3 4

#ifdef __USE_MISC
/* Put the 1 minute, 5 minute and 15 minute load averages into the first
   NELEM elements of LOADAVG.  Return the number written (never more than
   three, but may be less than NELEM), or -1 if an error occurred.  */
extern int getloadavg (double __loadavg[], int __nelem)
     __THROW __nonnull ((1));
#endif
# 1009 "/usr/include/stdlib.h" 3 4

#if defined __USE_XOPEN_EXTENDED && !defined __USE_XOPEN2K
/* Return the index into the active-logins file (utmp) for
   the controlling terminal.  */
extern int ttyslot (void) __THROW;
#endif
# 1015 "/usr/include/stdlib.h" 3 4

#if 0 /* expanded by -frewrite-includes */
#include <bits/stdlib-float.h>
#endif /* expanded by -frewrite-includes */
# 1016 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _STDLIB_H
# error "Never use <bits/stdlib-float.h> directly; include <stdlib.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

#ifdef __USE_EXTERN_INLINES
__extern_inline double
__NTH (atof (const char *__nptr))
{
  return strtod (__nptr, (char **) NULL);
}
#endif /* Optimizing and Inlining.  */
# 30 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4
# 1017 "/usr/include/stdlib.h" 2 3 4

/* Define some macros helping to catch buffer overflows.  */
#if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib.h>
#endif /* expanded by -frewrite-includes */
# 1020 "/usr/include/stdlib.h" 3 4
# 1021 "/usr/include/stdlib.h" 3 4
#endif
# 1022 "/usr/include/stdlib.h" 3 4
#ifdef __LDBL_COMPAT
#if 0 /* expanded by -frewrite-includes */
# include <bits/stdlib-ldbl.h>
#endif /* expanded by -frewrite-includes */
# 1023 "/usr/include/stdlib.h" 3 4
# 1024 "/usr/include/stdlib.h" 3 4
#endif
# 1025 "/usr/include/stdlib.h" 3 4

__END_DECLS

#endif /* stdlib.h  */
# 1029 "/usr/include/stdlib.h" 3 4
# 31 "tests.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <string.h>
#endif /* expanded by -frewrite-includes */
# 31 "tests.c"
# 1 "/usr/include/string.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.21 String handling	<string.h>
 */

#ifndef	_STRING_H
#define	_STRING_H	1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#if 0 /* expanded by -frewrite-includes */
#include <bits/libc-header-start.h>
#endif /* expanded by -frewrite-includes */
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */

#ifndef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
# error "Never include <bits/libc-header-start.h> directly."
#endif
# 30 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#undef __GLIBC_USE_LIB_EXT2
#if (defined __USE_GNU							\
     || (defined __STDC_WANT_LIB_EXT2__ && __STDC_WANT_LIB_EXT2__ > 0))
# define __GLIBC_USE_LIB_EXT2 1
#else
# 42 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 0
#endif
# 44 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  */
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_BFP_EXT__
# define __GLIBC_USE_IEC_60559_BFP_EXT 1
#else
# 51 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 0
#endif
# 53 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#else
# 60 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#endif
# 62 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_TYPES_EXT__
# define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#else
# 69 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#endif
# 71 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 27 "/usr/include/string.h" 2 3 4

__BEGIN_DECLS

/* Get size_t and NULL from <stddef.h>.  */
#define	__need_size_t
#define	__need_NULL
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/string.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 34 "/usr/include/string.h" 2 3 4

/* Tell the caller that we provide correct C++ prototypes.  */
#if defined __cplusplus && __GNUC_PREREQ (4, 4)
# define __CORRECT_ISO_CPP_STRING_H_PROTO
#endif
# 39 "/usr/include/string.h" 3 4


/* Copy N bytes of SRC to DEST.  */
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
		     size_t __n) __THROW __nonnull ((1, 2));
/* Copy N bytes of SRC to DEST, guaranteeing
   correct behavior for overlapping strings.  */
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __THROW __nonnull ((1, 2));

/* Copy no more than N bytes of SRC to DEST, stopping when C is found.
   Return the position in DEST one byte past where C was copied,
   or NULL if C was not found in the first N bytes of SRC.  */
#if defined __USE_MISC || defined __USE_XOPEN
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
		      int __c, size_t __n)
     __THROW __nonnull ((1, 2));
#endif /* Misc || X/Open.  */
# 57 "/usr/include/string.h" 3 4


/* Set N bytes of S to C.  */
extern void *memset (void *__s, int __c, size_t __n) __THROW __nonnull ((1));

/* Compare N bytes of S1 and S2.  */
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __THROW __attribute_pure__ __nonnull ((1, 2));

/* Search N bytes of S for C.  */
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));
extern const void *memchr (const void *__s, int __c, size_t __n)
      __THROW __asm ("memchr") __attribute_pure__ __nonnull ((1));

# ifdef __OPTIMIZE__
__extern_always_inline void *
memchr (void *__s, int __c, size_t __n) __THROW
{
  return __builtin_memchr (__s, __c, __n);
}

__extern_always_inline const void *
memchr (const void *__s, int __c, size_t __n) __THROW
{
  return __builtin_memchr (__s, __c, __n);
}
# endif
# 88 "/usr/include/string.h" 3 4
}
#else
# 90 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __THROW __attribute_pure__ __nonnull ((1));
#endif
# 93 "/usr/include/string.h" 3 4

#ifdef __USE_GNU
/* Search in S for C.  This is similar to `memchr' but there is no
   length limit.  */
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++" void *rawmemchr (void *__s, int __c)
     __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     __THROW __asm ("rawmemchr") __attribute_pure__ __nonnull ((1));
# else
# 103 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __THROW __attribute_pure__ __nonnull ((1));
# endif
# 106 "/usr/include/string.h" 3 4

/* Search N bytes of S for the final occurrence of C.  */
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      __THROW __asm ("memrchr") __attribute_pure__ __nonnull ((1));
# else
# 114 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __THROW __attribute_pure__ __nonnull ((1));
# endif
# 117 "/usr/include/string.h" 3 4
#endif
# 118 "/usr/include/string.h" 3 4


/* Copy SRC to DEST.  */
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __THROW __nonnull ((1, 2));
/* Copy no more than N characters of SRC to DEST.  */
extern char *strncpy (char *__restrict __dest,
		      const char *__restrict __src, size_t __n)
     __THROW __nonnull ((1, 2));

/* Append SRC onto DEST.  */
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __THROW __nonnull ((1, 2));
/* Append no more than N characters from SRC onto DEST.  */
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
		      size_t __n) __THROW __nonnull ((1, 2));

/* Compare S1 and S2.  */
extern int strcmp (const char *__s1, const char *__s2)
     __THROW __attribute_pure__ __nonnull ((1, 2));
/* Compare N characters of S1 and S2.  */
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __THROW __attribute_pure__ __nonnull ((1, 2));

/* Compare the collated forms of S1 and S2.  */
extern int strcoll (const char *__s1, const char *__s2)
     __THROW __attribute_pure__ __nonnull ((1, 2));
/* Put a transformation of SRC into no more than N bytes of DEST.  */
extern size_t strxfrm (char *__restrict __dest,
		       const char *__restrict __src, size_t __n)
     __THROW __nonnull ((2));

#ifdef __USE_XOPEN2K8
/* POSIX.1-2008 extended locale interface (see locale.h).  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/locale_t.h>
#endif /* expanded by -frewrite-includes */
# 152 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
/* Definition of locale_t.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_TYPES_LOCALE_T_H
#define _BITS_TYPES_LOCALE_T_H 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/types/__locale_t.h>
#endif /* expanded by -frewrite-includes */
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
/* Definition of struct __locale_struct and __locale_t.
   Copyright (C) 1997-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@cygnus.com>, 1997.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _BITS_TYPES___LOCALE_T_H
#define _BITS_TYPES___LOCALE_T_H 1

/* POSIX.1-2008: the locale_t type, representing a locale context
   (implementation-namespace version).  This type should be treated
   as opaque by applications; some details are exposed for the sake of
   efficiency in e.g. ctype functions.  */

struct __locale_struct
{
  /* Note: LC_ALL is not a valid index into this array.  */
  struct __locale_data *__locales[13]; /* 13 = __LC_LAST. */

  /* To increase the speed of this solution we add some special members.  */
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;

  /* Note: LC_ALL is not a valid index into this array.  */
  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;

#endif /* bits/types/__locale_t.h */
# 45 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;

#endif /* bits/types/locale_t.h */
# 27 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 153 "/usr/include/string.h" 2 3 4

/* Compare the collated forms of S1 and S2, using sorting rules from L.  */
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __THROW __attribute_pure__ __nonnull ((1, 2, 3));
/* Put a transformation of SRC into no more than N bytes of DEST,
   using sorting rules from L.  */
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
			 locale_t __l) __THROW __nonnull ((2, 4));
#endif
# 162 "/usr/include/string.h" 3 4

#if (defined __USE_XOPEN_EXTENDED || defined __USE_XOPEN2K8	\
     || __GLIBC_USE (LIB_EXT2))
/* Duplicate S, returning an identical malloc'd string.  */
extern char *strdup (const char *__s)
     __THROW __attribute_malloc__ __nonnull ((1));
#endif
# 169 "/usr/include/string.h" 3 4

/* Return a malloc'd copy of at most N bytes of STRING.  The
   resultant string is terminated even if no null terminator
   appears before STRING[N].  */
#if defined __USE_XOPEN2K8 || __GLIBC_USE (LIB_EXT2)
extern char *strndup (const char *__string, size_t __n)
     __THROW __attribute_malloc__ __nonnull ((1));
#endif
# 177 "/usr/include/string.h" 3 4

#if defined __USE_GNU && defined __GNUC__
/* Duplicate S, returning an identical alloca'd string.  */
# define strdupa(s)							      \
  (__extension__							      \
    ({									      \
      const char *__old = (s);						      \
      size_t __len = strlen (__old) + 1;				      \
      char *__new = (char *) __builtin_alloca (__len);			      \
      (char *) memcpy (__new, __old, __len);				      \
    }))

/* Return an alloca'd copy of at most N bytes of string.  */
# define strndupa(s, n)							      \
  (__extension__							      \
    ({									      \
      const char *__old = (s);						      \
      size_t __len = strnlen (__old, (n));				      \
      char *__new = (char *) __builtin_alloca (__len + 1);		      \
      __new[__len] = '\0';						      \
      (char *) memcpy (__new, __old, __len);				      \
    }))
#endif
# 200 "/usr/include/string.h" 3 4

/* Find the first occurrence of C in S.  */
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++"
{
extern char *strchr (char *__s, int __c)
     __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));
extern const char *strchr (const char *__s, int __c)
     __THROW __asm ("strchr") __attribute_pure__ __nonnull ((1));

# ifdef __OPTIMIZE__
__extern_always_inline char *
strchr (char *__s, int __c) __THROW
{
  return __builtin_strchr (__s, __c);
}

__extern_always_inline const char *
strchr (const char *__s, int __c) __THROW
{
  return __builtin_strchr (__s, __c);
}
# endif
# 223 "/usr/include/string.h" 3 4
}
#else
# 225 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __THROW __attribute_pure__ __nonnull ((1));
#endif
# 228 "/usr/include/string.h" 3 4
/* Find the last occurrence of C in S.  */
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++"
{
extern char *strrchr (char *__s, int __c)
     __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));
extern const char *strrchr (const char *__s, int __c)
     __THROW __asm ("strrchr") __attribute_pure__ __nonnull ((1));

# ifdef __OPTIMIZE__
__extern_always_inline char *
strrchr (char *__s, int __c) __THROW
{
  return __builtin_strrchr (__s, __c);
}

__extern_always_inline const char *
strrchr (const char *__s, int __c) __THROW
{
  return __builtin_strrchr (__s, __c);
}
# endif
# 250 "/usr/include/string.h" 3 4
}
#else
# 252 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __THROW __attribute_pure__ __nonnull ((1));
#endif
# 255 "/usr/include/string.h" 3 4

#ifdef __USE_GNU
/* This function is similar to `strchr'.  But it returns a pointer to
   the closing NUL byte in case C is not found in S.  */
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++" char *strchrnul (char *__s, int __c)
     __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
extern "C++" const char *strchrnul (const char *__s, int __c)
     __THROW __asm ("strchrnul") __attribute_pure__ __nonnull ((1));
# else
# 265 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __THROW __attribute_pure__ __nonnull ((1));
# endif
# 268 "/usr/include/string.h" 3 4
#endif
# 269 "/usr/include/string.h" 3 4

/* Return the length of the initial segment of S which
   consists entirely of characters not in REJECT.  */
extern size_t strcspn (const char *__s, const char *__reject)
     __THROW __attribute_pure__ __nonnull ((1, 2));
/* Return the length of the initial segment of S which
   consists entirely of characters in ACCEPT.  */
extern size_t strspn (const char *__s, const char *__accept)
     __THROW __attribute_pure__ __nonnull ((1, 2));
/* Find the first occurrence in S of any character in ACCEPT.  */
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));
extern const char *strpbrk (const char *__s, const char *__accept)
     __THROW __asm ("strpbrk") __attribute_pure__ __nonnull ((1, 2));

# ifdef __OPTIMIZE__
__extern_always_inline char *
strpbrk (char *__s, const char *__accept) __THROW
{
  return __builtin_strpbrk (__s, __accept);
}

__extern_always_inline const char *
strpbrk (const char *__s, const char *__accept) __THROW
{
  return __builtin_strpbrk (__s, __accept);
}
# endif
# 300 "/usr/include/string.h" 3 4
}
#else
# 302 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __THROW __attribute_pure__ __nonnull ((1, 2));
#endif
# 305 "/usr/include/string.h" 3 4
/* Find the first occurrence of NEEDLE in HAYSTACK.  */
#ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));
extern const char *strstr (const char *__haystack, const char *__needle)
     __THROW __asm ("strstr") __attribute_pure__ __nonnull ((1, 2));

# ifdef __OPTIMIZE__
__extern_always_inline char *
strstr (char *__haystack, const char *__needle) __THROW
{
  return __builtin_strstr (__haystack, __needle);
}

__extern_always_inline const char *
strstr (const char *__haystack, const char *__needle) __THROW
{
  return __builtin_strstr (__haystack, __needle);
}
# endif
# 327 "/usr/include/string.h" 3 4
}
#else
# 329 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __THROW __attribute_pure__ __nonnull ((1, 2));
#endif
# 332 "/usr/include/string.h" 3 4


/* Divide S into tokens separated by characters in DELIM.  */
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __THROW __nonnull ((2));

/* Divide S into tokens separated by characters in DELIM.  Information
   passed between calls are stored in SAVE_PTR.  */
extern char *__strtok_r (char *__restrict __s,
			 const char *__restrict __delim,
			 char **__restrict __save_ptr)
     __THROW __nonnull ((2, 3));
#ifdef __USE_POSIX
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
		       char **__restrict __save_ptr)
     __THROW __nonnull ((2, 3));
#endif
# 349 "/usr/include/string.h" 3 4

#ifdef __USE_GNU
/* Similar to `strstr' but this function ignores the case of both strings.  */
# ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     __THROW __asm ("strcasestr") __attribute_pure__ __nonnull ((1, 2));
extern "C++" const char *strcasestr (const char *__haystack,
				     const char *__needle)
     __THROW __asm ("strcasestr") __attribute_pure__ __nonnull ((1, 2));
# else
# 359 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __THROW __attribute_pure__ __nonnull ((1, 2));
# endif
# 362 "/usr/include/string.h" 3 4
#endif
# 363 "/usr/include/string.h" 3 4

#ifdef __USE_GNU
/* Find the first occurrence of NEEDLE in HAYSTACK.
   NEEDLE is NEEDLELEN bytes long;
   HAYSTACK is HAYSTACKLEN bytes long.  */
extern void *memmem (const void *__haystack, size_t __haystacklen,
		     const void *__needle, size_t __needlelen)
     __THROW __attribute_pure__ __nonnull ((1, 3));

/* Copy N bytes of SRC to DEST, return pointer to bytes after the
   last written byte.  */
extern void *__mempcpy (void *__restrict __dest,
			const void *__restrict __src, size_t __n)
     __THROW __nonnull ((1, 2));
extern void *mempcpy (void *__restrict __dest,
		      const void *__restrict __src, size_t __n)
     __THROW __nonnull ((1, 2));
#endif
# 381 "/usr/include/string.h" 3 4


/* Return the length of S.  */
extern size_t strlen (const char *__s)
     __THROW __attribute_pure__ __nonnull ((1));

#ifdef	__USE_XOPEN2K8
/* Find the length of STRING, but scan at most MAXLEN characters.
   If no '\0' terminator is found in that many characters, return MAXLEN.  */
extern size_t strnlen (const char *__string, size_t __maxlen)
     __THROW __attribute_pure__ __nonnull ((1));
#endif
# 393 "/usr/include/string.h" 3 4


/* Return a string describing the meaning of the `errno' code in ERRNUM.  */
extern char *strerror (int __errnum) __THROW;
#ifdef __USE_XOPEN2K
/* Reentrant version of `strerror'.
   There are 2 flavors of `strerror_r', GNU which returns the string
   and may or may not use the supplied temporary buffer and POSIX one
   which fills the string into the buffer.
   To use the POSIX version, -D_XOPEN_SOURCE=600 or -D_POSIX_C_SOURCE=200112L
   without -D_GNU_SOURCE is needed, otherwise the GNU version is
   preferred.  */
# if defined __USE_XOPEN2K && !defined __USE_GNU
/* Fill BUF with a string describing the meaning of the `errno' code in
   ERRNUM.  */
#  ifdef __REDIRECT_NTH
extern int __REDIRECT_NTH (strerror_r,
			   (int __errnum, char *__buf, size_t __buflen),
			   __xpg_strerror_r) __nonnull ((2));
#  else
# 413 "/usr/include/string.h" 3 4
extern int __xpg_strerror_r (int __errnum, char *__buf, size_t __buflen)
     __THROW __nonnull ((2));
#   define strerror_r __xpg_strerror_r
#  endif
# 417 "/usr/include/string.h" 3 4
# else
# 418 "/usr/include/string.h" 3 4
/* If a temporary buffer is required, at most BUFLEN bytes of BUF will be
   used.  */
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __THROW __nonnull ((2)) __wur;
# endif
# 423 "/usr/include/string.h" 3 4
#endif
# 424 "/usr/include/string.h" 3 4

#ifdef __USE_XOPEN2K8
/* Translate error number to string according to the locale L.  */
extern char *strerror_l (int __errnum, locale_t __l) __THROW;
#endif
# 429 "/usr/include/string.h" 3 4

#ifdef __USE_MISC
#if 0 /* expanded by -frewrite-includes */
# include <strings.h>
#endif /* expanded by -frewrite-includes */
# 431 "/usr/include/string.h" 3 4
# 1 "/usr/include/strings.h" 1 3 4
/* Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef	_STRINGS_H
#define	_STRINGS_H	1

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 21 "/usr/include/strings.h" 3 4
# 22 "/usr/include/strings.h" 3 4
#define __need_size_t
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/local/lib/clang/6.0.0/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Copyright (c) 2008 Eli Friedman
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */

#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)

#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
/* Always define miscellaneous pieces when modules are available. */
#if !__has_feature(modules)
#define __STDDEF_H
#endif
# 37 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 44 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_ptrdiff_t)
#if !defined(_PTRDIFF_T) || __has_feature(modules)
/* Always define ptrdiff_t when modules are available. */
#if !__has_feature(modules)
#define _PTRDIFF_T
#endif
# 51 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 53 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 55 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_size_t)
#if !defined(_SIZE_T) || __has_feature(modules)
/* Always define size_t when modules are available. */
#if !__has_feature(modules)
#define _SIZE_T
#endif
# 62 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ size_t;
#endif
# 64 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 66 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
/* Always define rsize_t when modules are available. */
#if !__has_feature(modules)
#define _RSIZE_T
#endif
# 76 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __SIZE_TYPE__ rsize_t;
#endif
# 78 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif /* defined(__need_STDDEF_H_misc) */
# 79 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_wchar_t)
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if !defined(_WCHAR_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WCHAR_T
#if defined(_MSC_EXTENSIONS)
#define _WCHAR_T_DEFINED
#endif
# 89 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 90 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 92 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 93 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 95 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_NULL)
#undef NULL
#ifdef __cplusplus
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#    define NULL __null
#  else
# 102 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#    define NULL 0
#  endif
# 104 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#else
# 105 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#  define NULL ((void*)0)
#endif
# 107 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#ifdef __cplusplus
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 112 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 113 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 115 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#if defined(__need_STDDEF_H_misc)
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 118 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 119 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#endif
# 120 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 123 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if defined(__need_wint_t)
/* Always define wint_t when modules are available. */
#if !defined(_WINT_T) || __has_feature(modules)
#if !__has_feature(modules)
#define _WINT_T
#endif
# 132 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
typedef __WINT_TYPE__ wint_t;
#endif
# 134 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
#undef __need_wint_t
#endif /* __need_wint_t */
# 136 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4

#endif
# 138 "/usr/local/lib/clang/6.0.0/include/stddef.h" 3 4
# 24 "/usr/include/strings.h" 2 3 4

/* Tell the caller that we provide correct C++ prototypes.  */
#if defined __cplusplus && __GNUC_PREREQ (4, 4)
# define __CORRECT_ISO_CPP_STRINGS_H_PROTO
#endif
# 29 "/usr/include/strings.h" 3 4

__BEGIN_DECLS

#if defined __USE_MISC || !defined __USE_XOPEN2K8
/* Compare N bytes of S1 and S2 (same as memcmp).  */
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __THROW __attribute_pure__ __nonnull ((1, 2));

/* Copy N bytes of SRC to DEST (like memmove, but args reversed).  */
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __THROW __nonnull ((1, 2));

/* Set N bytes of S to 0.  */
extern void bzero (void *__s, size_t __n) __THROW __nonnull ((1));

/* Find the first occurrence of C in S (same as strchr).  */
# ifdef __CORRECT_ISO_CPP_STRINGS_H_PROTO
extern "C++"
{
extern char *index (char *__s, int __c)
     __THROW __asm ("index") __attribute_pure__ __nonnull ((1));
extern const char *index (const char *__s, int __c)
     __THROW __asm ("index") __attribute_pure__ __nonnull ((1));

#  if defined __OPTIMIZE__
__extern_always_inline char *
index (char *__s, int __c) __THROW
{
  return __builtin_index (__s, __c);
}

__extern_always_inline const char *
index (const char *__s, int __c) __THROW
{
  return __builtin_index (__s, __c);
}
#  endif
# 66 "/usr/include/strings.h" 3 4
}
# else
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __THROW __attribute_pure__ __nonnull ((1));
# endif
# 71 "/usr/include/strings.h" 3 4

/* Find the last occurrence of C in S (same as strrchr).  */
# ifdef __CORRECT_ISO_CPP_STRINGS_H_PROTO
extern "C++"
{
extern char *rindex (char *__s, int __c)
     __THROW __asm ("rindex") __attribute_pure__ __nonnull ((1));
extern const char *rindex (const char *__s, int __c)
     __THROW __asm ("rindex") __attribute_pure__ __nonnull ((1));

#  if defined __OPTIMIZE__
__extern_always_inline char *
rindex (char *__s, int __c) __THROW
{
  return __builtin_rindex (__s, __c);
}

__extern_always_inline const char *
rindex (const char *__s, int __c) __THROW
{
  return __builtin_rindex (__s, __c);
}
#  endif
# 94 "/usr/include/strings.h" 3 4
}
# else
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __THROW __attribute_pure__ __nonnull ((1));
# endif
# 99 "/usr/include/strings.h" 3 4
#endif
# 100 "/usr/include/strings.h" 3 4

#if defined __USE_MISC || !defined __USE_XOPEN2K8 || defined __USE_XOPEN2K8XSI
/* Return the position of the first bit set in I, or 0 if none are set.
   The least-significant bit is position 1, the most-significant 32.  */
extern int ffs (int __i) __THROW __attribute_const__;
#endif
# 106 "/usr/include/strings.h" 3 4

/* The following two functions are non-standard but necessary for non-32 bit
   platforms.  */
# ifdef	__USE_MISC
extern int ffsl (long int __l) __THROW __attribute_const__;
__extension__ extern int ffsll (long long int __ll)
     __THROW __attribute_const__;
# endif
# 114 "/usr/include/strings.h" 3 4

/* Compare S1 and S2, ignoring case.  */
extern int strcasecmp (const char *__s1, const char *__s2)
     __THROW __attribute_pure__ __nonnull ((1, 2));

/* Compare no more than N chars of S1 and S2, ignoring case.  */
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __THROW __attribute_pure__ __nonnull ((1, 2));

#ifdef	__USE_XOPEN2K8
/* POSIX.1-2008 extended locale interface (see locale.h).  */
#if 0 /* expanded by -frewrite-includes */
# include <bits/types/locale_t.h>
#endif /* expanded by -frewrite-includes */
# 125 "/usr/include/strings.h" 3 4
# 126 "/usr/include/strings.h" 3 4

/* Compare S1 and S2, ignoring case, using collation rules from LOC.  */
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __THROW __attribute_pure__ __nonnull ((1, 2, 3));

/* Compare no more than N chars of S1 and S2, ignoring case, using
   collation rules from LOC.  */
extern int strncasecmp_l (const char *__s1, const char *__s2,
			  size_t __n, locale_t __loc)
     __THROW __attribute_pure__ __nonnull ((1, 2, 4));
#endif
# 137 "/usr/include/strings.h" 3 4

__END_DECLS

#if __GNUC_PREREQ (3,4) && __USE_FORTIFY_LEVEL > 0 \
    && defined __fortify_function
/* Functions with security checks.  */
# if defined __USE_MISC || !defined __USE_XOPEN2K8
#if 0 /* expanded by -frewrite-includes */
#  include <bits/strings_fortified.h>
#endif /* expanded by -frewrite-includes */
# 144 "/usr/include/strings.h" 3 4
# 145 "/usr/include/strings.h" 3 4
# endif
# 146 "/usr/include/strings.h" 3 4
#endif
# 147 "/usr/include/strings.h" 3 4

#endif	/* strings.h  */
# 149 "/usr/include/strings.h" 3 4
# 432 "/usr/include/string.h" 2 3 4

/* Set N bytes of S to 0.  The compiler will not delete a call to this
   function, even if S is dead after the call.  */
extern void explicit_bzero (void *__s, size_t __n) __THROW __nonnull ((1));

/* Return the next DELIM-delimited token from *STRINGP,
   terminating it with a '\0', and update *STRINGP to point past it.  */
extern char *strsep (char **__restrict __stringp,
		     const char *__restrict __delim)
     __THROW __nonnull ((1, 2));
#endif
# 443 "/usr/include/string.h" 3 4

#ifdef	__USE_XOPEN2K8
/* Return a string describing the meaning of the signal number in SIG.  */
extern char *strsignal (int __sig) __THROW;

/* Copy SRC to DEST, returning the address of the terminating '\0' in DEST.  */
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __THROW __nonnull ((1, 2));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __THROW __nonnull ((1, 2));

/* Copy no more than N characters of SRC to DEST, returning the address of
   the last character written into DEST.  */
extern char *__stpncpy (char *__restrict __dest,
			const char *__restrict __src, size_t __n)
     __THROW __nonnull ((1, 2));
extern char *stpncpy (char *__restrict __dest,
		      const char *__restrict __src, size_t __n)
     __THROW __nonnull ((1, 2));
#endif
# 463 "/usr/include/string.h" 3 4

#ifdef	__USE_GNU
/* Compare S1 and S2 as strings holding name & indices/version numbers.  */
extern int strverscmp (const char *__s1, const char *__s2)
     __THROW __attribute_pure__ __nonnull ((1, 2));

/* Sautee STRING briskly.  */
extern char *strfry (char *__string) __THROW __nonnull ((1));

/* Frobnicate N bytes of S.  */
extern void *memfrob (void *__s, size_t __n) __THROW __nonnull ((1));

# ifndef basename
/* Return the file name within directory of FILENAME.  We don't
   declare the function if the `basename' macro is available (defined
   in <libgen.h>) which makes the XPG version of this function
   available.  */
#  ifdef __CORRECT_ISO_CPP_STRING_H_PROTO
extern "C++" char *basename (char *__filename)
     __THROW __asm ("basename") __nonnull ((1));
extern "C++" const char *basename (const char *__filename)
     __THROW __asm ("basename") __nonnull ((1));
#  else
# 486 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __THROW __nonnull ((1));
#  endif
# 488 "/usr/include/string.h" 3 4
# endif
# 489 "/usr/include/string.h" 3 4
#endif
# 490 "/usr/include/string.h" 3 4

#if __GNUC_PREREQ (3,4)
# if __USE_FORTIFY_LEVEL > 0 && defined __fortify_function
/* Functions with security checks.  */
#if 0 /* expanded by -frewrite-includes */
#  include <bits/string_fortified.h>
#endif /* expanded by -frewrite-includes */
# 494 "/usr/include/string.h" 3 4
# 495 "/usr/include/string.h" 3 4
# endif
# 496 "/usr/include/string.h" 3 4
#endif
# 497 "/usr/include/string.h" 3 4

__END_DECLS

#endif /* string.h  */
# 501 "/usr/include/string.h" 3 4
# 32 "tests.c" 2
#if 0 /* expanded by -frewrite-includes */
#include <math.h>
#endif /* expanded by -frewrite-includes */
# 32 "tests.c"
# 1 "/usr/include/math.h" 1 3 4
/* Declarations for math functions.
   Copyright (C) 1991-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.12 Mathematics	<math.h>
 */

#ifndef	_MATH_H
#define	_MATH_H	1

#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#if 0 /* expanded by -frewrite-includes */
#include <bits/libc-header-start.h>
#endif /* expanded by -frewrite-includes */
# 27 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */

#ifndef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
# error "Never include <bits/libc-header-start.h> directly."
#endif
# 30 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

#undef __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION

#if 0 /* expanded by -frewrite-includes */
#include <features.h>
#endif /* expanded by -frewrite-includes */
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
#undef __GLIBC_USE_LIB_EXT2
#if (defined __USE_GNU							\
     || (defined __STDC_WANT_LIB_EXT2__ && __STDC_WANT_LIB_EXT2__ > 0))
# define __GLIBC_USE_LIB_EXT2 1
#else
# 42 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_LIB_EXT2 0
#endif
# 44 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  */
#undef __GLIBC_USE_IEC_60559_BFP_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_BFP_EXT__
# define __GLIBC_USE_IEC_60559_BFP_EXT 1
#else
# 51 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_BFP_EXT 0
#endif
# 53 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_FUNCS_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 1
#else
# 60 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_FUNCS_EXT 0
#endif
# 62 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4

/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
#undef __GLIBC_USE_IEC_60559_TYPES_EXT
#if defined __USE_GNU || defined __STDC_WANT_IEC_60559_TYPES_EXT__
# define __GLIBC_USE_IEC_60559_TYPES_EXT 1
#else
# 69 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# define __GLIBC_USE_IEC_60559_TYPES_EXT 0
#endif
# 71 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 28 "/usr/include/math.h" 2 3 4

#if defined log && defined __GNUC__
# warning A macro called log was already defined when <math.h> was included.
# warning This will cause compilation problems.
#endif
# 33 "/usr/include/math.h" 3 4

__BEGIN_DECLS

/* Get definitions of __intmax_t and __uintmax_t.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/types.h>
#endif /* expanded by -frewrite-includes */
# 37 "/usr/include/math.h" 3 4
# 38 "/usr/include/math.h" 3 4

/* Get machine-dependent vector math functions declarations.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/math-vector.h>
#endif /* expanded by -frewrite-includes */
# 40 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
/* Platform-specific SIMD declarations of math functions.
   Copyright (C) 2014-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never include <bits/math-vector.h> directly;\
 include <math.h> instead."
#endif
# 23 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4

/* Get default empty definitions for simd declarations.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/libm-simd-decl-stubs.h>
#endif /* expanded by -frewrite-includes */
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
/* Empty definitions required for __MATHCALL_VEC unfolding in mathcalls.h.
   Copyright (C) 2014-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never include <bits/libm-simd-decl-stubs.h> directly;\
 include <math.h> instead."
#endif
# 23 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 3 4

/* Needed definitions could be generated with:
   for func in $(grep __MATHCALL_VEC math/bits/mathcalls.h |\
		 sed -r "s|__MATHCALL_VEC.?\(||; s|,.*||"); do
     echo "#define __DECL_SIMD_${func}";
     echo "#define __DECL_SIMD_${func}f";
     echo "#define __DECL_SIMD_${func}l";
   done
 */

#ifndef _BITS_LIBM_SIMD_DECL_STUBS_H
#define _BITS_LIBM_SIMD_DECL_STUBS_H 1

#define __DECL_SIMD_cos
#define __DECL_SIMD_cosf
#define __DECL_SIMD_cosl
#define __DECL_SIMD_cosf16
#define __DECL_SIMD_cosf32
#define __DECL_SIMD_cosf64
#define __DECL_SIMD_cosf128
#define __DECL_SIMD_cosf32x
#define __DECL_SIMD_cosf64x
#define __DECL_SIMD_cosf128x

#define __DECL_SIMD_sin
#define __DECL_SIMD_sinf
#define __DECL_SIMD_sinl
#define __DECL_SIMD_sinf16
#define __DECL_SIMD_sinf32
#define __DECL_SIMD_sinf64
#define __DECL_SIMD_sinf128
#define __DECL_SIMD_sinf32x
#define __DECL_SIMD_sinf64x
#define __DECL_SIMD_sinf128x

#define __DECL_SIMD_sincos
#define __DECL_SIMD_sincosf
#define __DECL_SIMD_sincosl
#define __DECL_SIMD_sincosf16
#define __DECL_SIMD_sincosf32
#define __DECL_SIMD_sincosf64
#define __DECL_SIMD_sincosf128
#define __DECL_SIMD_sincosf32x
#define __DECL_SIMD_sincosf64x
#define __DECL_SIMD_sincosf128x

#define __DECL_SIMD_log
#define __DECL_SIMD_logf
#define __DECL_SIMD_logl
#define __DECL_SIMD_logf16
#define __DECL_SIMD_logf32
#define __DECL_SIMD_logf64
#define __DECL_SIMD_logf128
#define __DECL_SIMD_logf32x
#define __DECL_SIMD_logf64x
#define __DECL_SIMD_logf128x

#define __DECL_SIMD_exp
#define __DECL_SIMD_expf
#define __DECL_SIMD_expl
#define __DECL_SIMD_expf16
#define __DECL_SIMD_expf32
#define __DECL_SIMD_expf64
#define __DECL_SIMD_expf128
#define __DECL_SIMD_expf32x
#define __DECL_SIMD_expf64x
#define __DECL_SIMD_expf128x

#define __DECL_SIMD_pow
#define __DECL_SIMD_powf
#define __DECL_SIMD_powl
#define __DECL_SIMD_powf16
#define __DECL_SIMD_powf32
#define __DECL_SIMD_powf64
#define __DECL_SIMD_powf128
#define __DECL_SIMD_powf32x
#define __DECL_SIMD_powf64x
#define __DECL_SIMD_powf128x
#endif
# 102 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4

#if defined __x86_64__ && defined __FAST_MATH__
# if defined _OPENMP && _OPENMP >= 201307
/* OpenMP case.  */
#  define __DECL_SIMD_x86_64 _Pragma ("omp declare simd notinbranch")
# elif __GNUC_PREREQ (6,0)
# 32 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
/* W/o OpenMP use GCC 6.* __attribute__ ((__simd__)).  */
#  define __DECL_SIMD_x86_64 __attribute__ ((__simd__ ("notinbranch")))
# endif
# 35 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4

# ifdef __DECL_SIMD_x86_64
#  undef __DECL_SIMD_cos
#  define __DECL_SIMD_cos __DECL_SIMD_x86_64
#  undef __DECL_SIMD_cosf
#  define __DECL_SIMD_cosf __DECL_SIMD_x86_64
#  undef __DECL_SIMD_sin
#  define __DECL_SIMD_sin __DECL_SIMD_x86_64
#  undef __DECL_SIMD_sinf
#  define __DECL_SIMD_sinf __DECL_SIMD_x86_64
#  undef __DECL_SIMD_sincos
#  define __DECL_SIMD_sincos __DECL_SIMD_x86_64
#  undef __DECL_SIMD_sincosf
#  define __DECL_SIMD_sincosf __DECL_SIMD_x86_64
#  undef __DECL_SIMD_log
#  define __DECL_SIMD_log __DECL_SIMD_x86_64
#  undef __DECL_SIMD_logf
#  define __DECL_SIMD_logf __DECL_SIMD_x86_64
#  undef __DECL_SIMD_exp
#  define __DECL_SIMD_exp __DECL_SIMD_x86_64
#  undef __DECL_SIMD_expf
#  define __DECL_SIMD_expf __DECL_SIMD_x86_64
#  undef __DECL_SIMD_pow
#  define __DECL_SIMD_pow __DECL_SIMD_x86_64
#  undef __DECL_SIMD_powf
#  define __DECL_SIMD_powf __DECL_SIMD_x86_64

# endif
# 63 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
#endif
# 64 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 41 "/usr/include/math.h" 2 3 4

/* Gather machine dependent type support.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/floatn.h>
#endif /* expanded by -frewrite-includes */
# 43 "/usr/include/math.h" 3 4
# 44 "/usr/include/math.h" 3 4

/* Value returned on overflow.  With IEEE 754 floating point, this is
   +Infinity, otherwise the largest representable positive value.  */
#if __GNUC_PREREQ (3, 3)
# define HUGE_VAL (__builtin_huge_val ())
#else
# 50 "/usr/include/math.h" 3 4
/* This may provoke compiler warnings, and may not be rounded to
   +Infinity in all IEEE 754 rounding modes, but is the best that can
   be done in ISO C while remaining a constant expression.  10,000 is
   greater than the maximum (decimal) exponent for all supported
   floating-point formats and widths.  */
# define HUGE_VAL 1e10000
#endif
# 57 "/usr/include/math.h" 3 4
#ifdef __USE_ISOC99
# if __GNUC_PREREQ (3, 3)
#  define HUGE_VALF (__builtin_huge_valf ())
#  define HUGE_VALL (__builtin_huge_vall ())
# else
# 62 "/usr/include/math.h" 3 4
#  define HUGE_VALF 1e10000f
#  define HUGE_VALL 1e10000L
# endif
# 65 "/usr/include/math.h" 3 4
#endif
# 66 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define HUGE_VAL_F16 (__builtin_huge_valf16 ())
#endif
# 69 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define HUGE_VAL_F32 (__builtin_huge_valf32 ())
#endif
# 72 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define HUGE_VAL_F64 (__builtin_huge_valf64 ())
#endif
# 75 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define HUGE_VAL_F128 (__builtin_huge_valf128 ())
#endif
# 78 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define HUGE_VAL_F32X (__builtin_huge_valf32x ())
#endif
# 81 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define HUGE_VAL_F64X (__builtin_huge_valf64x ())
#endif
# 84 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define HUGE_VAL_F128X (__builtin_huge_valf128x ())
#endif
# 87 "/usr/include/math.h" 3 4

#ifdef __USE_ISOC99
/* IEEE positive infinity.  */
# if __GNUC_PREREQ (3, 3)
#  define INFINITY (__builtin_inff ())
# else
# 93 "/usr/include/math.h" 3 4
#  define INFINITY HUGE_VALF
# endif
# 95 "/usr/include/math.h" 3 4

/* IEEE Not A Number.  */
# if __GNUC_PREREQ (3, 3)
#  define NAN (__builtin_nanf (""))
# else
# 100 "/usr/include/math.h" 3 4
/* This will raise an "invalid" exception outside static initializers,
   but is the best that can be done in ISO C while remaining a
   constant expression.  */
#  define NAN (0.0f / 0.0f)
# endif
# 105 "/usr/include/math.h" 3 4
#endif /* __USE_ISOC99 */
# 106 "/usr/include/math.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT)
/* Signaling NaN macros, if supported.  */
# if __GNUC_PREREQ (3, 3)
#  define SNANF (__builtin_nansf (""))
#  define SNAN (__builtin_nans (""))
#  define SNANL (__builtin_nansl (""))
# endif
# 114 "/usr/include/math.h" 3 4
#endif
# 115 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT16 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define SNANF16 (__builtin_nansf16 (""))
#endif
# 118 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT32 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define SNANF32 (__builtin_nansf32 (""))
#endif
# 121 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT64 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define SNANF64 (__builtin_nansf64 (""))
#endif
# 124 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT128 && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define SNANF128 (__builtin_nansf128 (""))
#endif
# 127 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT32X && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define SNANF32X (__builtin_nansf32x (""))
#endif
# 130 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT64X && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define SNANF64X (__builtin_nansf64x (""))
#endif
# 133 "/usr/include/math.h" 3 4
#if __HAVE_FLOAT128X && __GLIBC_USE (IEC_60559_TYPES_EXT)
# define SNANF128X (__builtin_nansf128x (""))
#endif
# 136 "/usr/include/math.h" 3 4

/* Get __GLIBC_FLT_EVAL_METHOD.  */
#if 0 /* expanded by -frewrite-includes */
#include <bits/flt-eval-method.h>
#endif /* expanded by -frewrite-includes */
# 138 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 1 3 4
/* Define __GLIBC_FLT_EVAL_METHOD.  x86 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/flt-eval-method.h> directly; include <math.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 3 4

#ifdef __FLT_EVAL_METHOD__
# if __FLT_EVAL_METHOD__ == -1
#  define __GLIBC_FLT_EVAL_METHOD	2
# else
# 27 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 3 4
#  define __GLIBC_FLT_EVAL_METHOD	__FLT_EVAL_METHOD__
# endif
# 29 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 3 4
#elif defined __x86_64__
# 30 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 3 4
# define __GLIBC_FLT_EVAL_METHOD	0
#else
# 32 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 3 4
# define __GLIBC_FLT_EVAL_METHOD	2
#endif
# 34 "/usr/include/x86_64-linux-gnu/bits/flt-eval-method.h" 3 4
# 139 "/usr/include/math.h" 2 3 4

#ifdef __USE_ISOC99
/* Define the following typedefs.

    float_t	floating-point type at least as wide as `float' used
		to evaluate `float' expressions
    double_t	floating-point type at least as wide as `double' used
		to evaluate `double' expressions
*/
# if __GLIBC_FLT_EVAL_METHOD == 0 || __GLIBC_FLT_EVAL_METHOD == 16
typedef float float_t;
typedef double double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 1
# 152 "/usr/include/math.h" 3 4
typedef double float_t;
typedef double double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 2
# 155 "/usr/include/math.h" 3 4
typedef long double float_t;
typedef long double double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 32
# 158 "/usr/include/math.h" 3 4
typedef _Float32 float_t;
typedef double double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 33
# 161 "/usr/include/math.h" 3 4
typedef _Float32x float_t;
typedef _Float32x double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 64
# 164 "/usr/include/math.h" 3 4
typedef _Float64 float_t;
typedef _Float64 double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 65
# 167 "/usr/include/math.h" 3 4
typedef _Float64x float_t;
typedef _Float64x double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 128
# 170 "/usr/include/math.h" 3 4
typedef _Float128 float_t;
typedef _Float128 double_t;
# elif __GLIBC_FLT_EVAL_METHOD == 129
# 173 "/usr/include/math.h" 3 4
typedef _Float128x float_t;
typedef _Float128x double_t;
# else
# 176 "/usr/include/math.h" 3 4
#  error "Unknown __GLIBC_FLT_EVAL_METHOD"
# endif
# 178 "/usr/include/math.h" 3 4
#endif
# 179 "/usr/include/math.h" 3 4

/* Define macros for the return values of ilogb and llogb, based on
   __FP_LOGB0_IS_MIN and __FP_LOGBNAN_IS_MIN.

    FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
    FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.
    FP_LLOGB0	Expands to a value returned by `llogb (0.0)'.
    FP_LLOGBNAN	Expands to a value returned by `llogb (NAN)'.

*/

#if 0 /* expanded by -frewrite-includes */
#include <bits/fp-logb.h>
#endif /* expanded by -frewrite-includes */
# 190 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-logb.h" 1 3 4
/* Define __FP_LOGB0_IS_MIN and __FP_LOGBNAN_IS_MIN.  x86 version.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/fp-logb.h> directly; include <math.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/fp-logb.h" 3 4

#define __FP_LOGB0_IS_MIN	1
#define __FP_LOGBNAN_IS_MIN	1
# 191 "/usr/include/math.h" 2 3 4
#ifdef __USE_ISOC99
# if __FP_LOGB0_IS_MIN
#  define FP_ILOGB0	(-2147483647 - 1)
# else
# 195 "/usr/include/math.h" 3 4
#  define FP_ILOGB0	(-2147483647)
# endif
# 197 "/usr/include/math.h" 3 4
# if __FP_LOGBNAN_IS_MIN
#  define FP_ILOGBNAN	(-2147483647 - 1)
# else
# 200 "/usr/include/math.h" 3 4
#  define FP_ILOGBNAN	2147483647
# endif
# 202 "/usr/include/math.h" 3 4
#endif
# 203 "/usr/include/math.h" 3 4
#if __GLIBC_USE (IEC_60559_BFP_EXT)
# if __WORDSIZE == 32
#  define __FP_LONG_MAX 0x7fffffffL
# else
# 207 "/usr/include/math.h" 3 4
#  define __FP_LONG_MAX 0x7fffffffffffffffL
# endif
# 209 "/usr/include/math.h" 3 4
# if __FP_LOGB0_IS_MIN
#  define FP_LLOGB0	(-__FP_LONG_MAX - 1)
# else
# 212 "/usr/include/math.h" 3 4
#  define FP_LLOGB0	(-__FP_LONG_MAX)
# endif
# 214 "/usr/include/math.h" 3 4
# if __FP_LOGBNAN_IS_MIN
#  define FP_LLOGBNAN	(-__FP_LONG_MAX - 1)
# else
# 217 "/usr/include/math.h" 3 4
#  define FP_LLOGBNAN	__FP_LONG_MAX
# endif
# 219 "/usr/include/math.h" 3 4
#endif
# 220 "/usr/include/math.h" 3 4

/* Get the architecture specific values describing the floating-point
   evaluation.  The following symbols will get defined:

    FP_FAST_FMA
    FP_FAST_FMAF
    FP_FAST_FMAL
		If defined it indicates that the `fma' function
		generally executes about as fast as a multiply and an add.
		This macro is defined only iff the `fma' function is
		implemented directly with a hardware multiply-add instructions.
*/

#if 0 /* expanded by -frewrite-includes */
#include <bits/fp-fast.h>
#endif /* expanded by -frewrite-includes */
# 233 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 1 3 4
/* Define FP_FAST_* macros.
   Copyright (C) 2016-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _MATH_H
# error "Never use <bits/fp-fast.h> directly; include <math.h> instead."
#endif
# 22 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 3 4

#ifdef __USE_ISOC99

/* The GCC 4.6 compiler will define __FP_FAST_FMA{,F,L} if the fma{,f,l}
   builtins are supported.  */
# ifdef __FP_FAST_FMA
#  define FP_FAST_FMA 1
# endif
# 30 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 3 4

# ifdef __FP_FAST_FMAF
#  define FP_FAST_FMAF 1
# endif
# 34 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 3 4

# ifdef __FP_FAST_FMAL
#  define FP_FAST_FMAL 1
# endif
# 38 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 3 4

#endif
# 40 "/usr/include/x86_64-linux-gnu/bits/fp-fast.h" 3 4
# 234 "/usr/include/math.h" 2 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT)
/* Rounding direction macros for fromfp functions.  */
enum
  {
    FP_INT_UPWARD =
# define FP_INT_UPWARD 0
      FP_INT_UPWARD,
    FP_INT_DOWNWARD =
# define FP_INT_DOWNWARD 1
      FP_INT_DOWNWARD,
    FP_INT_TOWARDZERO =
# define FP_INT_TOWARDZERO 2
      FP_INT_TOWARDZERO,
    FP_INT_TONEARESTFROMZERO =
# define FP_INT_TONEARESTFROMZERO 3
      FP_INT_TONEARESTFROMZERO,
    FP_INT_TONEAREST =
# define FP_INT_TONEAREST 4
      FP_INT_TONEAREST,
  };
#endif
# 256 "/usr/include/math.h" 3 4

/* The file <bits/mathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */

#define __SIMD_DECL(function) __CONCAT (__DECL_SIMD_, function)

#define __MATHCALL_VEC(function, suffix, args) 	\
  __SIMD_DECL (__MATH_PRECNAME (function, suffix)) \
  __MATHCALL (function, suffix, args)

#define __MATHDECL_VEC(type, function,suffix, args) \
  __SIMD_DECL (__MATH_PRECNAME (function, suffix)) \
  __MATHDECL(type, function,suffix, args)

#define __MATHCALL(function,suffix, args)	\
  __MATHDECL (_Mdouble_,function,suffix, args)
#define __MATHDECL(type, function,suffix, args) \
  __MATHDECL_1(type, function,suffix, args); \
  __MATHDECL_1(type, __CONCAT(__,function),suffix, args)
#define __MATHCALLX(function,suffix, args, attrib)	\
  __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define __MATHDECLX(type, function,suffix, args, attrib) \
  __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); \
  __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define __MATHDECL_1(type, function,suffix, args) \
  extern type __MATH_PRECNAME(function,suffix) args __THROW

#define _Mdouble_		double
#define __MATH_PRECNAME(name,r)	__CONCAT(name,r)
#define __MATH_DECLARING_DOUBLE  1
#define __MATH_DECLARING_FLOATN  0
#if 0 /* expanded by -frewrite-includes */
#include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 289 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */


/* Classify given number.  */
__MATHDECL_1 (int, __fpclassify,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Test for negative number.  */
__MATHDECL_1 (int, __signbit,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int, __isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
__MATHDECL_1 (int, __finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int, __isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Test equality.  */
__MATHDECL_1 (int, __iseqsig,, (_Mdouble_ __x, _Mdouble_ __y));

/* Test for signaling NaN.  */
__MATHDECL_1 (int, __issignaling,, (_Mdouble_ __value))
     __attribute__ ((__const__));
# 290 "/usr/include/math.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 290 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */

#ifndef _MATH_H
# error "Never include <bits/mathcalls.h> directly; include <math.h> instead."
#endif
# 48 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Trigonometric functions.  */

/* Arc cosine of X.  */
__MATHCALL (acos,, (_Mdouble_ __x));
/* Arc sine of X.  */
__MATHCALL (asin,, (_Mdouble_ __x));
/* Arc tangent of X.  */
__MATHCALL (atan,, (_Mdouble_ __x));
/* Arc tangent of Y/X.  */
__MATHCALL (atan2,, (_Mdouble_ __y, _Mdouble_ __x));

/* Cosine of X.  */
__MATHCALL_VEC (cos,, (_Mdouble_ __x));
/* Sine of X.  */
__MATHCALL_VEC (sin,, (_Mdouble_ __x));
/* Tangent of X.  */
__MATHCALL (tan,, (_Mdouble_ __x));

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
__MATHCALL (cosh,, (_Mdouble_ __x));
/* Hyperbolic sine of X.  */
__MATHCALL (sinh,, (_Mdouble_ __x));
/* Hyperbolic tangent of X.  */
__MATHCALL (tanh,, (_Mdouble_ __x));

#ifdef __USE_GNU
/* Cosine and sine of X.  */
__MATHDECL_VEC (void,sincos,,
		(_Mdouble_ __x, _Mdouble_ *__sinx, _Mdouble_ *__cosx));
#endif
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Hyperbolic arc cosine of X.  */
__MATHCALL (acosh,, (_Mdouble_ __x));
/* Hyperbolic arc sine of X.  */
__MATHCALL (asinh,, (_Mdouble_ __x));
/* Hyperbolic arc tangent of X.  */
__MATHCALL (atanh,, (_Mdouble_ __x));
#endif
# 91 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Exponential and logarithmic functions.  */

/* Exponential function of X.  */
__MATHCALL_VEC (exp,, (_Mdouble_ __x));

/* Break VALUE into a normalized fraction and an integral power of 2.  */
__MATHCALL (frexp,, (_Mdouble_ __x, int *__exponent));

/* X times (two to the EXP power).  */
__MATHCALL (ldexp,, (_Mdouble_ __x, int __exponent));

/* Natural logarithm of X.  */
__MATHCALL_VEC (log,, (_Mdouble_ __x));

/* Base-ten logarithm of X.  */
__MATHCALL (log10,, (_Mdouble_ __x));

/* Break VALUE into integral and fractional parts.  */
__MATHCALL (modf,, (_Mdouble_ __x, _Mdouble_ *__iptr)) __nonnull ((2));

#if __GLIBC_USE (IEC_60559_FUNCS_EXT)
/* Compute exponent to base ten.  */
__MATHCALL (exp10,, (_Mdouble_ __x));
#endif
# 116 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return exp(X) - 1.  */
__MATHCALL (expm1,, (_Mdouble_ __x));

/* Return log(1 + X).  */
__MATHCALL (log1p,, (_Mdouble_ __x));

/* Return the base 2 signed integral exponent of X.  */
__MATHCALL (logb,, (_Mdouble_ __x));
#endif
# 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Compute base-2 exponential of X.  */
__MATHCALL (exp2,, (_Mdouble_ __x));

/* Compute base-2 logarithm of X.  */
__MATHCALL (log2,, (_Mdouble_ __x));
#endif
# 135 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Power functions.  */

/* Return X to the Y power.  */
__MATHCALL_VEC (pow,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return the square root of X.  */
__MATHCALL (sqrt,, (_Mdouble_ __x));

#if defined __USE_XOPEN || defined __USE_ISOC99
/* Return `sqrt(X*X + Y*Y)'.  */
__MATHCALL (hypot,, (_Mdouble_ __x, _Mdouble_ __y));
#endif
# 149 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return the cube root of X.  */
__MATHCALL (cbrt,, (_Mdouble_ __x));
#endif
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Nearest integer, absolute value, and remainder functions.  */

/* Smallest integral value not less than X.  */
__MATHCALLX (ceil,, (_Mdouble_ __x), (__const__));

/* Absolute value of X.  */
__MATHCALLX (fabs,, (_Mdouble_ __x), (__const__));

/* Largest integer not greater than X.  */
__MATHCALLX (floor,, (_Mdouble_ __x), (__const__));

/* Floating-point modulo remainder of X/Y.  */
__MATHCALL (fmod,, (_Mdouble_ __x, _Mdouble_ __y));

#ifdef __USE_MISC
# if ((!defined __cplusplus \
       || __cplusplus < 201103L /* isinf conflicts with C++11.  */ \
       || __MATH_DECLARING_DOUBLE == 0)) /* isinff or isinfl don't.  */ \
      && !__MATH_DECLARING_FLOATN
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));
# endif
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

# if !__MATH_DECLARING_FLOATN
/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
__MATHCALL (drem,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
__MATHCALL (significand,, (_Mdouble_ __x));
# endif
# 191 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#endif /* Use misc.  */
# 193 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X with its signed changed to Y's.  */
__MATHCALLX (copysign,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
#endif
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return representation of qNaN for double type.  */
__MATHCALLX (nan,, (const char *__tagb), (__const__));
#endif
# 203 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
# if ((!defined __cplusplus \
       || __cplusplus < 201103L /* isnan conflicts with C++11.  */ \
       || __MATH_DECLARING_DOUBLE == 0)) /* isnanf or isnanl don't.  */ \
      && !__MATH_DECLARING_FLOATN
/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));
# endif
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#endif
# 214 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || (defined __USE_XOPEN && __MATH_DECLARING_DOUBLE)
/* Bessel functions.  */
__MATHCALL (j0,, (_Mdouble_));
__MATHCALL (j1,, (_Mdouble_));
__MATHCALL (jn,, (int, _Mdouble_));
__MATHCALL (y0,, (_Mdouble_));
__MATHCALL (y1,, (_Mdouble_));
__MATHCALL (yn,, (int, _Mdouble_));
#endif
# 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_XOPEN || defined __USE_ISOC99
/* Error and gamma functions.  */
__MATHCALL (erf,, (_Mdouble_));
__MATHCALL (erfc,, (_Mdouble_));
__MATHCALL (lgamma,, (_Mdouble_));
#endif
# 232 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* True gamma function.  */
__MATHCALL (tgamma,, (_Mdouble_));
#endif
# 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
# if !__MATH_DECLARING_FLOATN
/* Obsolete alias for `lgamma'.  */
__MATHCALL (gamma,, (_Mdouble_));
# endif
# 243 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#endif
# 244 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_MISC
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
__MATHCALL (lgamma,_r, (_Mdouble_, int *__signgamp));
#endif
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
__MATHCALL (rint,, (_Mdouble_ __x));

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
__MATHCALL (nextafter,, (_Mdouble_ __x, _Mdouble_ __y));
# if defined __USE_ISOC99 && !defined __LDBL_COMPAT && !__MATH_DECLARING_FLOATN
__MATHCALL (nexttoward,, (_Mdouble_ __x, long double __y));
# endif
# 263 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

# if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Return X - epsilon.  */
__MATHCALL (nextdown,, (_Mdouble_ __x));
/* Return X + epsilon.  */
__MATHCALL (nextup,, (_Mdouble_ __x));
# endif
# 270 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the remainder of integer divison X / Y with infinite precision.  */
__MATHCALL (remainder,, (_Mdouble_ __x, _Mdouble_ __y));

# ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbn,, (_Mdouble_ __x, int __n));
# endif
# 278 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the binary exponent of X, which must be nonzero.  */
__MATHDECL (int,ilogb,, (_Mdouble_ __x));
#endif
# 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Like ilogb, but returning long int.  */
__MATHDECL (long int, llogb,, (_Mdouble_ __x));
#endif
# 287 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbln,, (_Mdouble_ __x, long int __n));

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
__MATHCALL (nearbyint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHCALLX (round,, (_Mdouble_ __x), (__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
__MATHCALLX (trunc,, (_Mdouble_ __x), (__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
__MATHCALL (remquo,, (_Mdouble_ __x, _Mdouble_ __y, int *__quo));


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
__MATHDECL (long int,lrint,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llrint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHDECL (long int,lround,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llround,, (_Mdouble_ __x));


/* Return positive difference between X and Y.  */
__MATHCALL (fdim,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return maximum numeric value from X and Y.  */
__MATHCALLX (fmax,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return minimum numeric value from X and Y.  */
__MATHCALLX (fmin,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Multiply-add function computed as a ternary operation.  */
__MATHCALL (fma,, (_Mdouble_ __x, _Mdouble_ __y, _Mdouble_ __z));
#endif /* Use ISO C99.  */
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Round X to nearest integer value, rounding halfway cases to even.  */
__MATHCALLX (roundeven,, (_Mdouble_ __x), (__const__));

/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
__MATHDECL (__intmax_t, fromfp,, (_Mdouble_ __x, int __round,
				  unsigned int __width));

/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
__MATHDECL (__uintmax_t, ufromfp,, (_Mdouble_ __x, int __round,
				    unsigned int __width));

/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
__MATHDECL (__intmax_t, fromfpx,, (_Mdouble_ __x, int __round,
				   unsigned int __width));

/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
__MATHDECL (__uintmax_t, ufromfpx,, (_Mdouble_ __x, int __round,
				     unsigned int __width));

/* Return value with maximum magnitude.  */
__MATHCALLX (fmaxmag,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return value with minimum magnitude.  */
__MATHCALLX (fminmag,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Total order operation.  */
__MATHDECL_1 (int, totalorder,, (_Mdouble_ __x, _Mdouble_ __y))
     __attribute__ ((__const__));

/* Total order operation on absolute values.  */
__MATHDECL_1 (int, totalordermag,, (_Mdouble_ __x, _Mdouble_ __y))
     __attribute__ ((__const__));

/* Canonicalize floating-point representation.  */
__MATHDECL_1 (int, canonicalize,, (_Mdouble_ *__cx, const _Mdouble_ *__x));

/* Get NaN payload.  */
__MATHCALL (getpayload,, (const _Mdouble_ *__x));

/* Set quiet NaN payload.  */
__MATHDECL_1 (int, setpayload,, (_Mdouble_ *__x, _Mdouble_ __payload));

/* Set signaling NaN payload.  */
__MATHDECL_1 (int, setpayloadsig,, (_Mdouble_ *__x, _Mdouble_ __payload));
#endif
# 390 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if (defined __USE_MISC || (defined __USE_XOPEN_EXTENDED \
			    && __MATH_DECLARING_DOUBLE	  \
			    && !defined __USE_XOPEN2K8))  \
     && !__MATH_DECLARING_FLOATN
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalb,, (_Mdouble_ __x, _Mdouble_ __n));
#endif
# 398 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 291 "/usr/include/math.h" 2 3 4
#undef	_Mdouble_
#undef	__MATH_PRECNAME
#undef __MATH_DECLARING_DOUBLE
#undef __MATH_DECLARING_FLOATN

#ifdef __USE_ISOC99


/* Include the file of declarations again, this time using `float'
   instead of `double' and appending f to each function name.  */

# define _Mdouble_		float
# define __MATH_PRECNAME(name,r) name##f##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  0
#if 0 /* expanded by -frewrite-includes */
# include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 306 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */


/* Classify given number.  */
__MATHDECL_1 (int, __fpclassify,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Test for negative number.  */
__MATHDECL_1 (int, __signbit,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int, __isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
__MATHDECL_1 (int, __finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int, __isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Test equality.  */
__MATHDECL_1 (int, __iseqsig,, (_Mdouble_ __x, _Mdouble_ __y));

/* Test for signaling NaN.  */
__MATHDECL_1 (int, __issignaling,, (_Mdouble_ __value))
     __attribute__ ((__const__));
# 307 "/usr/include/math.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
# include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 307 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */

#ifndef _MATH_H
# error "Never include <bits/mathcalls.h> directly; include <math.h> instead."
#endif
# 48 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Trigonometric functions.  */

/* Arc cosine of X.  */
__MATHCALL (acos,, (_Mdouble_ __x));
/* Arc sine of X.  */
__MATHCALL (asin,, (_Mdouble_ __x));
/* Arc tangent of X.  */
__MATHCALL (atan,, (_Mdouble_ __x));
/* Arc tangent of Y/X.  */
__MATHCALL (atan2,, (_Mdouble_ __y, _Mdouble_ __x));

/* Cosine of X.  */
__MATHCALL_VEC (cos,, (_Mdouble_ __x));
/* Sine of X.  */
__MATHCALL_VEC (sin,, (_Mdouble_ __x));
/* Tangent of X.  */
__MATHCALL (tan,, (_Mdouble_ __x));

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
__MATHCALL (cosh,, (_Mdouble_ __x));
/* Hyperbolic sine of X.  */
__MATHCALL (sinh,, (_Mdouble_ __x));
/* Hyperbolic tangent of X.  */
__MATHCALL (tanh,, (_Mdouble_ __x));

#ifdef __USE_GNU
/* Cosine and sine of X.  */
__MATHDECL_VEC (void,sincos,,
		(_Mdouble_ __x, _Mdouble_ *__sinx, _Mdouble_ *__cosx));
#endif
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Hyperbolic arc cosine of X.  */
__MATHCALL (acosh,, (_Mdouble_ __x));
/* Hyperbolic arc sine of X.  */
__MATHCALL (asinh,, (_Mdouble_ __x));
/* Hyperbolic arc tangent of X.  */
__MATHCALL (atanh,, (_Mdouble_ __x));
#endif
# 91 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Exponential and logarithmic functions.  */

/* Exponential function of X.  */
__MATHCALL_VEC (exp,, (_Mdouble_ __x));

/* Break VALUE into a normalized fraction and an integral power of 2.  */
__MATHCALL (frexp,, (_Mdouble_ __x, int *__exponent));

/* X times (two to the EXP power).  */
__MATHCALL (ldexp,, (_Mdouble_ __x, int __exponent));

/* Natural logarithm of X.  */
__MATHCALL_VEC (log,, (_Mdouble_ __x));

/* Base-ten logarithm of X.  */
__MATHCALL (log10,, (_Mdouble_ __x));

/* Break VALUE into integral and fractional parts.  */
__MATHCALL (modf,, (_Mdouble_ __x, _Mdouble_ *__iptr)) __nonnull ((2));

#if __GLIBC_USE (IEC_60559_FUNCS_EXT)
/* Compute exponent to base ten.  */
__MATHCALL (exp10,, (_Mdouble_ __x));
#endif
# 116 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return exp(X) - 1.  */
__MATHCALL (expm1,, (_Mdouble_ __x));

/* Return log(1 + X).  */
__MATHCALL (log1p,, (_Mdouble_ __x));

/* Return the base 2 signed integral exponent of X.  */
__MATHCALL (logb,, (_Mdouble_ __x));
#endif
# 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Compute base-2 exponential of X.  */
__MATHCALL (exp2,, (_Mdouble_ __x));

/* Compute base-2 logarithm of X.  */
__MATHCALL (log2,, (_Mdouble_ __x));
#endif
# 135 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Power functions.  */

/* Return X to the Y power.  */
__MATHCALL_VEC (pow,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return the square root of X.  */
__MATHCALL (sqrt,, (_Mdouble_ __x));

#if defined __USE_XOPEN || defined __USE_ISOC99
/* Return `sqrt(X*X + Y*Y)'.  */
__MATHCALL (hypot,, (_Mdouble_ __x, _Mdouble_ __y));
#endif
# 149 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return the cube root of X.  */
__MATHCALL (cbrt,, (_Mdouble_ __x));
#endif
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Nearest integer, absolute value, and remainder functions.  */

/* Smallest integral value not less than X.  */
__MATHCALLX (ceil,, (_Mdouble_ __x), (__const__));

/* Absolute value of X.  */
__MATHCALLX (fabs,, (_Mdouble_ __x), (__const__));

/* Largest integer not greater than X.  */
__MATHCALLX (floor,, (_Mdouble_ __x), (__const__));

/* Floating-point modulo remainder of X/Y.  */
__MATHCALL (fmod,, (_Mdouble_ __x, _Mdouble_ __y));

#ifdef __USE_MISC
# if ((!defined __cplusplus \
       || __cplusplus < 201103L /* isinf conflicts with C++11.  */ \
       || __MATH_DECLARING_DOUBLE == 0)) /* isinff or isinfl don't.  */ \
      && !__MATH_DECLARING_FLOATN
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));
# endif
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

# if !__MATH_DECLARING_FLOATN
/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
__MATHCALL (drem,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
__MATHCALL (significand,, (_Mdouble_ __x));
# endif
# 191 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#endif /* Use misc.  */
# 193 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X with its signed changed to Y's.  */
__MATHCALLX (copysign,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
#endif
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return representation of qNaN for double type.  */
__MATHCALLX (nan,, (const char *__tagb), (__const__));
#endif
# 203 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
# if ((!defined __cplusplus \
       || __cplusplus < 201103L /* isnan conflicts with C++11.  */ \
       || __MATH_DECLARING_DOUBLE == 0)) /* isnanf or isnanl don't.  */ \
      && !__MATH_DECLARING_FLOATN
/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));
# endif
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#endif
# 214 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || (defined __USE_XOPEN && __MATH_DECLARING_DOUBLE)
/* Bessel functions.  */
__MATHCALL (j0,, (_Mdouble_));
__MATHCALL (j1,, (_Mdouble_));
__MATHCALL (jn,, (int, _Mdouble_));
__MATHCALL (y0,, (_Mdouble_));
__MATHCALL (y1,, (_Mdouble_));
__MATHCALL (yn,, (int, _Mdouble_));
#endif
# 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_XOPEN || defined __USE_ISOC99
/* Error and gamma functions.  */
__MATHCALL (erf,, (_Mdouble_));
__MATHCALL (erfc,, (_Mdouble_));
__MATHCALL (lgamma,, (_Mdouble_));
#endif
# 232 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* True gamma function.  */
__MATHCALL (tgamma,, (_Mdouble_));
#endif
# 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
# if !__MATH_DECLARING_FLOATN
/* Obsolete alias for `lgamma'.  */
__MATHCALL (gamma,, (_Mdouble_));
# endif
# 243 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#endif
# 244 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_MISC
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
__MATHCALL (lgamma,_r, (_Mdouble_, int *__signgamp));
#endif
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
__MATHCALL (rint,, (_Mdouble_ __x));

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
__MATHCALL (nextafter,, (_Mdouble_ __x, _Mdouble_ __y));
# if defined __USE_ISOC99 && !defined __LDBL_COMPAT && !__MATH_DECLARING_FLOATN
__MATHCALL (nexttoward,, (_Mdouble_ __x, long double __y));
# endif
# 263 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

# if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Return X - epsilon.  */
__MATHCALL (nextdown,, (_Mdouble_ __x));
/* Return X + epsilon.  */
__MATHCALL (nextup,, (_Mdouble_ __x));
# endif
# 270 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the remainder of integer divison X / Y with infinite precision.  */
__MATHCALL (remainder,, (_Mdouble_ __x, _Mdouble_ __y));

# ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbn,, (_Mdouble_ __x, int __n));
# endif
# 278 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the binary exponent of X, which must be nonzero.  */
__MATHDECL (int,ilogb,, (_Mdouble_ __x));
#endif
# 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Like ilogb, but returning long int.  */
__MATHDECL (long int, llogb,, (_Mdouble_ __x));
#endif
# 287 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbln,, (_Mdouble_ __x, long int __n));

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
__MATHCALL (nearbyint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHCALLX (round,, (_Mdouble_ __x), (__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
__MATHCALLX (trunc,, (_Mdouble_ __x), (__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
__MATHCALL (remquo,, (_Mdouble_ __x, _Mdouble_ __y, int *__quo));


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
__MATHDECL (long int,lrint,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llrint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHDECL (long int,lround,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llround,, (_Mdouble_ __x));


/* Return positive difference between X and Y.  */
__MATHCALL (fdim,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return maximum numeric value from X and Y.  */
__MATHCALLX (fmax,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return minimum numeric value from X and Y.  */
__MATHCALLX (fmin,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Multiply-add function computed as a ternary operation.  */
__MATHCALL (fma,, (_Mdouble_ __x, _Mdouble_ __y, _Mdouble_ __z));
#endif /* Use ISO C99.  */
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Round X to nearest integer value, rounding halfway cases to even.  */
__MATHCALLX (roundeven,, (_Mdouble_ __x), (__const__));

/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
__MATHDECL (__intmax_t, fromfp,, (_Mdouble_ __x, int __round,
				  unsigned int __width));

/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
__MATHDECL (__uintmax_t, ufromfp,, (_Mdouble_ __x, int __round,
				    unsigned int __width));

/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
__MATHDECL (__intmax_t, fromfpx,, (_Mdouble_ __x, int __round,
				   unsigned int __width));

/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
__MATHDECL (__uintmax_t, ufromfpx,, (_Mdouble_ __x, int __round,
				     unsigned int __width));

/* Return value with maximum magnitude.  */
__MATHCALLX (fmaxmag,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return value with minimum magnitude.  */
__MATHCALLX (fminmag,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Total order operation.  */
__MATHDECL_1 (int, totalorder,, (_Mdouble_ __x, _Mdouble_ __y))
     __attribute__ ((__const__));

/* Total order operation on absolute values.  */
__MATHDECL_1 (int, totalordermag,, (_Mdouble_ __x, _Mdouble_ __y))
     __attribute__ ((__const__));

/* Canonicalize floating-point representation.  */
__MATHDECL_1 (int, canonicalize,, (_Mdouble_ *__cx, const _Mdouble_ *__x));

/* Get NaN payload.  */
__MATHCALL (getpayload,, (const _Mdouble_ *__x));

/* Set quiet NaN payload.  */
__MATHDECL_1 (int, setpayload,, (_Mdouble_ *__x, _Mdouble_ __payload));

/* Set signaling NaN payload.  */
__MATHDECL_1 (int, setpayloadsig,, (_Mdouble_ *__x, _Mdouble_ __payload));
#endif
# 390 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if (defined __USE_MISC || (defined __USE_XOPEN_EXTENDED \
			    && __MATH_DECLARING_DOUBLE	  \
			    && !defined __USE_XOPEN2K8))  \
     && !__MATH_DECLARING_FLOATN
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalb,, (_Mdouble_ __x, _Mdouble_ __n));
#endif
# 398 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 308 "/usr/include/math.h" 2 3 4
# undef	_Mdouble_
# undef	__MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN

# if !(defined __NO_LONG_DOUBLE_MATH && defined _LIBC) \
     || defined __LDBL_COMPAT \
     || defined _LIBC_TEST
#  ifdef __LDBL_COMPAT

#   ifdef __USE_ISOC99
extern float __nldbl_nexttowardf (float __x, long double __y)
				  __THROW __attribute__ ((__const__));
#    ifdef __REDIRECT_NTH
extern float __REDIRECT_NTH (nexttowardf, (float __x, long double __y),
			     __nldbl_nexttowardf)
     __attribute__ ((__const__));
extern double __REDIRECT_NTH (nexttoward, (double __x, long double __y),
			      nextafter) __attribute__ ((__const__));
extern long double __REDIRECT_NTH (nexttowardl,
				   (long double __x, long double __y),
				   nextafter) __attribute__ ((__const__));
#    endif
# 331 "/usr/include/math.h" 3 4
#   endif
# 332 "/usr/include/math.h" 3 4

#   undef __MATHDECL_1
#   define __MATHDECL_2(type, function,suffix, args, alias) \
  extern type __REDIRECT_NTH(__MATH_PRECNAME(function,suffix), \
			     args, alias)
#   define __MATHDECL_1(type, function,suffix, args) \
  __MATHDECL_2(type, function,suffix, args, __CONCAT(function,suffix))
#  endif
# 340 "/usr/include/math.h" 3 4

/* Include the file of declarations again, this time using `long double'
   instead of `double' and appending l to each function name.  */

#  define _Mdouble_		long double
#  define __MATH_PRECNAME(name,r) name##l##r
#  define __MATH_DECLARING_DOUBLE  0
#  define __MATH_DECLARING_FLOATN  0
#  define __MATH_DECLARE_LDOUBLE   1
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 349 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */


/* Classify given number.  */
__MATHDECL_1 (int, __fpclassify,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Test for negative number.  */
__MATHDECL_1 (int, __signbit,, (_Mdouble_ __value))
     __attribute__ ((__const__));

/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int, __isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
__MATHDECL_1 (int, __finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int, __isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Test equality.  */
__MATHDECL_1 (int, __iseqsig,, (_Mdouble_ __x, _Mdouble_ __y));

/* Test for signaling NaN.  */
__MATHDECL_1 (int, __issignaling,, (_Mdouble_ __value))
     __attribute__ ((__const__));
# 350 "/usr/include/math.h" 2 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 350 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2018 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */

#ifndef _MATH_H
# error "Never include <bits/mathcalls.h> directly; include <math.h> instead."
#endif
# 48 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Trigonometric functions.  */

/* Arc cosine of X.  */
__MATHCALL (acos,, (_Mdouble_ __x));
/* Arc sine of X.  */
__MATHCALL (asin,, (_Mdouble_ __x));
/* Arc tangent of X.  */
__MATHCALL (atan,, (_Mdouble_ __x));
/* Arc tangent of Y/X.  */
__MATHCALL (atan2,, (_Mdouble_ __y, _Mdouble_ __x));

/* Cosine of X.  */
__MATHCALL_VEC (cos,, (_Mdouble_ __x));
/* Sine of X.  */
__MATHCALL_VEC (sin,, (_Mdouble_ __x));
/* Tangent of X.  */
__MATHCALL (tan,, (_Mdouble_ __x));

/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
__MATHCALL (cosh,, (_Mdouble_ __x));
/* Hyperbolic sine of X.  */
__MATHCALL (sinh,, (_Mdouble_ __x));
/* Hyperbolic tangent of X.  */
__MATHCALL (tanh,, (_Mdouble_ __x));

#ifdef __USE_GNU
/* Cosine and sine of X.  */
__MATHDECL_VEC (void,sincos,,
		(_Mdouble_ __x, _Mdouble_ *__sinx, _Mdouble_ *__cosx));
#endif
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Hyperbolic arc cosine of X.  */
__MATHCALL (acosh,, (_Mdouble_ __x));
/* Hyperbolic arc sine of X.  */
__MATHCALL (asinh,, (_Mdouble_ __x));
/* Hyperbolic arc tangent of X.  */
__MATHCALL (atanh,, (_Mdouble_ __x));
#endif
# 91 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Exponential and logarithmic functions.  */

/* Exponential function of X.  */
__MATHCALL_VEC (exp,, (_Mdouble_ __x));

/* Break VALUE into a normalized fraction and an integral power of 2.  */
__MATHCALL (frexp,, (_Mdouble_ __x, int *__exponent));

/* X times (two to the EXP power).  */
__MATHCALL (ldexp,, (_Mdouble_ __x, int __exponent));

/* Natural logarithm of X.  */
__MATHCALL_VEC (log,, (_Mdouble_ __x));

/* Base-ten logarithm of X.  */
__MATHCALL (log10,, (_Mdouble_ __x));

/* Break VALUE into integral and fractional parts.  */
__MATHCALL (modf,, (_Mdouble_ __x, _Mdouble_ *__iptr)) __nonnull ((2));

#if __GLIBC_USE (IEC_60559_FUNCS_EXT)
/* Compute exponent to base ten.  */
__MATHCALL (exp10,, (_Mdouble_ __x));
#endif
# 116 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return exp(X) - 1.  */
__MATHCALL (expm1,, (_Mdouble_ __x));

/* Return log(1 + X).  */
__MATHCALL (log1p,, (_Mdouble_ __x));

/* Return the base 2 signed integral exponent of X.  */
__MATHCALL (logb,, (_Mdouble_ __x));
#endif
# 127 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Compute base-2 exponential of X.  */
__MATHCALL (exp2,, (_Mdouble_ __x));

/* Compute base-2 logarithm of X.  */
__MATHCALL (log2,, (_Mdouble_ __x));
#endif
# 135 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Power functions.  */

/* Return X to the Y power.  */
__MATHCALL_VEC (pow,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return the square root of X.  */
__MATHCALL (sqrt,, (_Mdouble_ __x));

#if defined __USE_XOPEN || defined __USE_ISOC99
/* Return `sqrt(X*X + Y*Y)'.  */
__MATHCALL (hypot,, (_Mdouble_ __x, _Mdouble_ __y));
#endif
# 149 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return the cube root of X.  */
__MATHCALL (cbrt,, (_Mdouble_ __x));
#endif
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


/* Nearest integer, absolute value, and remainder functions.  */

/* Smallest integral value not less than X.  */
__MATHCALLX (ceil,, (_Mdouble_ __x), (__const__));

/* Absolute value of X.  */
__MATHCALLX (fabs,, (_Mdouble_ __x), (__const__));

/* Largest integer not greater than X.  */
__MATHCALLX (floor,, (_Mdouble_ __x), (__const__));

/* Floating-point modulo remainder of X/Y.  */
__MATHCALL (fmod,, (_Mdouble_ __x, _Mdouble_ __y));

#ifdef __USE_MISC
# if ((!defined __cplusplus \
       || __cplusplus < 201103L /* isinf conflicts with C++11.  */ \
       || __MATH_DECLARING_DOUBLE == 0)) /* isinff or isinfl don't.  */ \
      && !__MATH_DECLARING_FLOATN
/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
__MATHDECL_1 (int,isinf,, (_Mdouble_ __value)) __attribute__ ((__const__));
# endif
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

# if !__MATH_DECLARING_FLOATN
/* Return nonzero if VALUE is finite and not NaN.  */
__MATHDECL_1 (int,finite,, (_Mdouble_ __value)) __attribute__ ((__const__));

/* Return the remainder of X/Y.  */
__MATHCALL (drem,, (_Mdouble_ __x, _Mdouble_ __y));


/* Return the fractional part of X after dividing out `ilogb (X)'.  */
__MATHCALL (significand,, (_Mdouble_ __x));
# endif
# 191 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#endif /* Use misc.  */
# 193 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X with its signed changed to Y's.  */
__MATHCALLX (copysign,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));
#endif
# 198 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return representation of qNaN for double type.  */
__MATHCALLX (nan,, (const char *__tagb), (__const__));
#endif
# 203 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
# if ((!defined __cplusplus \
       || __cplusplus < 201103L /* isnan conflicts with C++11.  */ \
       || __MATH_DECLARING_DOUBLE == 0)) /* isnanf or isnanl don't.  */ \
      && !__MATH_DECLARING_FLOATN
/* Return nonzero if VALUE is not a number.  */
__MATHDECL_1 (int,isnan,, (_Mdouble_ __value)) __attribute__ ((__const__));
# endif
# 213 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#endif
# 214 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || (defined __USE_XOPEN && __MATH_DECLARING_DOUBLE)
/* Bessel functions.  */
__MATHCALL (j0,, (_Mdouble_));
__MATHCALL (j1,, (_Mdouble_));
__MATHCALL (jn,, (int, _Mdouble_));
__MATHCALL (y0,, (_Mdouble_));
__MATHCALL (y1,, (_Mdouble_));
__MATHCALL (yn,, (int, _Mdouble_));
#endif
# 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_XOPEN || defined __USE_ISOC99
/* Error and gamma functions.  */
__MATHCALL (erf,, (_Mdouble_));
__MATHCALL (erfc,, (_Mdouble_));
__MATHCALL (lgamma,, (_Mdouble_));
#endif
# 232 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* True gamma function.  */
__MATHCALL (tgamma,, (_Mdouble_));
#endif
# 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if defined __USE_MISC || (defined __USE_XOPEN && !defined __USE_XOPEN2K)
# if !__MATH_DECLARING_FLOATN
/* Obsolete alias for `lgamma'.  */
__MATHCALL (gamma,, (_Mdouble_));
# endif
# 243 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
#endif
# 244 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_MISC
/* Reentrant version of lgamma.  This function uses the global variable
   `signgam'.  The reentrant version instead takes a pointer and stores
   the value through it.  */
__MATHCALL (lgamma,_r, (_Mdouble_, int *__signgamp));
#endif
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


#if defined __USE_XOPEN_EXTENDED || defined __USE_ISOC99
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
__MATHCALL (rint,, (_Mdouble_ __x));

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
__MATHCALL (nextafter,, (_Mdouble_ __x, _Mdouble_ __y));
# if defined __USE_ISOC99 && !defined __LDBL_COMPAT && !__MATH_DECLARING_FLOATN
__MATHCALL (nexttoward,, (_Mdouble_ __x, long double __y));
# endif
# 263 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

# if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Return X - epsilon.  */
__MATHCALL (nextdown,, (_Mdouble_ __x));
/* Return X + epsilon.  */
__MATHCALL (nextup,, (_Mdouble_ __x));
# endif
# 270 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the remainder of integer divison X / Y with infinite precision.  */
__MATHCALL (remainder,, (_Mdouble_ __x, _Mdouble_ __y));

# ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbn,, (_Mdouble_ __x, int __n));
# endif
# 278 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

/* Return the binary exponent of X, which must be nonzero.  */
__MATHDECL (int,ilogb,, (_Mdouble_ __x));
#endif
# 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Like ilogb, but returning long int.  */
__MATHDECL (long int, llogb,, (_Mdouble_ __x));
#endif
# 287 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#ifdef __USE_ISOC99
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalbln,, (_Mdouble_ __x, long int __n));

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
__MATHCALL (nearbyint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHCALLX (round,, (_Mdouble_ __x), (__const__));

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
__MATHCALLX (trunc,, (_Mdouble_ __x), (__const__));

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
__MATHCALL (remquo,, (_Mdouble_ __x, _Mdouble_ __y, int *__quo));


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
__MATHDECL (long int,lrint,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llrint,, (_Mdouble_ __x));

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
__MATHDECL (long int,lround,, (_Mdouble_ __x));
__extension__
__MATHDECL (long long int,llround,, (_Mdouble_ __x));


/* Return positive difference between X and Y.  */
__MATHCALL (fdim,, (_Mdouble_ __x, _Mdouble_ __y));

/* Return maximum numeric value from X and Y.  */
__MATHCALLX (fmax,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return minimum numeric value from X and Y.  */
__MATHCALLX (fmin,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Multiply-add function computed as a ternary operation.  */
__MATHCALL (fma,, (_Mdouble_ __x, _Mdouble_ __y, _Mdouble_ __z));
#endif /* Use ISO C99.  */
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT) || __MATH_DECLARING_FLOATN
/* Round X to nearest integer value, rounding halfway cases to even.  */
__MATHCALLX (roundeven,, (_Mdouble_ __x), (__const__));

/* Round X to nearest signed integer value, not raising inexact, with
   control of rounding direction and width of result.  */
__MATHDECL (__intmax_t, fromfp,, (_Mdouble_ __x, int __round,
				  unsigned int __width));

/* Round X to nearest unsigned integer value, not raising inexact,
   with control of rounding direction and width of result.  */
__MATHDECL (__uintmax_t, ufromfp,, (_Mdouble_ __x, int __round,
				    unsigned int __width));

/* Round X to nearest signed integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
__MATHDECL (__intmax_t, fromfpx,, (_Mdouble_ __x, int __round,
				   unsigned int __width));

/* Round X to nearest unsigned integer value, raising inexact for
   non-integers, with control of rounding direction and width of
   result.  */
__MATHDECL (__uintmax_t, ufromfpx,, (_Mdouble_ __x, int __round,
				     unsigned int __width));

/* Return value with maximum magnitude.  */
__MATHCALLX (fmaxmag,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Return value with minimum magnitude.  */
__MATHCALLX (fminmag,, (_Mdouble_ __x, _Mdouble_ __y), (__const__));

/* Total order operation.  */
__MATHDECL_1 (int, totalorder,, (_Mdouble_ __x, _Mdouble_ __y))
     __attribute__ ((__const__));

/* Total order operation on absolute values.  */
__MATHDECL_1 (int, totalordermag,, (_Mdouble_ __x, _Mdouble_ __y))
     __attribute__ ((__const__));

/* Canonicalize floating-point representation.  */
__MATHDECL_1 (int, canonicalize,, (_Mdouble_ *__cx, const _Mdouble_ *__x));

/* Get NaN payload.  */
__MATHCALL (getpayload,, (const _Mdouble_ *__x));

/* Set quiet NaN payload.  */
__MATHDECL_1 (int, setpayload,, (_Mdouble_ *__x, _Mdouble_ __payload));

/* Set signaling NaN payload.  */
__MATHDECL_1 (int, setpayloadsig,, (_Mdouble_ *__x, _Mdouble_ __payload));
#endif
# 390 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4

#if (defined __USE_MISC || (defined __USE_XOPEN_EXTENDED \
			    && __MATH_DECLARING_DOUBLE	  \
			    && !defined __USE_XOPEN2K8))  \
     && !__MATH_DECLARING_FLOATN
/* Return X times (2 to the Nth power).  */
__MATHCALL (scalb,, (_Mdouble_ __x, _Mdouble_ __n));
#endif
# 398 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
# 351 "/usr/include/math.h" 2 3 4
#  undef _Mdouble_
#  undef __MATH_PRECNAME
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN

# endif /* !(__NO_LONG_DOUBLE_MATH && _LIBC) || __LDBL_COMPAT */
# 357 "/usr/include/math.h" 3 4

#endif	/* Use ISO C99.  */
# 359 "/usr/include/math.h" 3 4

/* Include the file of declarations for _FloatN and _FloatNx
   types.  */

#if __HAVE_DISTINCT_FLOAT16 || (__HAVE_FLOAT16 && !defined _LIBC)
# define _Mdouble_		_Float16
# define __MATH_PRECNAME(name,r) name##f16##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  1
# if __HAVE_DISTINCT_FLOAT16
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 369 "/usr/include/math.h" 3 4
# 370 "/usr/include/math.h" 3 4
# endif
# 371 "/usr/include/math.h" 3 4
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 372 "/usr/include/math.h" 3 4
# 373 "/usr/include/math.h" 3 4
# endif
# 374 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
#endif /* __HAVE_DISTINCT_FLOAT16 || (__HAVE_FLOAT16 && !_LIBC).  */
# 379 "/usr/include/math.h" 3 4

#if __HAVE_DISTINCT_FLOAT32 || (__HAVE_FLOAT32 && !defined _LIBC)
# define _Mdouble_		_Float32
# define __MATH_PRECNAME(name,r) name##f32##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  1
# if __HAVE_DISTINCT_FLOAT32
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 386 "/usr/include/math.h" 3 4
# 387 "/usr/include/math.h" 3 4
# endif
# 388 "/usr/include/math.h" 3 4
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 389 "/usr/include/math.h" 3 4
# 390 "/usr/include/math.h" 3 4
# endif
# 391 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
#endif /* __HAVE_DISTINCT_FLOAT32 || (__HAVE_FLOAT32 && !_LIBC).  */
# 396 "/usr/include/math.h" 3 4

#if __HAVE_DISTINCT_FLOAT64 || (__HAVE_FLOAT64 && !defined _LIBC)
# define _Mdouble_		_Float64
# define __MATH_PRECNAME(name,r) name##f64##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  1
# if __HAVE_DISTINCT_FLOAT64
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 403 "/usr/include/math.h" 3 4
# 404 "/usr/include/math.h" 3 4
# endif
# 405 "/usr/include/math.h" 3 4
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 406 "/usr/include/math.h" 3 4
# 407 "/usr/include/math.h" 3 4
# endif
# 408 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
#endif /* __HAVE_DISTINCT_FLOAT64 || (__HAVE_FLOAT64 && !_LIBC).  */
# 413 "/usr/include/math.h" 3 4

#if __HAVE_DISTINCT_FLOAT128 || (__HAVE_FLOAT128 && !defined _LIBC)
# define _Mdouble_		_Float128
# define __MATH_PRECNAME(name,r) name##f128##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  1
# if __HAVE_DISTINCT_FLOAT128
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 420 "/usr/include/math.h" 3 4
# 421 "/usr/include/math.h" 3 4
# endif
# 422 "/usr/include/math.h" 3 4
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 423 "/usr/include/math.h" 3 4
# 424 "/usr/include/math.h" 3 4
# endif
# 425 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
#endif /* __HAVE_DISTINCT_FLOAT128 || (__HAVE_FLOAT128 && !_LIBC).  */
# 430 "/usr/include/math.h" 3 4

#if __HAVE_DISTINCT_FLOAT32X || (__HAVE_FLOAT32X && !defined _LIBC)
# define _Mdouble_		_Float32x
# define __MATH_PRECNAME(name,r) name##f32x##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  1
# if __HAVE_DISTINCT_FLOAT32X
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 437 "/usr/include/math.h" 3 4
# 438 "/usr/include/math.h" 3 4
# endif
# 439 "/usr/include/math.h" 3 4
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 440 "/usr/include/math.h" 3 4
# 441 "/usr/include/math.h" 3 4
# endif
# 442 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
#endif /* __HAVE_DISTINCT_FLOAT32X || (__HAVE_FLOAT32X && !_LIBC).  */
# 447 "/usr/include/math.h" 3 4

#if __HAVE_DISTINCT_FLOAT64X || (__HAVE_FLOAT64X && !defined _LIBC)
# define _Mdouble_		_Float64x
# define __MATH_PRECNAME(name,r) name##f64x##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  1
# if __HAVE_DISTINCT_FLOAT64X
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 454 "/usr/include/math.h" 3 4
# 455 "/usr/include/math.h" 3 4
# endif
# 456 "/usr/include/math.h" 3 4
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 457 "/usr/include/math.h" 3 4
# 458 "/usr/include/math.h" 3 4
# endif
# 459 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
#endif /* __HAVE_DISTINCT_FLOAT64X || (__HAVE_FLOAT64X && !_LIBC).  */
# 464 "/usr/include/math.h" 3 4

#if __HAVE_DISTINCT_FLOAT128X || (__HAVE_FLOAT128X && !defined _LIBC)
# define _Mdouble_		_Float128x
# define __MATH_PRECNAME(name,r) name##f128x##r
# define __MATH_DECLARING_DOUBLE  0
# define __MATH_DECLARING_FLOATN  1
# if __HAVE_DISTINCT_FLOAT128X
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls-helper-functions.h>
#endif /* expanded by -frewrite-includes */
# 471 "/usr/include/math.h" 3 4
# 472 "/usr/include/math.h" 3 4
# endif
# 473 "/usr/include/math.h" 3 4
# if __GLIBC_USE (IEC_60559_TYPES_EXT)
#if 0 /* expanded by -frewrite-includes */
#  include <bits/mathcalls.h>
#endif /* expanded by -frewrite-includes */
# 474 "/usr/include/math.h" 3 4
# 475 "/usr/include/math.h" 3 4
# endif
# 476 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_PRECNAME
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
#endif /* __HAVE_DISTINCT_FLOAT128X || (__HAVE_FLOAT128X && !_LIBC).  */
# 481 "/usr/include/math.h" 3 4

#undef	__MATHDECL_1
#undef	__MATHDECL
#undef	__MATHCALL


#if defined __USE_MISC || defined __USE_XOPEN
/* This variable is used by `gamma' and `lgamma'.  */
extern int signgam;
#endif
# 491 "/usr/include/math.h" 3 4

#if (__HAVE_DISTINCT_FLOAT16			\
     || __HAVE_DISTINCT_FLOAT32			\
     || __HAVE_DISTINCT_FLOAT64			\
     || __HAVE_DISTINCT_FLOAT32X		\
     || __HAVE_DISTINCT_FLOAT64X		\
     || __HAVE_DISTINCT_FLOAT128X)
# error "Unsupported _FloatN or _FloatNx types for <math.h>."
#endif
# 500 "/usr/include/math.h" 3 4

/* Depending on the type of TG_ARG, call an appropriately suffixed
   version of FUNC with arguments (including parentheses) ARGS.
   Suffixed functions may not exist for long double if it has the same
   format as double, or for other types with the same format as float,
   double or long double.  The behavior is undefined if the argument
   does not have a real floating type.  The definition may use a
   conditional expression, so all suffixed versions of FUNC must
   return the same type (FUNC may include a cast if necessary rather
   than being a single identifier).  */
#ifdef __NO_LONG_DOUBLE_MATH
# if __HAVE_DISTINCT_FLOAT128
#  error "Distinct _Float128 without distinct long double not supported."
# endif
# 514 "/usr/include/math.h" 3 4
# define __MATH_TG(TG_ARG, FUNC, ARGS)					\
  (sizeof (TG_ARG) == sizeof (float) ? FUNC ## f ARGS : FUNC ARGS)
#elif __HAVE_DISTINCT_FLOAT128
# 517 "/usr/include/math.h" 3 4
# if __HAVE_GENERIC_SELECTION
#  if __HAVE_FLOATN_NOT_TYPEDEF && __HAVE_FLOAT32
#   define __MATH_TG_F32(FUNC, ARGS) _Float32: FUNC ## f ARGS,
#  else
# 521 "/usr/include/math.h" 3 4
#   define __MATH_TG_F32(FUNC, ARGS)
#  endif
# 523 "/usr/include/math.h" 3 4
#  if __HAVE_FLOATN_NOT_TYPEDEF && __HAVE_FLOAT64X
#   if __HAVE_FLOAT64X_LONG_DOUBLE
#    define __MATH_TG_F64X(FUNC, ARGS) _Float64x: FUNC ## l ARGS,
#   else
# 527 "/usr/include/math.h" 3 4
#    define __MATH_TG_F64X(FUNC, ARGS) _Float64x: FUNC ## f128 ARGS,
#   endif
# 529 "/usr/include/math.h" 3 4
#  else
# 530 "/usr/include/math.h" 3 4
#   define __MATH_TG_F64X(FUNC, ARGS)
#  endif
# 532 "/usr/include/math.h" 3 4
#  define __MATH_TG(TG_ARG, FUNC, ARGS)	\
     _Generic ((TG_ARG),			\
	       float: FUNC ## f ARGS,		\
	       __MATH_TG_F32 (FUNC, ARGS)	\
	       default: FUNC ARGS,		\
	       long double: FUNC ## l ARGS,	\
	       __MATH_TG_F64X (FUNC, ARGS)	\
	       _Float128: FUNC ## f128 ARGS)
# else
# 541 "/usr/include/math.h" 3 4
#  if __HAVE_FLOATN_NOT_TYPEDEF
#   error "Non-typedef _FloatN but no _Generic."
#  endif
# 544 "/usr/include/math.h" 3 4
#  define __MATH_TG(TG_ARG, FUNC, ARGS)					\
     __builtin_choose_expr						\
     (__builtin_types_compatible_p (__typeof (TG_ARG), float),		\
      FUNC ## f ARGS,							\
      __builtin_choose_expr						\
      (__builtin_types_compatible_p (__typeof (TG_ARG), double),	\
       FUNC ARGS,							\
       __builtin_choose_expr						\
       (__builtin_types_compatible_p (__typeof (TG_ARG), long double),	\
	FUNC ## l ARGS,							\
	FUNC ## f128 ARGS)))
# endif
# 556 "/usr/include/math.h" 3 4
#else
# 557 "/usr/include/math.h" 3 4
# define __MATH_TG(TG_ARG, FUNC, ARGS)		\
  (sizeof (TG_ARG) == sizeof (float)		\
   ? FUNC ## f ARGS				\
   : sizeof (TG_ARG) == sizeof (double)		\
   ? FUNC ARGS					\
   : FUNC ## l ARGS)
#endif
# 564 "/usr/include/math.h" 3 4

/* ISO C99 defines some generic macros which work on any data type.  */
#ifdef __USE_ISOC99

/* All floating-point numbers can be put in one of these categories.  */
enum
  {
    FP_NAN =
# define FP_NAN 0
      FP_NAN,
    FP_INFINITE =
# define FP_INFINITE 1
      FP_INFINITE,
    FP_ZERO =
# define FP_ZERO 2
      FP_ZERO,
    FP_SUBNORMAL =
# define FP_SUBNORMAL 3
      FP_SUBNORMAL,
    FP_NORMAL =
# define FP_NORMAL 4
      FP_NORMAL
  };

/* GCC bug 66462 means we cannot use the math builtins with -fsignaling-nan,
   so disable builtins if this is enabled.  When fixed in a newer GCC,
   the __SUPPORT_SNAN__ check may be skipped for those versions.  */

/* Return number of classification appropriate for X.  */
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__			      \
     && (!defined __OPTIMIZE_SIZE__ || defined __cplusplus)
     /* The check for __cplusplus allows the use of the builtin, even
	when optimization for size is on.  This is provided for
	libstdc++, only to let its configure test work when it is built
	with -Os.  No further use of this definition of fpclassify is
	expected in C++ mode, since libstdc++ provides its own version
	of fpclassify in cmath (which undefines fpclassify).  */
#  define fpclassify(x) __builtin_fpclassify (FP_NAN, FP_INFINITE,	      \
     FP_NORMAL, FP_SUBNORMAL, FP_ZERO, x)
# else
# 604 "/usr/include/math.h" 3 4
#  define fpclassify(x) __MATH_TG ((x), __fpclassify, (x))
# endif
# 606 "/usr/include/math.h" 3 4

/* Return nonzero value if sign of X is negative.  */
# if __GNUC_PREREQ (6,0)
#  define signbit(x) __builtin_signbit (x)
# elif defined __cplusplus
# 611 "/usr/include/math.h" 3 4
  /* In C++ mode, __MATH_TG cannot be used, because it relies on
     __builtin_types_compatible_p, which is a C-only builtin.
     The check for __cplusplus allows the use of the builtin instead of
     __MATH_TG. This is provided for libstdc++, only to let its configure
     test work. No further use of this definition of signbit is expected
     in C++ mode, since libstdc++ provides its own version of signbit
     in cmath (which undefines signbit). */
#  define signbit(x) __builtin_signbitl (x)
# elif __GNUC_PREREQ (4,0)
# 620 "/usr/include/math.h" 3 4
#  define signbit(x) __MATH_TG ((x), __builtin_signbit, (x))
# else
# 622 "/usr/include/math.h" 3 4
#  define signbit(x) __MATH_TG ((x), __signbit, (x))
# endif
# 624 "/usr/include/math.h" 3 4

/* Return nonzero value if X is not +-Inf or NaN.  */
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
#  define isfinite(x) __builtin_isfinite (x)
# else
# 629 "/usr/include/math.h" 3 4
#  define isfinite(x) __MATH_TG ((x), __finite, (x))
# endif
# 631 "/usr/include/math.h" 3 4

/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
#  define isnormal(x) __builtin_isnormal (x)
# else
# 636 "/usr/include/math.h" 3 4
#  define isnormal(x) (fpclassify (x) == FP_NORMAL)
# endif
# 638 "/usr/include/math.h" 3 4

/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
   we already have this functions `__isnan' and it is faster.  */
# if __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
#  define isnan(x) __builtin_isnan (x)
# else
# 644 "/usr/include/math.h" 3 4
#  define isnan(x) __MATH_TG ((x), __isnan, (x))
# endif
# 646 "/usr/include/math.h" 3 4

/* Return nonzero value if X is positive or negative infinity.  */
# if __HAVE_DISTINCT_FLOAT128 && !__GNUC_PREREQ (7,0) \
     && !defined __SUPPORT_SNAN__ && !defined __cplusplus
   /* Since __builtin_isinf_sign is broken for float128 before GCC 7.0,
      use the helper function, __isinff128, with older compilers.  This is
      only provided for C mode, because in C++ mode, GCC has no support
      for __builtin_types_compatible_p (and when in C++ mode, this macro is
      not used anyway, because libstdc++ headers undefine it).  */
#  define isinf(x) \
    (__builtin_types_compatible_p (__typeof (x), _Float128) \
     ? __isinff128 (x) : __builtin_isinf_sign (x))
# elif __GNUC_PREREQ (4,4) && !defined __SUPPORT_SNAN__
# 659 "/usr/include/math.h" 3 4
#  define isinf(x) __builtin_isinf_sign (x)
# else
# 661 "/usr/include/math.h" 3 4
#  define isinf(x) __MATH_TG ((x), __isinf, (x))
# endif
# 663 "/usr/include/math.h" 3 4

/* Bitmasks for the math_errhandling macro.  */
# define MATH_ERRNO	1	/* errno set by math functions.  */
# define MATH_ERREXCEPT	2	/* Exceptions raised by math functions.  */

/* By default all math functions support both errno and exception handling
   (except for soft floating point implementations which may only support
   errno handling).  If errno handling is disabled, exceptions are still
   supported by GLIBC.  Set math_errhandling to 0 with -ffast-math (this is
   nonconforming but it is more useful than leaving it undefined).  */
# ifdef __FAST_MATH__
#  define math_errhandling	0
# elif defined __NO_MATH_ERRNO__
# 676 "/usr/include/math.h" 3 4
#  define math_errhandling	(MATH_ERREXCEPT)
# else
# 678 "/usr/include/math.h" 3 4
#  define math_errhandling	(MATH_ERRNO | MATH_ERREXCEPT)
# endif
# 680 "/usr/include/math.h" 3 4

#endif /* Use ISO C99.  */
# 682 "/usr/include/math.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT)
#if 0 /* expanded by -frewrite-includes */
# include <bits/iscanonical.h>
#endif /* expanded by -frewrite-includes */
# 684 "/usr/include/math.h" 3 4
# 685 "/usr/include/math.h" 3 4

/* Return nonzero value if X is a signaling NaN.  */
# ifndef __cplusplus
#  define issignaling(x) __MATH_TG ((x), __issignaling, (x))
# else
# 690 "/usr/include/math.h" 3 4
   /* In C++ mode, __MATH_TG cannot be used, because it relies on
      __builtin_types_compatible_p, which is a C-only builtin.  On the
      other hand, overloading provides the means to distinguish between
      the floating-point types.  The overloading resolution will match
      the correct parameter (regardless of type qualifiers (i.e.: const
      and volatile)).  */
extern "C++" {
inline int issignaling (float __val) { return __issignalingf (__val); }
inline int issignaling (double __val) { return __issignaling (__val); }
inline int
issignaling (long double __val)
{
#  ifdef __NO_LONG_DOUBLE_MATH
  return __issignaling (__val);
#  else
# 705 "/usr/include/math.h" 3 4
  return __issignalingl (__val);
#  endif
# 707 "/usr/include/math.h" 3 4
}
#  if __HAVE_DISTINCT_FLOAT128
inline int issignaling (_Float128 __val) { return __issignalingf128 (__val); }
#  endif
# 711 "/usr/include/math.h" 3 4
} /* extern C++ */
# endif
# 713 "/usr/include/math.h" 3 4

/* Return nonzero value if X is subnormal.  */
# define issubnormal(x) (fpclassify (x) == FP_SUBNORMAL)

/* Return nonzero value if X is zero.  */
# ifndef __cplusplus
#  ifdef __SUPPORT_SNAN__
#   define iszero(x) (fpclassify (x) == FP_ZERO)
#  else
# 722 "/usr/include/math.h" 3 4
#   define iszero(x) (((__typeof (x)) (x)) == 0)
#  endif
# 724 "/usr/include/math.h" 3 4
# else	/* __cplusplus */
# 725 "/usr/include/math.h" 3 4
extern "C++" {
#  ifdef __SUPPORT_SNAN__
inline int
iszero (float __val)
{
  return __fpclassifyf (__val) == FP_ZERO;
}
inline int
iszero (double __val)
{
  return __fpclassify (__val) == FP_ZERO;
}
inline int
iszero (long double __val)
{
#   ifdef __NO_LONG_DOUBLE_MATH
  return __fpclassify (__val) == FP_ZERO;
#   else
# 743 "/usr/include/math.h" 3 4
  return __fpclassifyl (__val) == FP_ZERO;
#   endif
# 745 "/usr/include/math.h" 3 4
}
#   if __HAVE_DISTINCT_FLOAT128
inline int
iszero (_Float128 __val)
{
  return __fpclassifyf128 (__val) == FP_ZERO;
}
#   endif
# 753 "/usr/include/math.h" 3 4
#  else
# 754 "/usr/include/math.h" 3 4
template <class __T> inline bool
iszero (__T __val)
{
  return __val == 0;
}
#  endif
# 760 "/usr/include/math.h" 3 4
} /* extern C++ */
# endif	/* __cplusplus */
# 762 "/usr/include/math.h" 3 4
#endif /* Use IEC_60559_BFP_EXT.  */
# 763 "/usr/include/math.h" 3 4

#ifdef __USE_XOPEN
/* X/Open wants another strange constant.  */
# define MAXFLOAT	3.40282347e+38F
#endif
# 768 "/usr/include/math.h" 3 4


/* Some useful constants.  */
#if defined __USE_MISC || defined __USE_XOPEN
# define M_E		2.7182818284590452354	/* e */
# define M_LOG2E	1.4426950408889634074	/* log_2 e */
# define M_LOG10E	0.43429448190325182765	/* log_10 e */
# define M_LN2		0.69314718055994530942	/* log_e 2 */
# define M_LN10		2.30258509299404568402	/* log_e 10 */
# define M_PI		3.14159265358979323846	/* pi */
# define M_PI_2		1.57079632679489661923	/* pi/2 */
# define M_PI_4		0.78539816339744830962	/* pi/4 */
# define M_1_PI		0.31830988618379067154	/* 1/pi */
# define M_2_PI		0.63661977236758134308	/* 2/pi */
# define M_2_SQRTPI	1.12837916709551257390	/* 2/sqrt(pi) */
# define M_SQRT2	1.41421356237309504880	/* sqrt(2) */
# define M_SQRT1_2	0.70710678118654752440	/* 1/sqrt(2) */
#endif
# 786 "/usr/include/math.h" 3 4

/* The above constants are not adequate for computation using `long double's.
   Therefore we provide as an extension constants with similar names as a
   GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
#ifdef __USE_GNU
# define M_El		2.718281828459045235360287471352662498L /* e */
# define M_LOG2El	1.442695040888963407359924681001892137L /* log_2 e */
# define M_LOG10El	0.434294481903251827651128918916605082L /* log_10 e */
# define M_LN2l		0.693147180559945309417232121458176568L /* log_e 2 */
# define M_LN10l	2.302585092994045684017991454684364208L /* log_e 10 */
# define M_PIl		3.141592653589793238462643383279502884L /* pi */
# define M_PI_2l	1.570796326794896619231321691639751442L /* pi/2 */
# define M_PI_4l	0.785398163397448309615660845819875721L /* pi/4 */
# define M_1_PIl	0.318309886183790671537767526745028724L /* 1/pi */
# define M_2_PIl	0.636619772367581343075535053490057448L /* 2/pi */
# define M_2_SQRTPIl	1.128379167095512573896158903121545172L /* 2/sqrt(pi) */
# define M_SQRT2l	1.414213562373095048801688724209698079L /* sqrt(2) */
# define M_SQRT1_2l	0.707106781186547524400844362104849039L /* 1/sqrt(2) */
#endif
# 805 "/usr/include/math.h" 3 4

#if __HAVE_FLOAT16 && defined __USE_GNU
# define M_Ef16		__f16 (2.718281828459045235360287471352662498) /* e */
# define M_LOG2Ef16	__f16 (1.442695040888963407359924681001892137) /* log_2 e */
# define M_LOG10Ef16	__f16 (0.434294481903251827651128918916605082) /* log_10 e */
# define M_LN2f16	__f16 (0.693147180559945309417232121458176568) /* log_e 2 */
# define M_LN10f16	__f16 (2.302585092994045684017991454684364208) /* log_e 10 */
# define M_PIf16	__f16 (3.141592653589793238462643383279502884) /* pi */
# define M_PI_2f16	__f16 (1.570796326794896619231321691639751442) /* pi/2 */
# define M_PI_4f16	__f16 (0.785398163397448309615660845819875721) /* pi/4 */
# define M_1_PIf16	__f16 (0.318309886183790671537767526745028724) /* 1/pi */
# define M_2_PIf16	__f16 (0.636619772367581343075535053490057448) /* 2/pi */
# define M_2_SQRTPIf16	__f16 (1.128379167095512573896158903121545172) /* 2/sqrt(pi) */
# define M_SQRT2f16	__f16 (1.414213562373095048801688724209698079) /* sqrt(2) */
# define M_SQRT1_2f16	__f16 (0.707106781186547524400844362104849039) /* 1/sqrt(2) */
#endif
# 821 "/usr/include/math.h" 3 4

#if __HAVE_FLOAT32 && defined __USE_GNU
# define M_Ef32		__f32 (2.718281828459045235360287471352662498) /* e */
# define M_LOG2Ef32	__f32 (1.442695040888963407359924681001892137) /* log_2 e */
# define M_LOG10Ef32	__f32 (0.434294481903251827651128918916605082) /* log_10 e */
# define M_LN2f32	__f32 (0.693147180559945309417232121458176568) /* log_e 2 */
# define M_LN10f32	__f32 (2.302585092994045684017991454684364208) /* log_e 10 */
# define M_PIf32	__f32 (3.141592653589793238462643383279502884) /* pi */
# define M_PI_2f32	__f32 (1.570796326794896619231321691639751442) /* pi/2 */
# define M_PI_4f32	__f32 (0.785398163397448309615660845819875721) /* pi/4 */
# define M_1_PIf32	__f32 (0.318309886183790671537767526745028724) /* 1/pi */
# define M_2_PIf32	__f32 (0.636619772367581343075535053490057448) /* 2/pi */
# define M_2_SQRTPIf32	__f32 (1.128379167095512573896158903121545172) /* 2/sqrt(pi) */
# define M_SQRT2f32	__f32 (1.414213562373095048801688724209698079) /* sqrt(2) */
# define M_SQRT1_2f32	__f32 (0.707106781186547524400844362104849039) /* 1/sqrt(2) */
#endif
# 837 "/usr/include/math.h" 3 4

#if __HAVE_FLOAT64 && defined __USE_GNU
# define M_Ef64		__f64 (2.718281828459045235360287471352662498) /* e */
# define M_LOG2Ef64	__f64 (1.442695040888963407359924681001892137) /* log_2 e */
# define M_LOG10Ef64	__f64 (0.434294481903251827651128918916605082) /* log_10 e */
# define M_LN2f64	__f64 (0.693147180559945309417232121458176568) /* log_e 2 */
# define M_LN10f64	__f64 (2.302585092994045684017991454684364208) /* log_e 10 */
# define M_PIf64	__f64 (3.141592653589793238462643383279502884) /* pi */
# define M_PI_2f64	__f64 (1.570796326794896619231321691639751442) /* pi/2 */
# define M_PI_4f64	__f64 (0.785398163397448309615660845819875721) /* pi/4 */
# define M_1_PIf64	__f64 (0.318309886183790671537767526745028724) /* 1/pi */
# define M_2_PIf64	__f64 (0.636619772367581343075535053490057448) /* 2/pi */
# define M_2_SQRTPIf64	__f64 (1.128379167095512573896158903121545172) /* 2/sqrt(pi) */
# define M_SQRT2f64	__f64 (1.414213562373095048801688724209698079) /* sqrt(2) */
# define M_SQRT1_2f64	__f64 (0.707106781186547524400844362104849039) /* 1/sqrt(2) */
#endif
# 853 "/usr/include/math.h" 3 4

#if __HAVE_FLOAT128 && defined __USE_GNU
# define M_Ef128	__f128 (2.718281828459045235360287471352662498) /* e */
# define M_LOG2Ef128	__f128 (1.442695040888963407359924681001892137) /* log_2 e */
# define M_LOG10Ef128	__f128 (0.434294481903251827651128918916605082) /* log_10 e */
# define M_LN2f128	__f128 (0.693147180559945309417232121458176568) /* log_e 2 */
# define M_LN10f128	__f128 (2.302585092994045684017991454684364208) /* log_e 10 */
# define M_PIf128	__f128 (3.141592653589793238462643383279502884) /* pi */
# define M_PI_2f128	__f128 (1.570796326794896619231321691639751442) /* pi/2 */
# define M_PI_4f128	__f128 (0.785398163397448309615660845819875721) /* pi/4 */
# define M_1_PIf128	__f128 (0.318309886183790671537767526745028724) /* 1/pi */
# define M_2_PIf128	__f128 (0.636619772367581343075535053490057448) /* 2/pi */
# define M_2_SQRTPIf128	__f128 (1.128379167095512573896158903121545172) /* 2/sqrt(pi) */
# define M_SQRT2f128	__f128 (1.414213562373095048801688724209698079) /* sqrt(2) */
# define M_SQRT1_2f128	__f128 (0.707106781186547524400844362104849039) /* 1/sqrt(2) */
#endif
# 869 "/usr/include/math.h" 3 4

#if __HAVE_FLOAT32X && defined __USE_GNU
# define M_Ef32x	__f32x (2.718281828459045235360287471352662498) /* e */
# define M_LOG2Ef32x	__f32x (1.442695040888963407359924681001892137) /* log_2 e */
# define M_LOG10Ef32x	__f32x (0.434294481903251827651128918916605082) /* log_10 e */
# define M_LN2f32x	__f32x (0.693147180559945309417232121458176568) /* log_e 2 */
# define M_LN10f32x	__f32x (2.302585092994045684017991454684364208) /* log_e 10 */
# define M_PIf32x	__f32x (3.141592653589793238462643383279502884) /* pi */
# define M_PI_2f32x	__f32x (1.570796326794896619231321691639751442) /* pi/2 */
# define M_PI_4f32x	__f32x (0.785398163397448309615660845819875721) /* pi/4 */
# define M_1_PIf32x	__f32x (0.318309886183790671537767526745028724) /* 1/pi */
# define M_2_PIf32x	__f32x (0.636619772367581343075535053490057448) /* 2/pi */
# define M_2_SQRTPIf32x	__f32x (1.128379167095512573896158903121545172) /* 2/sqrt(pi) */
# define M_SQRT2f32x	__f32x (1.414213562373095048801688724209698079) /* sqrt(2) */
# define M_SQRT1_2f32x	__f32x (0.707106781186547524400844362104849039) /* 1/sqrt(2) */
#endif
# 885 "/usr/include/math.h" 3 4

#if __HAVE_FLOAT64X && defined __USE_GNU
# define M_Ef64x	__f64x (2.718281828459045235360287471352662498) /* e */
# define M_LOG2Ef64x	__f64x (1.442695040888963407359924681001892137) /* log_2 e */
# define M_LOG10Ef64x	__f64x (0.434294481903251827651128918916605082) /* log_10 e */
# define M_LN2f64x	__f64x (0.693147180559945309417232121458176568) /* log_e 2 */
# define M_LN10f64x	__f64x (2.302585092994045684017991454684364208) /* log_e 10 */
# define M_PIf64x	__f64x (3.141592653589793238462643383279502884) /* pi */
# define M_PI_2f64x	__f64x (1.570796326794896619231321691639751442) /* pi/2 */
# define M_PI_4f64x	__f64x (0.785398163397448309615660845819875721) /* pi/4 */
# define M_1_PIf64x	__f64x (0.318309886183790671537767526745028724) /* 1/pi */
# define M_2_PIf64x	__f64x (0.636619772367581343075535053490057448) /* 2/pi */
# define M_2_SQRTPIf64x	__f64x (1.128379167095512573896158903121545172) /* 2/sqrt(pi) */
# define M_SQRT2f64x	__f64x (1.414213562373095048801688724209698079) /* sqrt(2) */
# define M_SQRT1_2f64x	__f64x (0.707106781186547524400844362104849039) /* 1/sqrt(2) */
#endif
# 901 "/usr/include/math.h" 3 4

#if __HAVE_FLOAT128X && defined __USE_GNU
# error "M_* values needed for _Float128x"
#endif
# 905 "/usr/include/math.h" 3 4

/* When compiling in strict ISO C compatible mode we must not use the
   inline functions since they, among other things, do not set the
   `errno' variable correctly.  */
#if defined __STRICT_ANSI__ && !defined __NO_MATH_INLINES
# define __NO_MATH_INLINES	1
#endif
# 912 "/usr/include/math.h" 3 4

#ifdef __USE_ISOC99
# if __GNUC_PREREQ (3, 1)
/* ISO C99 defines some macros to compare number while taking care for
   unordered numbers.  Many FPUs provide special instructions to support
   these operations.  Generic support in GCC for these as builtins went
   in 2.97, but not all cpus added their patterns until 3.1.  Therefore
   we enable the builtins from 3.1 onwards and use a generic implementation
   othwerwise.  */
#  define isgreater(x, y)	__builtin_isgreater(x, y)
#  define isgreaterequal(x, y)	__builtin_isgreaterequal(x, y)
#  define isless(x, y)		__builtin_isless(x, y)
#  define islessequal(x, y)	__builtin_islessequal(x, y)
#  define islessgreater(x, y)	__builtin_islessgreater(x, y)
#  define isunordered(x, y)	__builtin_isunordered(x, y)
# else
# 928 "/usr/include/math.h" 3 4
#  define isgreater(x, y) \
  (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); \
		    !isunordered (__x, __y) && __x > __y; }))
#  define isgreaterequal(x, y) \
  (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); \
		    !isunordered (__x, __y) && __x >= __y; }))
#  define isless(x, y) \
  (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); \
		    !isunordered (__x, __y) && __x < __y; }))
#  define islessequal(x, y) \
  (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); \
		    !isunordered (__x, __y) && __x <= __y; }))
#  define islessgreater(x, y) \
  (__extension__ ({ __typeof__ (x) __x = (x); __typeof__ (y) __y = (y); \
		    !isunordered (__x, __y) && __x != __y; }))
/* isunordered must always check both operands first for signaling NaNs.  */
#  define isunordered(x, y) \
  (__extension__ ({ __typeof__ (x) __u = (x); __typeof__ (y) __v = (y); \
		    __u != __v && (__u != __u || __v != __v); }))
# endif
# 948 "/usr/include/math.h" 3 4
#endif
# 949 "/usr/include/math.h" 3 4

/* Get machine-dependent inline versions (if there are any).  */
#ifdef __USE_EXTERN_INLINES
#if 0 /* expanded by -frewrite-includes */
# include <bits/mathinline.h>
#endif /* expanded by -frewrite-includes */
# 952 "/usr/include/math.h" 3 4
# 953 "/usr/include/math.h" 3 4
#endif
# 954 "/usr/include/math.h" 3 4

/* Define special entry points to use when the compiler got told to
   only expect finite results.  */
#if defined __FINITE_MATH_ONLY__ && __FINITE_MATH_ONLY__ > 0

/* Include bits/math-finite.h for double.  */
# define _Mdouble_ double
# define __MATH_DECLARING_DOUBLE 1
# define __MATH_DECLARING_FLOATN 0
# define __REDIRFROM_X(function, reentrant) \
  function ## reentrant
# define __REDIRTO_X(function, reentrant) \
   __ ## function ## reentrant ## _finite
#if 0 /* expanded by -frewrite-includes */
# include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 967 "/usr/include/math.h" 3 4
# 968 "/usr/include/math.h" 3 4
# undef _Mdouble_
# undef __MATH_DECLARING_DOUBLE
# undef __MATH_DECLARING_FLOATN
# undef __REDIRFROM_X
# undef __REDIRTO_X

/* When __USE_ISOC99 is defined, include math-finite for float and
   long double, as well.  */
# ifdef __USE_ISOC99

/* Include bits/math-finite.h for float.  */
#  define _Mdouble_ float
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 0
#  define __REDIRFROM_X(function, reentrant) \
  function ## f ## reentrant
#  define __REDIRTO_X(function, reentrant) \
   __ ## function ## f ## reentrant ## _finite
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 986 "/usr/include/math.h" 3 4
# 987 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X

/* Include bits/math-finite.h for long double.  */
#  ifdef __MATH_DECLARE_LDOUBLE
#   define _Mdouble_ long double
#   define __MATH_DECLARING_DOUBLE 0
#   define __MATH_DECLARING_FLOATN 0
#   define __REDIRFROM_X(function, reentrant) \
  function ## l ## reentrant
#   ifdef __NO_LONG_DOUBLE_MATH
#    define __REDIRTO_X(function, reentrant) \
   __ ## function ## reentrant ## _finite
#   else
# 1004 "/usr/include/math.h" 3 4
#    define __REDIRTO_X(function, reentrant) \
   __ ## function ## l ## reentrant ## _finite
#   endif
# 1007 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#   include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1007 "/usr/include/math.h" 3 4
# 1008 "/usr/include/math.h" 3 4
#   undef _Mdouble_
#   undef __MATH_DECLARING_DOUBLE
#   undef __MATH_DECLARING_FLOATN
#   undef __REDIRFROM_X
#   undef __REDIRTO_X
#  endif
# 1014 "/usr/include/math.h" 3 4

# endif /* __USE_ISOC99.  */
# 1016 "/usr/include/math.h" 3 4

/* Include bits/math-finite.h for _FloatN and _FloatNx.  */

# if (__HAVE_DISTINCT_FLOAT16 || (__HAVE_FLOAT16 && !defined _LIBC))	\
      && __GLIBC_USE (IEC_60559_TYPES_EXT)
#  define _Mdouble_ _Float16
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 1
#  define __REDIRFROM_X(function, reentrant) \
  function ## f16 ## reentrant
#  if __HAVE_DISTINCT_FLOAT16
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f16 ## reentrant ## _finite
#  else
# 1030 "/usr/include/math.h" 3 4
#   error "non-disinct _Float16"
#  endif
# 1032 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1032 "/usr/include/math.h" 3 4
# 1033 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X
# endif
# 1039 "/usr/include/math.h" 3 4

# if (__HAVE_DISTINCT_FLOAT32 || (__HAVE_FLOAT32 && !defined _LIBC))	\
      && __GLIBC_USE (IEC_60559_TYPES_EXT)
#  define _Mdouble_ _Float32
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 1
#  define __REDIRFROM_X(function, reentrant) \
  function ## f32 ## reentrant
#  if __HAVE_DISTINCT_FLOAT32
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f32 ## reentrant ## _finite
#  else
# 1051 "/usr/include/math.h" 3 4
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f ## reentrant ## _finite
#  endif
# 1054 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1054 "/usr/include/math.h" 3 4
# 1055 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X
# endif
# 1061 "/usr/include/math.h" 3 4

# if (__HAVE_DISTINCT_FLOAT64 || (__HAVE_FLOAT64 && !defined _LIBC))	\
      && __GLIBC_USE (IEC_60559_TYPES_EXT)
#  define _Mdouble_ _Float64
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 1
#  define __REDIRFROM_X(function, reentrant) \
  function ## f64 ## reentrant
#  if __HAVE_DISTINCT_FLOAT64
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f64 ## reentrant ## _finite
#  else
# 1073 "/usr/include/math.h" 3 4
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## reentrant ## _finite
#  endif
# 1076 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1076 "/usr/include/math.h" 3 4
# 1077 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X
# endif
# 1083 "/usr/include/math.h" 3 4

# if (__HAVE_DISTINCT_FLOAT128 || (__HAVE_FLOAT128 && !defined _LIBC))	\
      && __GLIBC_USE (IEC_60559_TYPES_EXT)
#  define _Mdouble_ _Float128
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 1
#  define __REDIRFROM_X(function, reentrant) \
  function ## f128 ## reentrant
#  if __HAVE_DISTINCT_FLOAT128
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f128 ## reentrant ## _finite
#  else
# 1095 "/usr/include/math.h" 3 4
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## l ## reentrant ## _finite
#  endif
# 1098 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1098 "/usr/include/math.h" 3 4
# 1099 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X
# endif
# 1105 "/usr/include/math.h" 3 4

# if (__HAVE_DISTINCT_FLOAT32X || (__HAVE_FLOAT32X && !defined _LIBC))	\
      && __GLIBC_USE (IEC_60559_TYPES_EXT)
#  define _Mdouble_ _Float32x
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 1
#  define __REDIRFROM_X(function, reentrant) \
  function ## f32x ## reentrant
#  if __HAVE_DISTINCT_FLOAT32X
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f32x ## reentrant ## _finite
#  else
# 1117 "/usr/include/math.h" 3 4
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## reentrant ## _finite
#  endif
# 1120 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1120 "/usr/include/math.h" 3 4
# 1121 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X
# endif
# 1127 "/usr/include/math.h" 3 4

# if (__HAVE_DISTINCT_FLOAT64X || (__HAVE_FLOAT64X && !defined _LIBC))	\
      && __GLIBC_USE (IEC_60559_TYPES_EXT)
#  define _Mdouble_ _Float64x
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 1
#  define __REDIRFROM_X(function, reentrant) \
  function ## f64x ## reentrant
#  if __HAVE_DISTINCT_FLOAT64X
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f64x ## reentrant ## _finite
#  elif __HAVE_FLOAT64X_LONG_DOUBLE
# 1139 "/usr/include/math.h" 3 4
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## l ## reentrant ## _finite
#  else
# 1142 "/usr/include/math.h" 3 4
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f128 ## reentrant ## _finite
#  endif
# 1145 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1145 "/usr/include/math.h" 3 4
# 1146 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X
# endif
# 1152 "/usr/include/math.h" 3 4

# if (__HAVE_DISTINCT_FLOAT128X || (__HAVE_FLOAT128X && !defined _LIBC)) \
      && __GLIBC_USE (IEC_60559_TYPES_EXT)
#  define _Mdouble_ _Float128x
#  define __MATH_DECLARING_DOUBLE 0
#  define __MATH_DECLARING_FLOATN 1
#  define __REDIRFROM_X(function, reentrant) \
  function ## f128x ## reentrant
#  if __HAVE_DISTINCT_FLOAT128X
#   define __REDIRTO_X(function, reentrant) \
   __ ## function ## f128x ## reentrant ## _finite
#  else
# 1164 "/usr/include/math.h" 3 4
#   error "non-disinct _Float128x"
#  endif
# 1166 "/usr/include/math.h" 3 4
#if 0 /* expanded by -frewrite-includes */
#  include <bits/math-finite.h>
#endif /* expanded by -frewrite-includes */
# 1166 "/usr/include/math.h" 3 4
# 1167 "/usr/include/math.h" 3 4
#  undef _Mdouble_
#  undef __MATH_DECLARING_DOUBLE
#  undef __MATH_DECLARING_FLOATN
#  undef __REDIRFROM_X
#  undef __REDIRTO_X
# endif
# 1173 "/usr/include/math.h" 3 4

#endif /* __FINITE_MATH_ONLY__ > 0.  */
# 1175 "/usr/include/math.h" 3 4

#if __GLIBC_USE (IEC_60559_BFP_EXT)
/* An expression whose type has the widest of the evaluation formats
   of X and Y (which are of floating-point types).  */
# if __FLT_EVAL_METHOD__ == 2 || __FLT_EVAL_METHOD__ > 64
#  define __MATH_EVAL_FMT2(x, y) ((x) + (y) + 0.0L)
# elif __FLT_EVAL_METHOD__ == 1 || __FLT_EVAL_METHOD__ > 32
# 1182 "/usr/include/math.h" 3 4
#  define __MATH_EVAL_FMT2(x, y) ((x) + (y) + 0.0)
# elif __FLT_EVAL_METHOD__ == 0 || __FLT_EVAL_METHOD__ == 32
# 1184 "/usr/include/math.h" 3 4
#  define __MATH_EVAL_FMT2(x, y) ((x) + (y) + 0.0f)
# else
# 1186 "/usr/include/math.h" 3 4
#  define __MATH_EVAL_FMT2(x, y) ((x) + (y))
# endif
# 1188 "/usr/include/math.h" 3 4

/* Return X == Y but raising "invalid" and setting errno if X or Y is
   a NaN.  */
# if !defined __cplusplus || (__cplusplus < 201103L && !defined __GNUC__)
#  define iseqsig(x, y) \
   __MATH_TG (__MATH_EVAL_FMT2 (x, y), __iseqsig, ((x), (y)))
# else
# 1195 "/usr/include/math.h" 3 4
/* In C++ mode, __MATH_TG cannot be used, because it relies on
   __builtin_types_compatible_p, which is a C-only builtin.  Moreover,
   the comparison macros from ISO C take two floating-point arguments,
   which need not have the same type.  Choosing what underlying function
   to call requires evaluating the formats of the arguments, then
   selecting which is wider.  The macro __MATH_EVAL_FMT2 provides this
   information, however, only the type of the macro expansion is
   relevant (actually evaluating the expression would be incorrect).
   Thus, the type is used as a template parameter for __iseqsig_type,
   which calls the appropriate underlying function.  */
extern "C++" {
template<typename> struct __iseqsig_type;

template<> struct __iseqsig_type<float>
{
  static int __call (float __x, float __y) throw ()
  {
    return __iseqsigf (__x, __y);
  }
};

template<> struct __iseqsig_type<double>
{
  static int __call (double __x, double __y) throw ()
  {
    return __iseqsig (__x, __y);
  }
};

template<> struct __iseqsig_type<long double>
{
  static int __call (double __x, double __y) throw ()
  {
#  ifndef __NO_LONG_DOUBLE_MATH
    return __iseqsigl (__x, __y);
#  else
# 1231 "/usr/include/math.h" 3 4
    return __iseqsig (__x, __y);
#  endif
# 1233 "/usr/include/math.h" 3 4
  }
};

#  if __HAVE_DISTINCT_FLOAT128
template<> struct __iseqsig_type<_Float128>
{
  static int __call (_Float128 __x, _Float128 __y) throw ()
  {
    return __iseqsigf128 (__x, __y);
  }
};
#  endif
# 1245 "/usr/include/math.h" 3 4

template<typename _T1, typename _T2>
inline int
iseqsig (_T1 __x, _T2 __y) throw ()
{
#  if __cplusplus >= 201103L
  typedef decltype (__MATH_EVAL_FMT2 (__x, __y)) _T3;
#  else
# 1253 "/usr/include/math.h" 3 4
  typedef __typeof (__MATH_EVAL_FMT2 (__x, __y)) _T3;
#  endif
# 1255 "/usr/include/math.h" 3 4
  return __iseqsig_type<_T3>::__call (__x, __y);
}

} /* extern "C++" */
# endif /* __cplusplus */
# 1260 "/usr/include/math.h" 3 4

#endif
# 1262 "/usr/include/math.h" 3 4

__END_DECLS


#endif /* math.h  */
# 1267 "/usr/include/math.h" 3 4
# 33 "tests.c" 2

#define TEST(A) printf("%d %-72s-", __LINE__, #A);\
                if(A){puts(" OK");tests_passed++;}\
                else{puts(" FAIL");tests_failed++;}
#define STREQ(A, B) ((A) && (B) ? strcmp((A), (B)) == 0 : 0)
#define EPSILON 0.000001

void test_suite_1(void); /* Test 3 files from json.org + serialization*/
void test_suite_2(JSON_Value *value); /* Test correctness of parsed values */
void test_suite_2_no_comments(void);
void test_suite_2_with_comments(void);
void test_suite_3(void); /* Test parsing valid and invalid strings */
void test_suite_4(void); /* Test deep copy function */
void test_suite_5(void); /* Test building json values from scratch */
void test_suite_6(void); /* Test value comparing verification */
void test_suite_7(void); /* Test schema validation */
void test_suite_8(void); /* Test serialization */
void test_suite_9(void); /* Test serialization (pretty) */
void test_suite_10(void); /* Testing for memory leaks */

void print_commits_info(const char *username, const char *repo);
void persistence_example(void);
void serialization_example(void);

static int malloc_count;
static void *counted_malloc(size_t size);
static void counted_free(void *ptr);

static char * read_file(const char * filename);

static int tests_passed;
static int tests_failed;

int main() {
    /* Example functions from readme file:      */
    /* print_commits_info("torvalds", "linux"); */
    /* serialization_example(); */
    /* persistence_example(); */
    json_set_allocation_functions(counted_malloc, counted_free);
    test_suite_1();
    test_suite_2_no_comments();
    test_suite_2_with_comments();
    test_suite_3();
    test_suite_4();
    test_suite_5();
    test_suite_6();
    test_suite_7();
    test_suite_8();
    test_suite_9();
    test_suite_10();
    printf("Tests failed: %d\n", tests_failed);
    printf("Tests passed: %d\n", tests_passed);
    return 0;
}

void test_suite_1(void) {
    JSON_Value *val;
    TEST((val = json_parse_file("tests/test_1_1.txt")) != NULL);
    TEST(json_value_equals(json_parse_string(json_serialize_to_string(val)), val));
    TEST(json_value_equals(json_parse_string(json_serialize_to_string_pretty(val)), val));
    if (val) { json_value_free(val); }

    TEST((val = json_parse_file("tests/test_1_2.txt")) == NULL); /* Over 2048 levels of nesting */
    if (val) { json_value_free(val); }

    TEST((val = json_parse_file("tests/test_1_3.txt")) != NULL);
    TEST(json_value_equals(json_parse_string(json_serialize_to_string(val)), val));
    TEST(json_value_equals(json_parse_string(json_serialize_to_string_pretty(val)), val));
    if (val) { json_value_free(val); }

    TEST((val = json_parse_file_with_comments("tests/test_1_1.txt")) != NULL);
    TEST(json_value_equals(json_parse_string(json_serialize_to_string(val)), val));
    TEST(json_value_equals(json_parse_string(json_serialize_to_string_pretty(val)), val));
    if (val) { json_value_free(val); }

    TEST((val = json_parse_file_with_comments("tests/test_1_2.txt")) == NULL); /* Over 2048 levels of nesting */
    if (val) { json_value_free(val); }

    TEST((val = json_parse_file_with_comments("tests/test_1_3.txt")) != NULL);
    TEST(json_value_equals(json_parse_string(json_serialize_to_string(val)), val));
    TEST(json_value_equals(json_parse_string(json_serialize_to_string_pretty(val)), val));
    if (val) { json_value_free(val); }
}

void test_suite_2(JSON_Value *root_value) {
    JSON_Object *root_object;
    JSON_Array *array;
    JSON_Value *array_value;
    size_t i;
    TEST(root_value);
    TEST(json_value_get_type(root_value) == JSONObject);
    root_object = json_value_get_object(root_value);

    TEST(json_object_has_value(root_object, "string"));
    TEST(!json_object_has_value(root_object, "_string"));
    TEST(json_object_has_value_of_type(root_object, "object", JSONObject));
    TEST(!json_object_has_value_of_type(root_object, "string array", JSONObject));
    TEST(json_object_has_value_of_type(root_object, "string array", JSONArray));
    TEST(!json_object_has_value_of_type(root_object, "object", JSONArray));
    TEST(json_object_has_value_of_type(root_object, "string", JSONString));
    TEST(!json_object_has_value_of_type(root_object, "positive one", JSONString));
    TEST(json_object_has_value_of_type(root_object, "positive one", JSONNumber));
    TEST(!json_object_has_value_of_type(root_object, "string", JSONNumber));
    TEST(json_object_has_value_of_type(root_object, "boolean true", JSONBoolean));
    TEST(!json_object_has_value_of_type(root_object, "positive one", JSONBoolean));
    TEST(json_object_has_value_of_type(root_object, "null", JSONNull));
    TEST(!json_object_has_value_of_type(root_object, "object", JSONNull));

    TEST(json_object_dothas_value(root_object, "object.nested array"));
    TEST(!json_object_dothas_value(root_object, "_object.nested array"));
    TEST(json_object_dothas_value_of_type(root_object, "object.nested object", JSONObject));
    TEST(!json_object_dothas_value_of_type(root_object, "object.nested array", JSONObject));
    TEST(json_object_dothas_value_of_type(root_object, "object.nested array", JSONArray));
    TEST(!json_object_dothas_value_of_type(root_object, "object.nested object", JSONArray));
    TEST(json_object_dothas_value_of_type(root_object, "object.nested string", JSONString));
    TEST(!json_object_dothas_value_of_type(root_object, "object.nested number", JSONString));
    TEST(json_object_dothas_value_of_type(root_object, "object.nested number", JSONNumber));
    TEST(!json_object_dothas_value_of_type(root_object, "_object.nested whatever", JSONNumber));
    TEST(json_object_dothas_value_of_type(root_object, "object.nested true", JSONBoolean));
    TEST(!json_object_dothas_value_of_type(root_object, "object.nested number", JSONBoolean));
    TEST(json_object_dothas_value_of_type(root_object, "object.nested null", JSONNull));
    TEST(!json_object_dothas_value_of_type(root_object, "object.nested object", JSONNull));

    TEST(STREQ(json_object_get_string(root_object, "string"), "lorem ipsum"));
    TEST(STREQ(json_object_get_string(root_object, "utf string"), "lorem ipsum"));
    TEST(STREQ(json_object_get_string(root_object, "utf-8 string"), "あいうえお"));
    TEST(STREQ(json_object_get_string(root_object, "surrogate string"), "lorem𝄞ipsum𝍧lorem"));

    TEST(json_object_get_number(root_object, "positive one") == 1.0);
    TEST(json_object_get_number(root_object, "negative one") == -1.0);
    TEST(fabs(json_object_get_number(root_object, "hard to parse number") - (-0.000314)) < EPSILON);
    TEST(json_object_get_boolean(root_object, "boolean true") == 1);
    TEST(json_object_get_boolean(root_object, "boolean false") == 0);
    TEST(json_value_get_type(json_object_get_value(root_object, "null")) == JSONNull);

    array = json_object_get_array(root_object, "string array");
    if (array != NULL && json_array_get_count(array) > 1) {
        TEST(STREQ(json_array_get_string(array, 0), "lorem"));
        TEST(STREQ(json_array_get_string(array, 1), "ipsum"));
    } else {
        tests_failed++;
    }

    array = json_object_get_array(root_object, "x^2 array");
    if (array != NULL) {
        for (i = 0; i < json_array_get_count(array); i++) {
            TEST(json_array_get_number(array, i) == (i * i));
        }
    } else {
        tests_failed++;
    }

    TEST(json_object_get_array(root_object, "non existent array") == NULL);
    TEST(STREQ(json_object_dotget_string(root_object, "object.nested string"), "str"));
    TEST(json_object_dotget_boolean(root_object, "object.nested true") == 1);
    TEST(json_object_dotget_boolean(root_object, "object.nested false") == 0);
    TEST(json_object_dotget_value(root_object, "object.nested null") != NULL);
    TEST(json_object_dotget_number(root_object, "object.nested number") == 123);

    TEST(json_object_dotget_value(root_object, "should.be.null") == NULL);
    TEST(json_object_dotget_value(root_object, "should.be.null.") == NULL);
    TEST(json_object_dotget_value(root_object, ".") == NULL);
    TEST(json_object_dotget_value(root_object, "") == NULL);

    array = json_object_dotget_array(root_object, "object.nested array");
    TEST(array != NULL);
    TEST(json_array_get_count(array) > 1);
    if (array != NULL && json_array_get_count(array) > 1) {
        TEST(STREQ(json_array_get_string(array, 0), "lorem"));
        TEST(STREQ(json_array_get_string(array, 1), "ipsum"));
    }
    TEST(json_object_dotget_boolean(root_object, "object.nested true") == 1);

    TEST(STREQ(json_object_get_string(root_object, "/**/"), "comment"));
    TEST(STREQ(json_object_get_string(root_object, "//"), "comment"));
    TEST(STREQ(json_object_get_string(root_object, "url"), "https://www.example.com/search?q=12345"));
    TEST(STREQ(json_object_get_string(root_object, "escaped chars"), "\" \\ /"));

    TEST(json_object_get_object(root_object, "empty object") != NULL);
    TEST(json_object_get_array(root_object, "empty array") != NULL);
    
    TEST(json_object_get_wrapping_value(root_object) == root_value);
    array = json_object_get_array(root_object, "string array");
    array_value = json_object_get_value(root_object, "string array");
    TEST(json_array_get_wrapping_value(array) == array_value);
    TEST(json_value_get_parent(array_value) == root_value);
    TEST(json_value_get_parent(root_value) == NULL);
}

void test_suite_2_no_comments(void) {
    const char *filename = "tests/test_2.txt";
    JSON_Value *root_value = NULL;
    root_value = json_parse_file(filename);
    test_suite_2(root_value);
    TEST(json_value_equals(root_value, json_parse_string(json_serialize_to_string(root_value))));
    TEST(json_value_equals(root_value, json_parse_string(json_serialize_to_string_pretty(root_value))));
    json_value_free(root_value);
}

void test_suite_2_with_comments(void) {
    const char *filename = "tests/test_2_comments.txt";
    JSON_Value *root_value = NULL;
    root_value = json_parse_file_with_comments(filename);
    test_suite_2(root_value);
    TEST(json_value_equals(root_value, json_parse_string(json_serialize_to_string(root_value))));
    TEST(json_value_equals(root_value, json_parse_string(json_serialize_to_string_pretty(root_value))));
    json_value_free(root_value);
}

void test_suite_3(void) {
    puts("Testing valid strings:");
    TEST(json_parse_string("{\"lorem\":\"ipsum\"}") != NULL);
    TEST(json_parse_string("[\"lorem\"]") != NULL);
    TEST(json_parse_string("null") != NULL);
    TEST(json_parse_string("true") != NULL);
    TEST(json_parse_string("false") != NULL);
    TEST(json_parse_string("\"string\"") != NULL);
    TEST(json_parse_string("123") != NULL);

    puts("Test UTF-16 parsing:");
    TEST(STREQ(json_string(json_parse_string("\"\\u0024x\"")), "$x"));
    TEST(STREQ(json_string(json_parse_string("\"\\u00A2x\"")), "¢x"));
    TEST(STREQ(json_string(json_parse_string("\"\\u20ACx\"")), "€x"));
    TEST(STREQ(json_string(json_parse_string("\"\\uD801\\uDC37x\"")), "𐐷x"));

    puts("Testing invalid strings:");
    malloc_count = 0;
    TEST(json_parse_string(NULL) == NULL);
    TEST(json_parse_string("") == NULL); /* empty string */
    TEST(json_parse_string("[\"lorem\",]") == NULL);
    TEST(json_parse_string("{\"lorem\":\"ipsum\",}") == NULL);
    TEST(json_parse_string("{lorem:ipsum}") == NULL);
    TEST(json_parse_string("[,]") == NULL);
    TEST(json_parse_string("[,") == NULL);
    TEST(json_parse_string("[") == NULL);
    TEST(json_parse_string("]") == NULL);
    TEST(json_parse_string("{\"a\":0,\"a\":0}") == NULL); /* duplicate keys */
    TEST(json_parse_string("{:,}") == NULL);
    TEST(json_parse_string("{,}") == NULL);
    TEST(json_parse_string("{,") == NULL);
    TEST(json_parse_string("{:") == NULL);
    TEST(json_parse_string("{") == NULL);
    TEST(json_parse_string("}") == NULL);
    TEST(json_parse_string("x") == NULL);
    TEST(json_parse_string("{:\"no name\"}") == NULL);
    TEST(json_parse_string("[,\"no first value\"]") == NULL);
    TEST(json_parse_string("{\"key\"\"value\"}") == NULL);
    TEST(json_parse_string("{\"a\"}") == NULL);
    TEST(json_parse_string("[\"\\u00zz\"]") == NULL); /* invalid utf value */
    TEST(json_parse_string("[\"\\u00\"]") == NULL); /* invalid utf value */
    TEST(json_parse_string("[\"\\u\"]") == NULL); /* invalid utf value */
    TEST(json_parse_string("[\"\\\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\"\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\0\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\a\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\b\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\t\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\n\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\f\"]") == NULL); /* control character */
    TEST(json_parse_string("[\"\r\"]") == NULL); /* control character */
    TEST(json_parse_string("[0x2]") == NULL);    /* hex */
    TEST(json_parse_string("[0X2]") == NULL);    /* HEX */
    TEST(json_parse_string("[07]") == NULL);     /* octals */
    TEST(json_parse_string("[0070]") == NULL);
    TEST(json_parse_string("[07.0]") == NULL);
    TEST(json_parse_string("[-07]") == NULL);
    TEST(json_parse_string("[-007]") == NULL);
    TEST(json_parse_string("[-07.0]") == NULL);
    TEST(json_parse_string("[\"\\uDF67\\uD834\"]") == NULL); /* wrong order surrogate pair */
    TEST(json_parse_string("[1.7976931348623157e309]") == NULL);
    TEST(json_parse_string("[-1.7976931348623157e309]") == NULL);
    TEST(malloc_count == 0);
}

void test_suite_4() {
    const char *filename = "tests/test_2.txt";
    JSON_Value *a = NULL, *a_copy = NULL;
    printf("Testing %s:\n", filename);
    a = json_parse_file(filename);
    TEST(json_value_equals(a, a)); /* test equality test */
    a_copy = json_value_deep_copy(a);
    TEST(a_copy != NULL);
    TEST(json_value_equals(a, a_copy));
}

void test_suite_5(void) {
    JSON_Value *val_from_file = json_parse_file("tests/test_5.txt");

    JSON_Value *val = NULL, *val_parent;
    JSON_Object *obj = NULL;
    JSON_Array *interests_arr = NULL;

    JSON_Value *remove_test_val = NULL;
    JSON_Array *remove_test_arr = NULL;

    val = json_value_init_object();
    TEST(val != NULL);

    obj = json_value_get_object(val);
    TEST(obj != NULL);

    TEST(json_object_set_string(obj, "first", "John") == JSONSuccess);
    TEST(json_object_set_string(obj, "last", "Doe") == JSONSuccess);
    TEST(json_object_set_number(obj, "age", 25) == JSONSuccess);
    TEST(json_object_set_boolean(obj, "registered", 1) == JSONSuccess);

    TEST(json_object_set_value(obj, "interests", json_value_init_array()) == JSONSuccess);
    interests_arr = json_object_get_array(obj, "interests");
    TEST(interests_arr != NULL);
    TEST(json_array_append_string(interests_arr, "Writing") == JSONSuccess);
    TEST(json_array_append_string(interests_arr, "Mountain Biking") == JSONSuccess);
    TEST(json_array_replace_string(interests_arr, 0, "Reading") == JSONSuccess);

    TEST(json_object_dotset_string(obj, "favorites.color", "blue") == JSONSuccess);
    TEST(json_object_dotset_string(obj, "favorites.sport", "running") == JSONSuccess);
    TEST(json_object_dotset_string(obj, "favorites.fruit", "apple") == JSONSuccess);
    TEST(json_object_dotremove(obj, "favorites.fruit") == JSONSuccess);
    TEST(json_object_set_string(obj, "utf string", "lorem ipsum") == JSONSuccess);
    TEST(json_object_set_string(obj, "utf-8 string", "あいうえお") == JSONSuccess);
    TEST(json_object_set_string(obj, "surrogate string", "lorem𝄞ipsum𝍧lorem") == JSONSuccess);
    TEST(json_object_set_string(obj, "windows path", "C:\\Windows\\Path") == JSONSuccess);
    TEST(json_value_equals(val_from_file, val));

    TEST(json_object_set_string(obj, NULL, "") == JSONFailure);
    TEST(json_object_set_string(obj, "last", NULL) == JSONFailure);
    TEST(json_object_set_string(obj, NULL, NULL) == JSONFailure);
    TEST(json_object_set_value(obj, NULL, NULL) == JSONFailure);

    TEST(json_object_dotset_string(obj, NULL, "") == JSONFailure);
    TEST(json_object_dotset_string(obj, "favorites.color", NULL) == JSONFailure);
    TEST(json_object_dotset_string(obj, NULL, NULL) == JSONFailure);
    TEST(json_object_dotset_value(obj, NULL, NULL) == JSONFailure);

    TEST(json_array_append_string(NULL, "lorem") == JSONFailure);
    TEST(json_array_append_value(interests_arr, NULL) == JSONFailure);
    TEST(json_array_append_value(NULL, NULL) == JSONFailure);

    TEST(json_array_remove(NULL, 0) == JSONFailure);
    TEST(json_array_replace_value(interests_arr, 0, NULL) == JSONFailure);
    TEST(json_array_replace_string(NULL, 0, "lorem") == JSONFailure);
    TEST(json_array_replace_string(interests_arr, 100, "not existing") == JSONFailure);

    TEST(json_array_append_string(json_object_get_array(obj, "interests"), NULL) == JSONFailure);

    TEST(json_array_append_string(interests_arr, "Writing") == JSONSuccess);
    TEST(json_array_remove(interests_arr, 0) == JSONSuccess);
    TEST(json_array_remove(interests_arr, 1) == JSONSuccess);
    TEST(json_array_remove(interests_arr, 0) == JSONSuccess);
    TEST(json_array_remove(interests_arr, 0) == JSONFailure); /* should be empty by now */

    val_parent = json_value_init_null();
    TEST(json_object_set_value(obj, "x", val_parent) == JSONSuccess);
    TEST(json_object_set_value(obj, "x", val_parent) == JSONFailure);

    val_parent = json_value_init_null();
    TEST(json_array_append_value(interests_arr, val_parent) == JSONSuccess);
    TEST(json_array_append_value(interests_arr, val_parent) == JSONFailure);

    val_parent = json_value_init_null();
    TEST(json_array_replace_value(interests_arr, 0, val_parent) == JSONSuccess);
    TEST(json_array_replace_value(interests_arr, 0, val_parent) == JSONFailure);
    
    TEST(json_object_remove(obj, "interests") == JSONSuccess);

    /* UTF-8 tests */
    TEST(json_object_set_string(obj, "correct string", "κόσμε") == JSONSuccess);

    TEST(json_object_set_string(obj, "boundary 1", "\xed\x9f\xbf") == JSONSuccess);
    TEST(json_object_set_string(obj, "boundary 2", "\xee\x80\x80") == JSONSuccess);
    TEST(json_object_set_string(obj, "boundary 3", "\xef\xbf\xbd") == JSONSuccess);
    TEST(json_object_set_string(obj, "boundary 4", "\xf4\x8f\xbf\xbf") == JSONSuccess);

    TEST(json_object_set_string(obj, "first continuation byte", "\x80") == JSONFailure);
    TEST(json_object_set_string(obj, "last continuation byte", "\xbf") == JSONFailure);

    TEST(json_object_set_string(obj, "impossible sequence 1", "\xfe") == JSONFailure);
    TEST(json_object_set_string(obj, "impossible sequence 2", "\xff") == JSONFailure);
    TEST(json_object_set_string(obj, "impossible sequence 3", "\xfe\xfe\xff\xff") == JSONFailure);

    TEST(json_object_set_string(obj, "overlong 1", "\xc0\xaf") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong 2", "\xc1\xbf") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong 3", "\xe0\x80\xaf") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong 4", "\xe0\x9f\xbf") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong 5", "\xf0\x80\x80\xaf") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong 6", "\xf0\x8f\xbf\xbf") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong 7", "\xf0\x8f\xbf\xbf") == JSONFailure);

    TEST(json_object_set_string(obj, "overlong null 1", "\xc0\x80") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong null 2", "\xe0\x80\x80") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong null 3", "\xf0\x80\x80\x80") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong null 4", "\xf8\x80\x80\x80\x80") == JSONFailure);
    TEST(json_object_set_string(obj, "overlong null 5", "\xfc\x80\x80\x80\x80\x80") == JSONFailure);

    TEST(json_object_set_string(obj, "single surrogate 1", "\xed\xa0\x80") == JSONFailure);
    TEST(json_object_set_string(obj, "single surrogate 2", "\xed\xaf\xbf") == JSONFailure);
    TEST(json_object_set_string(obj, "single surrogate 3", "\xed\xbf\xbf") == JSONFailure);

    /* Testing removing values from array, order of the elements should be preserved */
    remove_test_val = json_parse_string("[1, 2, 3, 4, 5]");
    remove_test_arr = json_array(remove_test_val);
    json_array_remove(remove_test_arr, 2);
    TEST(json_value_equals(remove_test_val, json_parse_string("[1, 2, 4, 5]")));
    json_array_remove(remove_test_arr, 0);
    TEST(json_value_equals(remove_test_val, json_parse_string("[2, 4, 5]")));
    json_array_remove(remove_test_arr, 2);
    TEST(json_value_equals(remove_test_val, json_parse_string("[2, 4]")));

    /* Testing nan and inf */
    TEST(json_object_set_number(obj, "num", 0.0 / 0.0) == JSONFailure);
    TEST(json_object_set_number(obj, "num", 1.0 / 0.0) == JSONFailure);
}

void test_suite_6(void) {
    const char *filename = "tests/test_2.txt";
    JSON_Value *a = NULL;
    JSON_Value *b = NULL;
    a = json_parse_file(filename);
    b = json_parse_file(filename);
    TEST(json_value_equals(a, b));
    json_object_set_string(json_object(a), "string", "eki");
    TEST(!json_value_equals(a, b));
    a = json_value_deep_copy(b);
    TEST(json_value_equals(a, b));
    json_array_append_number(json_object_get_array(json_object(b), "string array"), 1337);
    TEST(!json_value_equals(a, b));
}

void test_suite_7(void) {
    JSON_Value *val_from_file = json_parse_file("tests/test_5.txt");
    JSON_Value *schema = json_value_init_object();
    JSON_Object *schema_obj = json_value_get_object(schema);
    JSON_Array *interests_arr = NULL;
    json_object_set_string(schema_obj, "first", "");
    json_object_set_string(schema_obj, "last", "");
    json_object_set_number(schema_obj, "age", 0);
    json_object_set_value(schema_obj, "interests", json_value_init_array());
    interests_arr = json_object_get_array(schema_obj, "interests");
    json_array_append_string(interests_arr, "");
    json_object_set_null(schema_obj, "favorites");
    TEST(json_validate(schema, val_from_file) == JSONSuccess);
    json_object_set_string(schema_obj, "age", "");
    TEST(json_validate(schema, val_from_file) == JSONFailure);
}

void test_suite_8(void) {
    const char *filename = "tests/test_2.txt";
    const char *temp_filename = "tests/test_2_serialized.txt";
    JSON_Value *a = NULL;
    JSON_Value *b = NULL;
    char *buf = NULL;
    size_t serialization_size = 0;
    a = json_parse_file(filename);
    TEST(json_serialize_to_file(a, temp_filename) == JSONSuccess);
    b = json_parse_file(temp_filename);
    TEST(json_value_equals(a, b));
    remove(temp_filename);
    serialization_size = json_serialization_size(a);
    buf = json_serialize_to_string(a);
    TEST((strlen(buf)+1) == serialization_size);
}

void test_suite_9(void) {
    const char *filename = "tests/test_2_pretty.txt";
    const char *temp_filename = "tests/test_2_serialized_pretty.txt";
    char *file_contents = NULL;
    char *serialized = NULL;
    JSON_Value *a = NULL;
    JSON_Value *b = NULL;
    size_t serialization_size = 0;
    a = json_parse_file(filename);
    TEST(json_serialize_to_file_pretty(a, temp_filename) == JSONSuccess);
    b = json_parse_file(temp_filename);
    TEST(json_value_equals(a, b));
    remove(temp_filename);
    serialization_size = json_serialization_size_pretty(a);
    serialized = json_serialize_to_string_pretty(a);
    TEST((strlen(serialized)+1) == serialization_size);

    file_contents = read_file(filename);

    TEST(STREQ(file_contents, serialized));
}

void test_suite_10(void) {
    JSON_Value *val;
    char *serialized;

    malloc_count = 0;

    val = json_parse_file("tests/test_1_1.txt");
    json_value_free(val);

    val = json_parse_file("tests/test_1_3.txt");
    json_value_free(val);

    val = json_parse_file("tests/test_2.txt");
    serialized = json_serialize_to_string_pretty(val);
    json_free_serialized_string(serialized);
    json_value_free(val);

    val = json_parse_file("tests/test_2_pretty.txt");
    json_value_free(val);

    TEST(malloc_count == 0);
}

void print_commits_info(const char *username, const char *repo) {
    JSON_Value *root_value;
    JSON_Array *commits;
    JSON_Object *commit;
    size_t i;

    char curl_command[512];
    char cleanup_command[256];
    char output_filename[] = "commits.json";

    /* it ain't pretty, but it's not a libcurl tutorial */
    sprintf(curl_command,
        "curl -s \"https://api.github.com/repos/%s/%s/commits\" > %s",
        username, repo, output_filename);
    sprintf(cleanup_command, "rm -f %s", output_filename);
    system(curl_command);

    /* parsing json and validating output */
    root_value = json_parse_file(output_filename);
    if (json_value_get_type(root_value) != JSONArray) {
        system(cleanup_command);
        return;
    }

    /* getting array from root value and printing commit info */
    commits = json_value_get_array(root_value);
    printf("%-10.10s %-10.10s %s\n", "Date", "SHA", "Author");
    for (i = 0; i < json_array_get_count(commits); i++) {
        commit = json_array_get_object(commits, i);
        printf("%.10s %.10s %s\n",
               json_object_dotget_string(commit, "commit.author.date"),
               json_object_get_string(commit, "sha"),
               json_object_dotget_string(commit, "commit.author.name"));
    }

    /* cleanup code */
    json_value_free(root_value);
    system(cleanup_command);
}

void persistence_example(void) {
    JSON_Value *schema = json_parse_string("{\"name\":\"\"}");
    JSON_Value *user_data = json_parse_file("user_data.json");
    char buf[256];
    const char *name = NULL;
    if (user_data == NULL || json_validate(schema, user_data) != JSONSuccess) {
        puts("Enter your name:");
        scanf("%s", buf);
        user_data = json_value_init_object();
        json_object_set_string(json_object(user_data), "name", buf);
        json_serialize_to_file(user_data, "user_data.json");
    }
    name = json_object_get_string(json_object(user_data), "name");
    printf("Hello, %s.", name);
    json_value_free(schema);
    json_value_free(user_data);
    return;
}

void serialization_example(void) {
    JSON_Value *root_value = json_value_init_object();
    JSON_Object *root_object = json_value_get_object(root_value);
    char *serialized_string = NULL;
    json_object_set_string(root_object, "name", "John Smith");
    json_object_set_number(root_object, "age", 25);
    json_object_dotset_string(root_object, "address.city", "Cupertino");
    json_object_dotset_value(root_object, "contact.emails",
                             json_parse_string("[\"email@example.com\", \"email2@example.com\"]"));
    serialized_string = json_serialize_to_string_pretty(root_value);
    puts(serialized_string);
    json_free_serialized_string(serialized_string);
    json_value_free(root_value);
}

static char * read_file(const char * filename) {
    FILE *fp = fopen(filename, "r");
    size_t file_size;
    long pos;
    char *file_contents;
    if (!fp)
        return NULL;
    fseek(fp, 0L, SEEK_END);
    pos = ftell(fp);
    if (pos < 0) {
        fclose(fp);
        return NULL;
    }
    file_size = pos;
    rewind(fp);
    file_contents = (char*)malloc(sizeof(char) * (file_size + 1));
    if (!file_contents) {
        fclose(fp);
        return NULL;
    }
    if (fread(file_contents, file_size, 1, fp) < 1) {
        if (ferror(fp)) {
            fclose(fp);
            free(file_contents);
            return NULL;
        }
    }
    fclose(fp);
    file_contents[file_size] = '\0';
    return file_contents;
}

static void *counted_malloc(size_t size) {
    void *res = malloc(size);
    if (res != NULL) {
        malloc_count++;
    }
    return res;
}

static void counted_free(void *ptr) {
    if (ptr != NULL) {
        malloc_count--;
    }
    free(ptr);
}
