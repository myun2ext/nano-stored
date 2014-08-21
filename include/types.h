#ifndef __MYUN2_GITHUB__NANO_STORED__TYPES_H__
#define __MYUN2_GITHUB__NANO_STORED__TYPES_H__

enum ns_types {
  ns_type_null,					/* 0: Null Type */
  ns_type_int,					/* 1: Integer Type (32bit) */
  ns_type_char,					/* 2: 1byte(C char like) Type */
  ns_type_char,					/* 3: 2byte(C short like) Type */
  ns_type_u_int,				/* 4: Unsigned Integer Type (32bit) */

  ns_type_long=6,				/* 6: Long(64bit) Type */
  ns_type_u_long,				/* 7: Unsigned Long(64bit) Type */
};

#endif//__MYUN2_GITHUB__NANO_STORED__TYPES_H__
