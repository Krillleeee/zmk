#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_MARKLOGO
#define LV_ATTRIBUTE_IMG_MARKLOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MARKLOGO uint8_t marklogo_map[] = {
  0x00, 0x00, 0x00, 0x06, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xd6, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x38, 0xc0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xad, 0xa0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xaf, 0x60, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x7a, 0x20, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x7b, 0x60, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x4b, 0xc0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x49, 0x00, 
  0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x38, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x70, 0x07, 0x81, 0xf8, 0xfc, 0x0f, 0x80, 0x00, 0x00, 
  0x70, 0x0f, 0xc3, 0xf8, 0xfe, 0x3f, 0x80, 0x00, 0x00, 
  0xe0, 0x1d, 0xe3, 0xa9, 0xce, 0x39, 0xc0, 0x00, 0x00, 
  0xe0, 0x38, 0xe7, 0x01, 0xce, 0x71, 0xc0, 0x00, 0x00, 
  0xe0, 0x38, 0xe7, 0x01, 0xce, 0x77, 0x80, 0x00, 0x00, 
  0xe0, 0x30, 0xe7, 0x01, 0x8e, 0x7f, 0x00, 0x00, 0x00, 
  0xe0, 0x31, 0xc6, 0x03, 0x8c, 0xf0, 0x00, 0x00, 0x00, 
  0xf2, 0x3b, 0xce, 0x03, 0x9c, 0x71, 0x00, 0x00, 0x00, 
  0x7f, 0x3f, 0x8e, 0x03, 0x9c, 0x7f, 0x00, 0x00, 0x00, 
  0x3e, 0x1f, 0x0e, 0x03, 0x18, 0x3f, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t marklogo = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 67,
  .header.h = 20,
  .data_size = 188,
  .data = marklogo_map,
};
