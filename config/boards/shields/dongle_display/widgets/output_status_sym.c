/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

 #include <lvgl.h>


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SYM_1
#define LV_ATTRIBUTE_IMG_SYM_1
#endif

// Numbers instead of symbols:
// w: 5, h: 6, size: 14
// 0x30, 0x70, 0x70, 0x30, 0x30, 0x30
// 0x70, 0xd8, 0x18, 0x30, 0x60, 0xf8
// 0x70, 0x98, 0x30, 0x18, 0xd8, 0x70
// 0x70, 0x98, 0x30, 0x18, 0xd8, 0x70
// 0x78, 0x40, 0x70, 0x18, 0xd8, 0x70

// Office
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_1 uint8_t sym_1_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0xff, 0xf8,
  0x80, 0x08,
  0xb7, 0x68,
  0xb7, 0x68,
  0xb7, 0x68,
  0x80, 0x08,
  0x80, 0x08,
  0x80, 0x08,
  0xb7, 0x68,
  0xb7, 0x68,
  0xb7, 0x68,
  0x87, 0x08,
  0x87, 0x08,
  0xff, 0xf8,
  0x00, 0x00,
};

const lv_img_dsc_t sym_1 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 13,
  .header.h = 15,
  .data_size = 38,
  .data = sym_1_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_2
#define LV_ATTRIBUTE_IMG_SYM_2
#endif

// Home
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_2 uint8_t sym_2_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x02, 0x00,
  0x07, 0x00,
  0x0d, 0x80,
  0x18, 0xc0,
  0x30, 0x60,
  0x60, 0x30,
  0xc0, 0x18,
  0x20, 0x20,
  0x27, 0x20,
  0x27, 0x20,
  0x27, 0x20,
  0x27, 0x20,
  0x27, 0x20,
  0x3f, 0xe0,
  0x00, 0x00,
};

const lv_img_dsc_t sym_2 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 13,
  .header.h = 15,
  .data_size = 38,
  .data = sym_2_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_3
#define LV_ATTRIBUTE_IMG_SYM_3
#endif

// Linux
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_3 uint8_t sym_3_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x03, 0x80,
  0x07, 0xc0,
  0x05, 0x40,
  0x07, 0xc0,
  0x06, 0xc0,
  0x0c, 0x40,
  0x1f, 0xe0,
  0x38, 0x60,
  0x30, 0x30,
  0x30, 0x30,
  0x10, 0x20,
  0x38, 0x70,
  0x7c, 0xf0,
  0x7f, 0xf0,
  0x38, 0x60,
};

const lv_img_dsc_t sym_3 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 13,
  .header.h = 15,
  .data_size = 38,
  .data = sym_3_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_4
#define LV_ATTRIBUTE_IMG_SYM_4
#endif

// Windows
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_4 uint8_t sym_4_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0x70,
  0x0b, 0xf0,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x00, 0x00,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x7b, 0xf0,
  0x0b, 0xf0,
  0x00, 0x70,
};

const lv_img_dsc_t sym_4 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 13,
  .header.h = 15,
  .data_size = 38,
  .data = sym_4_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_5
#define LV_ATTRIBUTE_IMG_SYM_5
#endif

// Mac
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_5 uint8_t sym_5_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x00, 0xc0,
  0x01, 0xc0,
  0x03, 0x80,
  0x03, 0x00,
  0x38, 0xe0,
  0x7f, 0xf0,
  0x7f, 0xe0,
  0x7f, 0xc0,
  0x7f, 0xc0,
  0x7f, 0xe0,
  0x7f, 0xf0,
  0x7f, 0xf0,
  0x3f, 0xe0,
  0x1f, 0xc0,
  0x0f, 0x80,
};

const lv_img_dsc_t sym_5 = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 13,
  .header.h = 15,
  .data_size = 38,
  .data = sym_5_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_OK
#define LV_ATTRIBUTE_IMG_SYM_OK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_OK uint8_t sym_ok_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x08, 0x18, 0xb0, 0xe0, 0x40,
};

const lv_img_dsc_t sym_ok = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 5,
  .data_size = 13,
  .data = sym_ok_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_NOK
#define LV_ATTRIBUTE_IMG_SYM_NOK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_NOK uint8_t sym_nok_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x88, 0xd8, 0x70, 0xd8, 0x88,
};

const lv_img_dsc_t sym_nok = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 5,
  .data_size = 13,
  .data = sym_nok_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_OPEN
#define LV_ATTRIBUTE_IMG_SYM_OPEN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_OPEN uint8_t sym_open_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x20, 0x70, 0xd8, 0x70, 0x20,
};

const lv_img_dsc_t sym_open = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 5,
  .header.h = 5,
  .data_size = 13,
  .data = sym_open_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_BT
#define LV_ATTRIBUTE_IMG_SYM_BT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_BT uint8_t sym_bt_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x3e, 0x00, 0x67, 0x00, 0xe3, 0x80, 0xe9,
  0x80, 0x8c, 0x80, 0xc9, 0x80, 0xe3, 0x80,
  0xe3, 0x80, 0xc9, 0x80, 0x8c, 0x80, 0xe9,
  0x80, 0xe3, 0x80, 0x67, 0x00, 0x3e, 0x00,
};

const lv_img_dsc_t sym_bt = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = sym_bt_map,
};

#ifndef LV_ATTRIBUTE_IMG_SYM_USB
#define LV_ATTRIBUTE_IMG_SYM_USB
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SYM_USB uint8_t sym_usb_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x7f, 0x00, 0x41, 0x00, 0x55, 0x00, 0x41,
  0x00, 0xff, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80, 0x80, 0xff, 0x80,
};

const lv_img_dsc_t sym_usb = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 9,
  .header.h = 14,
  .data_size = 36,
  .data = sym_usb_map,
};
