/*
 * Font name:   Default6x10
 * Font size:   10
 * Font height: 10
 */

#ifndef Default6x10_H
#define Default6x10_H
#include "em_text.h"
#include "fonts.h"

#ifdef emHMI_FONTS_DEFAULT6X10

const uint8_t Default6x10_table [] =
{
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 
    0x00, 0x41, 0x10, 0x04, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //!
    0x80, 0xa2, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //"
    0x80, 0xa2, 0x7c, 0xca, 0xa7, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //#
    0x00, 0xe1, 0x14, 0x0e, 0xe5, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //$
    0x80, 0x54, 0x29, 0x84, 0x52, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //%
    0x80, 0x50, 0x14, 0x42, 0x95, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //&
    0x00, 0x41, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //'
    0x00, 0x42, 0x08, 0x82, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //(
    0x80, 0x40, 0x20, 0x08, 0x42, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //)
    0x00, 0x10, 0x29, 0x9f, 0x12, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //*
    0x00, 0x40, 0x10, 0x1f, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //+
    0x00, 0x00, 0x00, 0x00, 0xc0, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //,
    0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //-
    0x00, 0x00, 0x00, 0x00, 0x40, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //.
    0x00, 0x04, 0x21, 0x84, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, ///
    0x00, 0xa1, 0x44, 0x51, 0xa4, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //0
    0x00, 0x61, 0x14, 0x04, 0x41, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //1
    0x80, 0x13, 0x41, 0x8c, 0x10, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //2
    0xc0, 0x07, 0x21, 0x0c, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //3
    0x00, 0xc2, 0x28, 0xc9, 0x87, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //4
    0xc0, 0x17, 0x34, 0x13, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //5
    0x00, 0x23, 0x04, 0xcd, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //6
    0xc0, 0x07, 0x21, 0x08, 0x21, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //7
    0x80, 0x13, 0x45, 0x4e, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //8
    0x80, 0x13, 0x65, 0x16, 0x84, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //9
    0x00, 0x40, 0x38, 0x04, 0x40, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //:
    0x00, 0x40, 0x38, 0x04, 0xc0, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //;
    0x00, 0x84, 0x10, 0x02, 0x81, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //<
    0x00, 0x00, 0x7c, 0xc0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //=
    0x80, 0x40, 0x20, 0x10, 0x42, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //>
    0x80, 0x13, 0x21, 0x04, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //?
    0x80, 0x13, 0x65, 0x55, 0x13, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //@
    0x00, 0xa1, 0x44, 0xd1, 0x17, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //A
    0xc0, 0x23, 0x49, 0x8e, 0x24, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //B
    0x80, 0x13, 0x05, 0x41, 0x10, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //C
    0xc0, 0x23, 0x49, 0x92, 0x24, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //D
    0xc0, 0x17, 0x04, 0x4f, 0x10, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //E
    0xc0, 0x17, 0x04, 0x4f, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //F
    0x80, 0x13, 0x05, 0x41, 0x16, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //G
    0x40, 0x14, 0x45, 0x5f, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //H
    0x80, 0x43, 0x10, 0x04, 0x41, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //I
    0x00, 0x87, 0x20, 0x08, 0x92, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //J
    0x40, 0x94, 0x14, 0x43, 0x91, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //K
    0x40, 0x10, 0x04, 0x41, 0x10, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //L
    0x40, 0x14, 0x6d, 0x55, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //M
    0x40, 0x14, 0x4d, 0x55, 0x16, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //N
    0x80, 0x13, 0x45, 0x51, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //O
    0xc0, 0x13, 0x45, 0x4f, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //P
    0x80, 0x13, 0x45, 0x51, 0x54, 0x39, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Q
    0xc0, 0x13, 0x45, 0x4f, 0x91, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //R
    0x80, 0x13, 0x05, 0x0e, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //S
    0xc0, 0x47, 0x10, 0x04, 0x41, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //T
    0x40, 0x14, 0x45, 0x51, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //U
    0x40, 0x14, 0x45, 0x8a, 0xa2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //V
    0x40, 0x14, 0x45, 0x55, 0xb5, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //W
    0x40, 0x14, 0x29, 0x84, 0x12, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //X
    0x40, 0x14, 0x29, 0x04, 0x41, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Y
    0xc0, 0x07, 0x21, 0x84, 0x10, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Z
    0x80, 0x23, 0x08, 0x82, 0x20, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //[
    0x40, 0x10, 0x08, 0x04, 0x02, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x80, 0x83, 0x20, 0x08, 0x82, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //]
    0x00, 0xa1, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //^
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //_
    0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //`
    0x00, 0x00, 0x38, 0x90, 0x17, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //a
    0x40, 0x10, 0x34, 0x53, 0x34, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //b
    0x00, 0x00, 0x38, 0x51, 0x10, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //c
    0x00, 0x04, 0x59, 0x59, 0x94, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //d
    0x00, 0x00, 0x38, 0xd1, 0x17, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //e
    0x00, 0x23, 0x09, 0x8f, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //f
    0x00, 0x00, 0x78, 0x51, 0xe4, 0x41, 0x91, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //g
    0x40, 0x10, 0x34, 0x53, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //h
    0x00, 0x01, 0x18, 0x04, 0x41, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //i
    0x00, 0x04, 0x60, 0x10, 0x04, 0x49, 0x12, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //j
    0x40, 0x10, 0x44, 0xc9, 0x91, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //k
    0x80, 0x41, 0x10, 0x04, 0x41, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //l
    0x00, 0x00, 0x2c, 0x55, 0x55, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //m
    0x00, 0x00, 0x34, 0x53, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //n
    0x00, 0x00, 0x38, 0x51, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //o
    0x00, 0x00, 0x34, 0x53, 0x34, 0x35, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //p
    0x00, 0x00, 0x58, 0x59, 0x94, 0x59, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //q
    0x00, 0x00, 0x34, 0x53, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //r
    0x00, 0x00, 0x38, 0x81, 0x03, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //s
    0x80, 0x20, 0x3c, 0x82, 0x20, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //t
    0x00, 0x00, 0x44, 0x51, 0x94, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //u
    0x00, 0x00, 0x44, 0x91, 0xa2, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //v
    0x00, 0x00, 0x44, 0x51, 0x55, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //w
    0x00, 0x00, 0x44, 0x0a, 0xa1, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //x
    0x00, 0x00, 0x44, 0x51, 0x66, 0x41, 0x91, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //y
    0x00, 0x00, 0x7c, 0x08, 0x21, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //z
    0x00, 0x46, 0x20, 0x06, 0x42, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //{
    0x00, 0x41, 0x10, 0x04, 0x41, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //|
    0x80, 0x81, 0x10, 0x18, 0x81, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //}
    0x80, 0x54, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //~
    0x00, 0xa1, 0x44, 0xd1, 0x17, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //А
    0xc0, 0x13, 0x04, 0x4f, 0x14, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Б
    0xc0, 0x13, 0x45, 0x4f, 0x14, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //В
    0xc0, 0x17, 0x04, 0x41, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Г
    0x00, 0x46, 0x51, 0x92, 0x24, 0x7d, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Д
    0xc0, 0x17, 0x04, 0x4f, 0x10, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Е
    0x40, 0x55, 0x55, 0x4e, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ж
    0x80, 0x13, 0x41, 0x0c, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //З
    0x40, 0x14, 0x65, 0xd5, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //И
    0x0a, 0x11, 0x65, 0xd5, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Й
    0x40, 0x94, 0x14, 0x43, 0x91, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //К
    0x00, 0x27, 0x49, 0x92, 0x24, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Л
    0x40, 0x14, 0x6d, 0x55, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //М
    0x40, 0x14, 0x45, 0x5f, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Н
    0x80, 0x13, 0x45, 0x51, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //О
    0xc0, 0x17, 0x45, 0x51, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //П
    0xc0, 0x13, 0x45, 0x4f, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Р
    0x80, 0x13, 0x05, 0x41, 0x10, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //С
    0xc0, 0x47, 0x10, 0x04, 0x41, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Т
    0x40, 0x14, 0x45, 0x0a, 0x21, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //У
    0x00, 0xe1, 0x54, 0x55, 0xe5, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ф
    0x40, 0x14, 0x29, 0x84, 0x12, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Х
    0x40, 0x92, 0x24, 0x49, 0x92, 0x7c, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ц
    0x40, 0x14, 0x45, 0x1e, 0x04, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ч
    0x40, 0x55, 0x55, 0x55, 0x55, 0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ш
    0x40, 0x55, 0x55, 0x55, 0x55, 0x7d, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Щ
    0xc0, 0x20, 0x08, 0x8e, 0x24, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ъ
    0x40, 0x14, 0x45, 0x57, 0x96, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ы
    0x80, 0x20, 0x08, 0x8e, 0x24, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ь
    0x80, 0x13, 0x41, 0x1c, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Э
    0x40, 0x52, 0x55, 0x57, 0x55, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Ю
    0x80, 0x17, 0x45, 0x1e, 0x25, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //Я
    0x00, 0x00, 0x38, 0x90, 0x17, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //а
    0x80, 0x17, 0x38, 0x51, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //б
    0x00, 0x00, 0x3c, 0xd1, 0x13, 0x3d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //в
    0x00, 0x00, 0x78, 0x82, 0x20, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //г
    0x00, 0x00, 0x30, 0x8a, 0xa2, 0x7c, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //д
    0x00, 0x00, 0x38, 0xd1, 0x17, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //е
    0x00, 0x00, 0x54, 0x95, 0x53, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ж
    0x00, 0x00, 0x38, 0x11, 0x13, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //з
    0x00, 0x00, 0x44, 0x59, 0x35, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //и
    0x80, 0x42, 0x44, 0x59, 0x35, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //й
    0x00, 0x00, 0x44, 0xc9, 0x91, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //к
    0x00, 0x00, 0x70, 0x92, 0x24, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //л
    0x00, 0x00, 0x44, 0x5b, 0x15, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //м
    0x00, 0x00, 0x44, 0xd1, 0x17, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //н
    0x00, 0x00, 0x38, 0x51, 0x14, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //о
    0x00, 0x00, 0x7c, 0x51, 0x14, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //п
    0x00, 0x00, 0x34, 0x53, 0x34, 0x35, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //р
    0x00, 0x00, 0x38, 0x51, 0x10, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //с
    0x00, 0x00, 0x7c, 0x04, 0x41, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //т
    0x00, 0x00, 0x44, 0x51, 0xe4, 0x41, 0x91, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //у
    0x00, 0x41, 0x38, 0x55, 0x55, 0x39, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ф
    0x00, 0x00, 0x44, 0x0a, 0xa1, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //х
    0x00, 0x00, 0x24, 0x49, 0x92, 0x7c, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ц
    0x00, 0x00, 0x44, 0x91, 0x07, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ч
    0x00, 0x00, 0x54, 0x55, 0x55, 0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ш
    0x00, 0x00, 0x54, 0x55, 0x55, 0x7d, 0x10, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //щ
    0x00, 0x00, 0x0c, 0x82, 0x23, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ъ
    0x00, 0x00, 0x44, 0xd1, 0x95, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ы
    0x00, 0x00, 0x08, 0x82, 0x23, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ь
    0x00, 0x00, 0x38, 0x11, 0x17, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //э
    0x00, 0x00, 0x24, 0xd5, 0x55, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //ю
    0x00, 0x00, 0x78, 0x91, 0x17, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //я

};

const uint16_t Default6x10_offset [] =
{
    0, 15, 30, 45, 60, 75, 90, 105, 120, 135, 150, 165, 180, 195, 210, 225, 240, 255, 270, 285, 300, 315, 330, 345, 360, 375, 390, 405, 420, 435, 450, 465, 480, 495, 510, 525, 540, 555, 570, 585, 600, 615, 630, 645, 660, 675, 690, 705, 720, 735, 750, 765, 780, 795, 810, 825, 840, 855, 870, 885, 900, 915, 930, 945, 960, 975, 990, 1005, 1020, 1035, 1050, 1065, 1080, 1095, 1110, 1125, 1140, 1155, 1170, 1185, 1200, 1215, 1230, 1245, 1260, 1275, 1290, 1305, 1320, 1335, 1350, 1365, 1380, 1395, 1410, 1425, 1440, 1455, 1470, 1485, 1500, 1515, 1530, 1545, 1560, 1575, 1590, 1605, 1620, 1635, 1650, 1665, 1680, 1695, 1710, 1725, 1740, 1755, 1770, 1785, 1800, 1815, 1830, 1845, 1860, 1875, 1890, 1905, 1920, 1935, 1950, 1965, 1980, 1995, 2010, 2025, 2040, 2055, 2070, 2085, 2100, 2115, 2130, 2145, 2160, 2175, 2190, 2205, 2220, 2235, 2250, 2265, 2280, 2295, 2310, 2325, 2340, 2355, 2370
};

#if emHMI_UNICODE
const uint16_t Default6x10_unicode [] =
{
    1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103
};
#endif

const emHMIFont F_Default6x10 = {
    .table      = Default6x10_table,
    .width      = 6,
    .height     = 10,
    .char_width = 0,
    .char_index = Default6x10_offset,
    .offset     = 32,
    .num_char   = 95,
    .space_char = 0,
#if emHMI_UNICODE
    .unicode_index = Default6x10_unicode,
    .num_uni       = 159,
#endif
};

#endif

#endif
