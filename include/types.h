#ifndef __MYUN2_GITHUB__NANO_STORED__TYPES_H__
#define __MYUN2_GITHUB__NANO_STORED__TYPES_H__

typedef enum ns_type_e {
  ns_type_null=0,				/* 0: Null Type */
  ns_type_int,					/* 1: Integer Type (32bit) */
  ns_type_char,					/* 2: 1byte(C char like) Type */
  ns_type_short,				/* 3: 2byte(C short like) Type */
  ns_type_u_int,				/* 4: Unsigned Integer Type (32bit) */

  ns_type_long=6,				/* 6: Long(64bit) Type */
  ns_type_u_long,				/* 7: Unsigned Long(64bit) Type */

  ns_type_string=8,				/* 8: String (Max 255 byte length) */
  ns_type_long_string,			/* 9: Long String (Max 65535 byte length) */
  ns_type_ll_string,			/* 10: Long Long String (length max is 32bit) */
  ns_type_mini_string,			/* 11: Mini String (Max 16byte length) */
  ns_type_short_string,			/* 12: Short String (Max 4byte length) */
  ns_type_64_string,			/* 13: 64bytes String */

  ns_type_float=16,				/* 16: Float Type (32bit) */
  ns_type_double,				/* 17: Double Type (64bit) */

  /*----------------------------------------------*/

  ns_type_inteter_array=129,	/* 129: Integer Type (32bit) */
  ns_type_cha_arrayr,			/* 130: 1byte(C char like) Type */
  ns_type_short_array,			/* 131: 2byte(C short like) Type */
  ns_type_u_int_array,			/* 132: Unsigned Integer Type (32bit) */

  ns_type_long_array=134,		/* 134: Long(64bit) Type */
  ns_type_u_long_array,			/* 135: Unsigned Long(64bit) Type */

  ns_type_string_array=136,		/* 136: String (Max 255 byte length) */
  ns_type_long_string_array,	/* 137: Long String (Max 65535 byte length) */
  ns_type_ll_string_array,		/* 138: Long Long String (length max is 32bit) */
  ns_type_mini_string_array,	/* 139: Mini String (Max 16byte length) */
  ns_type_short_string_array,	/* 140: Short String (Max 4byte length) */
  ns_type_64_string_array,		/* 141: 64bytes String */

  ns_type_float_array=144,		/* 144: Float Type (32bit) */
  ns_type_double_array,			/* 145: Double Type (64bit) */

  ns_type_class=254,			/* 254: Class */
  ns_type_unknown=255			/* 255: Unknown */
} ns_type, ns_data_type, ns_entry_type;

#endif//__MYUN2_GITHUB__NANO_STORED__TYPES_H__
