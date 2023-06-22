/*
 * Font name:   Default5x7
 * Font size:   7
 * Font height: 7
 */

#ifndef Default5x7_H
#define Default5x7_H
#include "em_text.h"
#include "fonts.h"

#ifdef emHMI_FONTS_DEFAULT5X7

const uint8_t Default5x7_table [] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, // 
    0x84, 0x10, 0x02, 0x08, 0x00, //!
    0x4a, 0x29, 0x00, 0x00, 0x00, //"
    0x40, 0x7d, 0xf5, 0x15, 0x00, //#
    0xc0, 0x15, 0x47, 0x1d, 0x00, //$
    0x21, 0x11, 0x91, 0x10, 0x00, //%
    0x40, 0x14, 0x51, 0x14, 0x00, //&
    0x84, 0x10, 0x00, 0x00, 0x00, //'
    0x44, 0x08, 0x21, 0x08, 0x00, //(
    0x82, 0x10, 0x42, 0x04, 0x00, //)
    0x40, 0x11, 0x47, 0x14, 0x00, //*
    0x80, 0x90, 0x4f, 0x08, 0x00, //+
    0x00, 0x00, 0xc0, 0x88, 0x00, //,
    0x00, 0x80, 0x07, 0x00, 0x00, //-
    0x00, 0x00, 0x60, 0x0c, 0x00, //.
    0x00, 0x11, 0x11, 0x00, 0x00, ///
    0x44, 0x29, 0xa5, 0x08, 0x00, //0
    0xc4, 0x10, 0x42, 0x1c, 0x00, //1
    0x26, 0x21, 0x22, 0x1e, 0x00, //2
    0x0f, 0x19, 0x94, 0x0c, 0x00, //3
    0xc4, 0x94, 0x47, 0x08, 0x00, //4
    0x2f, 0x1c, 0x94, 0x0c, 0x00, //5
    0x26, 0x9c, 0x94, 0x0c, 0x00, //6
    0x0f, 0x11, 0x22, 0x04, 0x00, //7
    0x26, 0x99, 0x94, 0x0c, 0x00, //8
    0x26, 0x25, 0x87, 0x0c, 0x00, //9
    0xc0, 0x18, 0x60, 0x0c, 0x00, //:
    0xc0, 0x18, 0x60, 0x44, 0x00, //;
    0x00, 0x11, 0x41, 0x10, 0x00, //<
    0x00, 0x3c, 0xf0, 0x00, 0x00, //=
    0x40, 0x10, 0x44, 0x04, 0x00, //>
    0x44, 0x21, 0x02, 0x08, 0x00, //?
    0x26, 0xb5, 0x16, 0x0c, 0x00, //@
    0x26, 0xa5, 0x97, 0x12, 0x00, //A
    0x27, 0x9d, 0x94, 0x0e, 0x00, //B
    0x26, 0x85, 0x90, 0x0c, 0x00, //C
    0x27, 0xa5, 0x94, 0x0e, 0x00, //D
    0x2f, 0x9c, 0x10, 0x1e, 0x00, //E
    0x2f, 0x9c, 0x10, 0x02, 0x00, //F
    0x26, 0x85, 0x96, 0x1c, 0x00, //G
    0x29, 0xbd, 0x94, 0x12, 0x00, //H
    0x8e, 0x10, 0x42, 0x1c, 0x00, //I
    0x08, 0x21, 0x94, 0x0c, 0x00, //J
    0xa9, 0x8c, 0x51, 0x12, 0x00, //K
    0x21, 0x84, 0x10, 0x1e, 0x00, //L
    0xe9, 0xbd, 0x94, 0x12, 0x00, //M
    0x69, 0xad, 0xd6, 0x12, 0x00, //N
    0x26, 0xa5, 0x94, 0x0c, 0x00, //O
    0x27, 0xa5, 0x13, 0x02, 0x00, //P
    0x26, 0xa5, 0xb4, 0x0c, 0x02, //Q
    0x27, 0xa5, 0x53, 0x12, 0x00, //R
    0x26, 0x09, 0x92, 0x0c, 0x00, //S
    0x8e, 0x10, 0x42, 0x08, 0x00, //T
    0x29, 0xa5, 0x94, 0x0c, 0x00, //U
    0x29, 0xa5, 0x64, 0x0c, 0x00, //V
    0x29, 0xa5, 0xf7, 0x12, 0x00, //W
    0x29, 0x19, 0x93, 0x12, 0x00, //X
    0x4a, 0x29, 0x42, 0x08, 0x00, //Y
    0x0f, 0x11, 0x11, 0x1e, 0x00, //Z
    0x4e, 0x08, 0x21, 0x1c, 0x00, //[
    0x20, 0x08, 0x82, 0x00, 0x00, 
    0x0e, 0x21, 0x84, 0x1c, 0x00, //]
    0x44, 0x01, 0x00, 0x00, 0x00, //^
    0x00, 0x00, 0x00, 0x1e, 0x00, //_
    0x82, 0x00, 0x00, 0x00, 0x00, //`
    0x00, 0xb8, 0xd4, 0x14, 0x00, //a
    0x21, 0x9c, 0x94, 0x0e, 0x00, //b
    0x00, 0x98, 0x10, 0x0c, 0x00, //c
    0x08, 0xb9, 0x94, 0x1c, 0x00, //d
    0x00, 0x98, 0x36, 0x0c, 0x00, //e
    0x44, 0x89, 0x23, 0x04, 0x00, //f
    0x00, 0xb8, 0x64, 0x82, 0x03, //g
    0x21, 0x9c, 0x94, 0x12, 0x00, //h
    0x04, 0x18, 0x42, 0x1c, 0x00, //i
    0x08, 0x20, 0x84, 0x14, 0x01, //j
    0x21, 0x94, 0x51, 0x12, 0x00, //k
    0x86, 0x10, 0x42, 0x1c, 0x00, //l
    0x00, 0x94, 0x97, 0x12, 0x00, //m
    0x00, 0x9c, 0x94, 0x12, 0x00, //n
    0x00, 0x98, 0x94, 0x0c, 0x00, //o
    0x00, 0x9c, 0x94, 0x4e, 0x00, //p
    0x00, 0xb8, 0x94, 0x1c, 0x02, //q
    0x00, 0x9c, 0x14, 0x02, 0x00, //r
    0x00, 0xb8, 0xc1, 0x0e, 0x00, //s
    0x42, 0x1c, 0x21, 0x18, 0x00, //t
    0x00, 0xa4, 0x94, 0x1c, 0x00, //u
    0x00, 0x28, 0xa5, 0x08, 0x00, //v
    0x00, 0xa4, 0xf4, 0x1e, 0x00, //w
    0x00, 0x24, 0x63, 0x12, 0x00, //x
    0x00, 0xa4, 0xa4, 0x88, 0x00, //y
    0x00, 0x3c, 0x22, 0x1e, 0x00, //z
    0x88, 0x18, 0x42, 0x10, 0x00, //{
    0x84, 0x10, 0x42, 0x08, 0x00, //|
    0x82, 0x30, 0x42, 0x04, 0x00, //}
    0xaa, 0x00, 0x00, 0x00, 0x00, //~
    0x26, 0xa5, 0x97, 0x12, 0x00, //А
    0x27, 0x9c, 0x94, 0x0e, 0x00, //Б
    0x27, 0x9d, 0x94, 0x0e, 0x00, //В
    0x2f, 0x84, 0x10, 0x02, 0x00, //Г
    0x4c, 0x29, 0xa5, 0x5e, 0x02, //Д
    0x2f, 0x9c, 0x10, 0x1e, 0x00, //Е
    0xb5, 0x3a, 0x57, 0x2b, 0x00, //Ж
    0x07, 0x19, 0x94, 0x0c, 0x00, //З
    0xa9, 0xb5, 0xb5, 0x12, 0x00, //И
    0xab, 0xb5, 0xb5, 0x12, 0x00, //Й
    0xa9, 0x8c, 0x51, 0x12, 0x00, //К
    0x4c, 0x29, 0xa5, 0x12, 0x00, //Л
    0xe9, 0xbd, 0x94, 0x12, 0x00, //М
    0x29, 0xbd, 0x94, 0x12, 0x00, //Н
    0x26, 0xa5, 0x94, 0x0c, 0x00, //О
    0x2f, 0xa5, 0x94, 0x12, 0x00, //П
    0x27, 0xa5, 0x13, 0x02, 0x00, //Р
    0x26, 0x85, 0x90, 0x0c, 0x00, //С
    0x8e, 0x10, 0x42, 0x08, 0x00, //Т
    0x4a, 0x29, 0x42, 0x04, 0x00, //У
    0xc4, 0x29, 0xe5, 0x08, 0x00, //Ф
    0x29, 0x19, 0x93, 0x12, 0x00, //Х
    0x29, 0xa5, 0x94, 0x1e, 0x02, //Ц
    0x29, 0x25, 0x87, 0x10, 0x00, //Ч
    0xb5, 0xd6, 0x5a, 0x3f, 0x00, //Ш
    0xb5, 0xd6, 0x5a, 0x3f, 0x04, //Щ
    0x43, 0x18, 0xa5, 0x0c, 0x00, //Ъ
    0x29, 0xad, 0xd6, 0x16, 0x00, //Ы
    0x21, 0x9c, 0x94, 0x0e, 0x00, //Ь
    0x26, 0x31, 0x94, 0x0c, 0x00, //Э
    0x65, 0xad, 0xb5, 0x0a, 0x00, //Ю
    0x2e, 0x25, 0xa7, 0x12, 0x00, //Я
    0x00, 0xb8, 0xd4, 0x14, 0x00, //а
    0xc0, 0x84, 0x93, 0x0c, 0x00, //б
    0x00, 0x9c, 0x93, 0x0e, 0x00, //в
    0x00, 0xbc, 0x10, 0x02, 0x00, //г
    0x00, 0x30, 0xa5, 0x5e, 0x02, //д
    0x00, 0x98, 0x36, 0x0c, 0x00, //е
    0x00, 0x54, 0xe7, 0x2a, 0x00, //ж
    0x00, 0x1c, 0x43, 0x06, 0x00, //з
    0x00, 0xa4, 0xb6, 0x12, 0x00, //и
    0xc9, 0xa4, 0xb6, 0x12, 0x00, //й
    0x00, 0xa4, 0x53, 0x12, 0x00, //к
    0x00, 0x30, 0xa5, 0x12, 0x00, //л
    0x00, 0xc4, 0x5d, 0x2b, 0x00, //м
    0x00, 0xa4, 0x97, 0x12, 0x00, //н
    0x00, 0x98, 0x94, 0x0c, 0x00, //о
    0x00, 0xbc, 0x94, 0x12, 0x00, //п
    0x00, 0x9c, 0x94, 0x4e, 0x00, //р
    0x00, 0x98, 0x10, 0x0c, 0x00, //с
    0x00, 0x1c, 0x21, 0x04, 0x00, //т
    0x00, 0xa4, 0xa4, 0x88, 0x00, //у
    0x86, 0x10, 0xa7, 0x1c, 0x01, //ф
    0x00, 0x24, 0x63, 0x12, 0x00, //х
    0x00, 0xa4, 0x94, 0x1e, 0x02, //ц
    0x00, 0xa4, 0xe4, 0x10, 0x00, //ч
    0x00, 0xd4, 0x5a, 0x3f, 0x00, //ш
    0x00, 0xd4, 0x5a, 0x3f, 0x04, //щ
    0x00, 0x0c, 0xa3, 0x0c, 0x00, //ъ
    0x00, 0xa4, 0xd5, 0x16, 0x00, //ы
    0x00, 0x84, 0x93, 0x0e, 0x00, //ь
    0x00, 0x18, 0x86, 0x0c, 0x00, //э
    0x00, 0x94, 0xb5, 0x0a, 0x00, //ю
    0x00, 0x98, 0x62, 0x0a, 0x00, //я

};

const uint16_t Default5x7_offset [] =
{
    0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 115, 120, 125, 130, 135, 140, 145, 150, 155, 160, 165, 170, 175, 180, 185, 190, 195, 200, 205, 210, 215, 220, 225, 230, 235, 240, 245, 250, 255, 260, 265, 270, 275, 280, 285, 290, 295, 300, 305, 310, 315, 320, 325, 330, 335, 340, 345, 350, 355, 360, 365, 370, 375, 380, 385, 390, 395, 400, 405, 410, 415, 420, 425, 430, 435, 440, 445, 450, 455, 460, 465, 470, 475, 480, 485, 490, 495, 500, 505, 510, 515, 520, 525, 530, 535, 540, 545, 550, 555, 560, 565, 570, 575, 580, 585, 590, 595, 600, 605, 610, 615, 620, 625, 630, 635, 640, 645, 650, 655, 660, 665, 670, 675, 680, 685, 690, 695, 700, 705, 710, 715, 720, 725, 730, 735, 740, 745, 750, 755, 760, 765, 770, 775, 780, 785, 790
};

#if emHMI_UNICODE
const uint16_t Default5x7_unicode [] =
{
    1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103
};
#endif

const emHMIFont F_Default5x7 = {
    .table      = Default5x7_table,
    .width      = 5,
    .height     = 7,
    .char_width = 0,
    .char_index = Default5x7_offset,
    .offset     = 32,
    .num_char   = 95,
    .space_char = 0,
#if emHMI_UNICODE
    .unicode_index = Default5x7_unicode,
    .num_uni       = 159,
#endif
};

#endif

#endif
