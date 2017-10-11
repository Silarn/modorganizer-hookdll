/*
Mod Organizer API hooking

Copyright (C) 2012 Sebastian Herbord. All rights reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 3 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include "hookdll/disasm_table.h"

const TableEntry table1[] = {
    /*  0 */ {"          add", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
              DEFAULT_COPY},
    /*  1 */
    {"          add", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  2 */
    {"          add", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  3 */
    {"          add", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  4 */
    {"          add", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  5 */
    {"          add", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /*  6 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  7 */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  8 */
    {"           or", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  9 */
    {"           or", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  a */
    {"           or", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  b */
    {"           or", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  c */
    {"           or", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  d */
    {"           or", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /*  e */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  f */ {"2-byte opcode", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 10 */
    {"          adc", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 11 */
    {"          adc", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 12 */
    {"          adc", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 13 */
    {"          adc", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 14 */
    {"          adc", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 15 */
    {"          adc", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* 16 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 17 */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 18 */
    {"          sbb", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 19 */
    {"          sbb", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 1a */
    {"          sbb", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 1b */
    {"          sbb", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 1c */
    {"          sbb", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 1d */
    {"          sbb", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* 1e */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 1f */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 20 */
    {"          and", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 21 */
    {"          and", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 22 */
    {"          and", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 23 */
    {"          and", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 24 */
    {"          and", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 25 */
    {"          and", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* 26 */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 27 */ {"          daa", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 28 */
    {"          sub", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 29 */
    {"          sub", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 2a */
    {"          sub", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 2b */
    {"          sub", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 2c */
    {"          sub", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 2d */
    {"          sub", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* 2e */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 2f */ {"          das", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 30 */
    {"          xor", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 31 */
    {"          xor", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 32 */
    {"          xor", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 33 */
    {"          xor", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 34 */
    {"          xor", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 35 */
    {"          xor", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* 36 */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 37 */ {"          aaa", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 38 */
    {"          cmp", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 39 */
    {"          cmp", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 3a */
    {"          cmp", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 3b */
    {"          cmp", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 3c */
    {"          cmp", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 3d */
    {"          cmp", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* 3e */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 3f */ {"          aas", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 40 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 41 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 42 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 43 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 44 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 45 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 46 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 47 */
    {"          inc", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 48 */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 49 */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 4a */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 4b */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 4c */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 4d */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 4e */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 4f */
    {"          dec", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 50 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 51 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 52 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 53 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 54 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 55 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 56 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 57 */
    {"         push", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 58 */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 59 */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 5a */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 5b */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 5c */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 5d */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 5e */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 5f */
    {"          pop", OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 60 */ {"      pusha%d", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 61 */ {"       popa%d", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 62 */
    {"        bound", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_MEMORY, OPS_BOUND, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 63 */
    {"         arpl", OPT_RM_OPERAND, OPS_WORD, OPT_RM_REG, OPS_WORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 64 */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 65 */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 66 */
    {"size override", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 67 */
    {"size override", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* 68 */
    {"         push", OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 69 */
    {"         imul", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_WORDORDWORD,
     0 | HASRM, DEFAULT_COPY},
    /* 6a */
    {"         push", OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 6b */
    {"         imul", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_BYTE,
     0 | HASRM, DEFAULT_COPY},
    /* 6c */ {"         insb", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 6d */ {"       ins%ew", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 6e */ {"        outsb", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 6f */ {"      outs%ew", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 70 */
    {"           jo", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 71 */
    {"          jno", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 72 */
    {"           jc", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 73 */
    {"          jnc", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 74 */
    {"           je", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 75 */
    {"          jne", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 76 */
    {"          jbe", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 77 */
    {"           ja", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 78 */
    {"           js", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 79 */
    {"          jns", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 7a */
    {"          jpe", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 7b */
    {"          jpo", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 7c */
    {"           jl", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 7d */
    {"          jge", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 7e */
    {"          jle", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 7f */
    {"           jg", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 80 */
    {"  r/m group 0", OPT_RM_OPERAND, OPS_BYTE, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* 81 */
    {"  r/m group 0", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr,
     0 | CGROUP, DEFAULT_COPY},
    /* 82 */
    {"  r/m group 0", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* 83 */
    {"  r/m group 0", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* 84 */
    {"         test", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 85 */
    {"         test", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 86 */
    {"         xchg", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 87 */
    {"         xchg", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 88 */
    {"          mov", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 89 */
    {"          mov", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 8a */
    {"          mov", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 8b */
    {"          mov", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 8c */
    {"          mov", OPT_RM_OPERAND, OPS_WORD, OPT_RM_SEGREG, OPS_WORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 8d */
    {"          lea", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_MEMORY, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 8e */
    {"          mov", OPT_RM_SEGREG, OPS_WORD, OPT_RM_OPERAND, OPS_WORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 8f */
    {"          pop", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 90 */ {"          nop", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 91 */
    {"         xchg", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 92 */
    {"         xchg", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 93 */
    {"         xchg", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 94 */
    {"         xchg", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 95 */
    {"         xchg", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 96 */
    {"         xchg", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 97 */
    {"         xchg", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 98 */ {"          cbw", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 99 */ {"          cwd", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 9a */
    {"         call", OPT_ADDR, OPS_WORD_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 9b */ {"        fwait", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 9c */ {"      pushf%d", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 9d */ {"       popf%d", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 9e */ {"         sahf", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 9f */ {"         lahf", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a0 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_OFFSETONLY, OPS_BYTEORWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* a1 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_OFFSETONLY, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* a2 */
    {"          mov", OPT_OFFSETONLY, OPS_BYTEORWORD, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* a3 */
    {"          mov", OPT_OFFSETONLY, OPS_WORDORDWORD, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* a4 */ {"        movsb", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a5 */ {"       movs%w", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a6 */ {"        cmpsb", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a7 */ {"       cmps%w", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a8 */
    {"         test", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a9 */
    {"         test", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* aa */ {"        stosb", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ab */ {"       stos%w", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ac */ {"        lodsb", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ad */ {"       lods%w", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ae */ {"        scasb", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* af */ {"       scas%w", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b0 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b1 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b2 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b3 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b4 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b5 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b6 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b7 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* b8 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* b9 */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* ba */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* bb */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* bc */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* bd */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* be */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* bf */
    {"          mov", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0,
     DEFAULT_COPY},
    /* c0 */
    {"  r/m group 1", OPT_RM_OPERAND, OPS_BYTE, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* c1 */
    {"  r/m group 1", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* c2 */
    {"          ret", OPT_IMMEDIATE, OPS_WORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* c3 */ {"          ret", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* c4 */
    {"          les", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_MEMORY, OPS_WORD_WORDORDWORD, OPT_NOOPT, OPS_nullptr,
     0 | HASRM, DEFAULT_COPY},
    /* c5 */
    {"          lds", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_MEMORY, OPS_WORD_WORDORDWORD, OPT_NOOPT, OPS_nullptr,
     0 | HASRM, DEFAULT_COPY},
    /* c6 */
    {"          mov", OPT_RM_OPERAND, OPS_BYTE, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* c7 */
    {"          mov", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr,
     0 | HASRM, DEFAULT_COPY},
    /* c8 */
    {"        enter", OPT_IMMEDIATE, OPS_WORD, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* c9 */ {"        leave", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ca */
    {"         retf", OPT_IMMEDIATE, OPS_WORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cb */ {"         retf", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cc */ {"          int", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cd */
    {"          int", OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ce */ {"         into", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cf */ {"         iret", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* d0 */
    {"  r/m group 1", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* d1 */
    {"  r/m group 1", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* d2 */
    {"  r/m group 1", OPT_RM_OPERAND, OPS_BYTE, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* d3 */
    {"  r/m group 1", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* d4 */
    {"          aam", OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* d5 */
    {"          aad", OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* d6 */ {"       setalc", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* d7 */ {"         xlat", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* d8 */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* d9 */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* da */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* db */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* dc */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* dd */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* de */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* df */
    {"          esc", OPT_NOOPT, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e0 */
    {"       loopne", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e1 */
    {"        loope", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e2 */
    {"         loop", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e3 */
    {"         jcxz", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e4 */
    {"           in", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e5 */
    {"           in", OPT_FIXEDREG, OPS_nullptr, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e6 */
    {"          out", OPT_IMMEDIATE, OPS_BYTE, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e7 */
    {"          out", OPT_IMMEDIATE, OPS_BYTE, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e8 */
    {"         call", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* e9 */
    {"          jmp", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ea */
    {"          jmp", OPT_ADDR, OPS_WORD_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* eb */
    {"          jmp", OPT_RELOFFSET, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ec */
    {"           in", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ed */
    {"           in", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ee */
    {"          out", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ef */
    {"          out", OPT_FIXEDREG, OPS_nullptr, OPT_FIXEDREG, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* f0 */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* f1 */
    {"    undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL,
     DEFAULT_COPY},
    /* f2 */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* f3 */
    {"       prefix", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | PREFIX, DEFAULT_COPY},
    /* f4 */ {"          hlt", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* f5 */ {"          cmc", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* f6 */
    {"  r/m group 2", OPT_RM_OPERAND, OPS_BYTE, OPT_IMMEDIATE, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* f7 */
    {"  r/m group 2", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr,
     0 | CGROUP, DEFAULT_COPY},
    /* f8 */ {"          clc", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* f9 */ {"          stc", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* fa */ {"          cli", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* fb */ {"          sti", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* fc */ {"          cld", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* fd */ {"          std", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* fe */
    {"  r/m group 3", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /* ff */
    {"  r/m group 4", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY}};

// TODO: Add SIMD instruktionen
const TableEntry table2[] = {
    /*  0 */ {"r/m group 5", OPT_RM_OPERAND, OPS_WORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
              DEFAULT_COPY},
    /*  1 */
    {"r/m group 6", OPT_RM_MEMORY, OPS_WORD_DWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP,
     DEFAULT_COPY},
    /*  2 */
    {"        lar", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  3 */
    {"        lsl", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /*  4 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /*  5 */ {"    syscall", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  6 */ {"       clts", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  7 */ {"     sysret", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  8 */ {"       invd", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  9 */ {"     wbinvd", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /*  a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /*  b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /*  c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /*  d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /*  e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /*  f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 10 */
    {"        mov", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 11 */
    {"        mov", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 12 */
    {"        mov", OPT_RM_GPREG, OPS_BYTE, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 13 */
    {"        mov", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 14 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 15 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 16 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 17 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 18 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 19 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 1a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 1b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 1c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 1d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 1e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 1f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 20 */
    {"        mov", OPT_RM_REG, OPS_DWORD, OPT_RM_CONTROLREG, OPS_DWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 21 */
    {"        mov", OPT_RM_REG, OPS_DWORD, OPT_RM_DEBUGREG, OPS_DWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 22 */
    {"        mov", OPT_RM_CONTROLREG, OPS_DWORD, OPT_RM_REG, OPS_DWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* 23 */
    {"        mov", OPT_RM_DEBUGREG, OPS_DWORD, OPT_RM_REG, OPS_DWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 24 */
    {"        mov", OPT_RM_REG, OPS_DWORD, OPT_RM_TESTREG, OPS_DWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 25 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 26 */
    {"        mov", OPT_RM_TESTREG, OPS_DWORD, OPT_RM_REG, OPS_DWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 27 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 28 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 29 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 2a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 2b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 2c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 2d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 2e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 2f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 30 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 31 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 32 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 33 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 34 */
    {"   sysenter", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 35 */
    {"    sysexit", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 36 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 37 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 38 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 39 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 3a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 3b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 3c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 3d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 3e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 3f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 40 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 41 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 42 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 43 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 44 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 45 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 46 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 47 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 48 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 49 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 4a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 4b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 4c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 4d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 4e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 4f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 50 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 51 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 52 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 53 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 54 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 55 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 56 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 57 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 58 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 59 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 5a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 5b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 5c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 5d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 5e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 5f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 60 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 61 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 62 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 63 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 64 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 65 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 66 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 67 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 68 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 69 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 6a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 6b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 6c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 6d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 6e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 6f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 70 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 71 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 72 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 73 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 74 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 75 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 76 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 77 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 78 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 79 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 7a */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 7b */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 7c */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 7d */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 7e */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 7f */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* 80 */
    {"         jo", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 81 */
    {"        jno", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 82 */
    {"         jb", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 83 */
    {"        jnb", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 84 */
    {"         jz", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 85 */
    {"        jnz", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 86 */
    {"        jbe", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 87 */
    {"         ja", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 88 */
    {"         js", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 89 */
    {"        jns", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 8a */
    {"         jp", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 8b */
    {"        jnp", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 8c */
    {"         jl", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 8d */
    {"        jge", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 8e */
    {"        jle", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 8f */
    {"         jg", OPT_RELOFFSET, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* 90 */
    {"       seto", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 91 */
    {"      setno", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 92 */
    {"       setc", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 93 */
    {"      setnc", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 94 */
    {"       setz", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 95 */
    {"      setnz", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 96 */
    {"      setbe", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 97 */
    {"     setnbe", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 98 */
    {"       sets", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 99 */
    {"      setns", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 9a */
    {"       setp", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 9b */
    {"      setnp", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 9c */
    {"       setl", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 9d */
    {"      setge", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 9e */
    {"      setle", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* 9f */
    {"       setg", OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* a0 */ {"       push", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a1 */ {"        pop", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a2 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* a3 */
    {"         bt", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* a4 */
    {"       shld", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_BYTE, 0 | HASRM,
     DEFAULT_COPY},
    /* a5 */
    {"       shld", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_FIXEDREG, OPS_nullptr,
     0 | HASRM, DEFAULT_COPY},
    /* a6 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* a7 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* a8 */ {"       push", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* a9 */ {"        pop", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* aa */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ab */
    {"        bts", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* ac */
    {"       shrd", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_IMMEDIATE, OPS_BYTE, 0 | HASRM,
     DEFAULT_COPY},
    /* ad */
    {"       shrd", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_FIXEDREG, OPS_nullptr,
     0 | HASRM, DEFAULT_COPY},
    /* ae */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* af */
    {"       imul", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b0 */
    {"    cmpxchg", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* b1 */
    {"    cmpxchg", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b2 */
    {"        lss", OPT_RM_MEMORY, OPS_WORD_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b3 */
    {"        btr", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b4 */
    {"        lfs", OPT_RM_MEMORY, OPS_WORD_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b5 */
    {"        lgs", OPT_RM_MEMORY, OPS_WORD_WORDORDWORD, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b6 */
    {"      movzx", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b7 */
    {"      movzx", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* b8 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* b9 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ba */
    {"r/m group 7", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | CGROUP, DEFAULT_COPY},
    /* bb */
    {"        btc", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* bc */
    {"        bsf", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* bd */
    {"        bsr", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* be */
    {"      movsx", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* bf */
    {"      movsx", OPT_RM_GPREG, OPS_WORDORDWORD, OPT_RM_OPERAND, OPS_WORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* c0 */
    {"       xadd", OPT_RM_OPERAND, OPS_BYTE, OPT_RM_GPREG, OPS_BYTE, OPT_NOOPT, OPS_nullptr, 0 | HASRM, DEFAULT_COPY},
    /* c1 */
    {"       xadd", OPT_RM_OPERAND, OPS_WORDORDWORD, OPT_RM_GPREG, OPS_WORDORDWORD, OPT_NOOPT, OPS_nullptr, 0 | HASRM,
     DEFAULT_COPY},
    /* c2 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* c3 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* c4 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* c5 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* c6 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* c7 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* c8 */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* c9 */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ca */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cb */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cc */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cd */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* ce */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* cf */ {"      bswap", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
    /* d0 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d1 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d2 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d3 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d4 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d5 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d6 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d7 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d8 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* d9 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* da */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* db */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* dc */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* dd */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* de */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* df */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e0 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e1 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e2 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e3 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e4 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e5 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e6 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e7 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e8 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* e9 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ea */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* eb */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ec */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ed */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ee */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ef */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f0 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f1 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f2 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f3 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f4 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f5 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f6 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f7 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f8 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* f9 */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* fa */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* fb */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* fc */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* fd */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* fe */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
    /* ff */
    {"  undefined", OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY}};

// stores which opcode maps to which group
const int optogroup[17][2] = {{0x80, 0}, {0x81, 0}, {0x82, 0}, {0x83, 0}, {0xC0, 1}, {0xC1, 1},
                              {0xD0, 1}, {0xD1, 1}, {0xD2, 1}, {0xD3, 1}, {0xF6, 2}, {0xF7, 2},
                              {0xFE, 3}, {0xFF, 4}, {0x00, 5}, {0x01, 6}, {0xBA, 7}};

const TableEntry groups[8][8] = {
    /* group 0 */ {
        /* 0 */ {"add", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
        /* 1 */ {" or", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
        /* 2 */ {"adc", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
        /* 3 */ {"sbb", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
        /* 4 */ {"and", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
        /* 5 */ {"sub", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
        /* 6 */ {"xor", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
        /* 7 */ {"cmp", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY}},
    /* group 1 */
    {/* 0 */ {"rol", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 1 */ {"ror", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 2 */ {"rcl", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 3 */ {"rcr", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 4 */ {"shl", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 5 */ {"shr", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 6 */ {"shl", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 7 */ {"sar", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY}},
    /* group 2 */
    {/* 0 */ {"test", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 1 */ {"test", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 2 */ {" not", OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 3 */ {" neg", OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 4 */ {" mul", OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 5 */ {"imul", OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 6 */ {" div", OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 7 */ {"idiv", OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY}},
    /* group 3 */
    {/* 0 */ {"      inc", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 1 */ {"      dec", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 2 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 3 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 4 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 5 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 6 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 7 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY}},
    /* group 4 */
    {/* 0 */ {"      inc", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 1 */ {"      dec", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 2 */ {"     call", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 3 */
     {"     call", OPT_CGROUP, OPS_WORD_WORDORDWORD, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 4 */ {"      jmp", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 5 */
     {"      jmp", OPT_CGROUP, OPS_WORD_WORDORDWORD, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 6 */ {"     push", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 7 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY}},
    /* group 5 */
    {/* 0 */ {"     sldt", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 1 */ {"      str", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 2 */ {"     lldt", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 3 */ {"      ltr", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 4 */ {"     verr", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 5 */ {"     verw", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 6 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 7 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY}},
    /* group 6 */
    {/* 0 */ {"     sgdt", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 1 */ {"     sidt", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 2 */ {"     lgdt", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 3 */ {"     lidt", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 4 */ {"     smsw", OPT_RM_OPERAND, OPS_WORD, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 5 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 6 */ {"     lmsw", OPT_RM_OPERAND, OPS_WORD, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 7 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY}},
    /* group 7 */
    {/* 0 */ {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL,
              DEFAULT_COPY},
     /* 1 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 2 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 3 */
     {"undefined", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0 | ILLEGAL, DEFAULT_COPY},
     /* 4 */ {"       bt", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 5 */ {"      bts", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 6 */ {"      btr", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY},
     /* 7 */ {"      btc", OPT_CGROUP, OPS_CGROUP, OPT_CGROUP, OPS_CGROUP, OPT_NOOPT, OPS_nullptr, 0, DEFAULT_COPY}}};
