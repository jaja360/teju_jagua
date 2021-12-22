// This file is auto-generated. DO NOT EDIT IT.

#include <stdint.h>

#ifndef __cplusplus
#include <stdbool.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  bool    negative;
  int32_t exponent;
  uint32_t mantissa;
} ieee32_t;

typedef uint32_t suint_t;
typedef uint64_t duint_t;
typedef ieee32_t rep_t;

enum {
  mantissa_size     = 23,
  exponent_min      = -149,
  exponent_critical = 10,
};

static suint_t const mantissa_min = 8388608;

static struct {
  suint_t const upper;
  suint_t const lower;
  uint32_t const shift;
} scalers[] = {
  { 0x0000b35d, 0xbf821ae5, 47 }, // -149
  { 0x0000b35d, 0xbf821ae5, 46 }, // -148
  { 0x0000b35d, 0xbf821ae5, 45 }, // -147
  { 0x00047bf1, 0x9673df53, 50 }, // -146
  { 0x008f7e32, 0xce7bea5d, 54 }, // -145
  { 0x008f7e32, 0xce7bea5d, 53 }, // -144
  { 0x008f7e32, 0xce7bea5d, 52 }, // -143
  { 0x00003965, 0xadec3191, 45 }, // -142
  { 0x00003965, 0xadec3191, 44 }, // -141
  { 0x00003965, 0xadec3191, 43 }, // -140
  { 0x0002deaf, 0x189c140d, 49 }, // -139
  { 0x000b7abc, 0x62705031, 50 }, // -138
  { 0x000b7abc, 0x62705031, 49 }, // -137
  { 0x00024bbf, 0x46e3433d, 49 }, // -136
  { 0x00024bbf, 0x46e3433d, 48 }, // -135
  { 0x00024bbf, 0x46e3433d, 47 }, // -134
  { 0x00024bbf, 0x46e3433d, 46 }, // -133
  { 0x000eb194, 0xf8e1ae53, 51 }, // -132
  { 0x000eb194, 0xf8e1ae53, 50 }, // -131
  { 0x000eb194, 0xf8e1ae53, 49 }, // -130
  { 0x0000bc14, 0x3fa4e251, 47 }, // -129
  { 0x0000bc14, 0x3fa4e251, 46 }, // -128
  { 0x0000bc14, 0x3fa4e251, 45 }, // -127
  { 0x000259da, 0x6542d437, 49 }, // -126
  { 0x000259da, 0x6542d437, 48 }, // -125
  { 0x000259da, 0x6542d437, 47 }, // -124
  { 0x00096769, 0x950b50d9, 48 }, // -123
  { 0x000785ee, 0x10d5da47, 50 }, // -122
  { 0x003c2f70, 0x86aed237, 52 }, // -121
  { 0x003c2f70, 0x86aed237, 51 }, // -120
  { 0x0003025f, 0x39ef241d, 49 }, // -119
  { 0x0003025f, 0x39ef241d, 48 }, // -118
  { 0x000604be, 0x73de4839, 48 }, // -117
  { 0x0002684c, 0x2e58e9b1, 49 }, // -116
  { 0x0002684c, 0x2e58e9b1, 48 }, // -115
  { 0x004d0985, 0xcb1d3609, 52 }, // -114
  { 0x004d0985, 0xcb1d3609, 51 }, // -113
  { 0x0001ed09, 0xbead87c1, 48 }, // -112
  { 0x0003da13, 0x7d5b0f81, 48 }, // -111
  { 0x0007b426, 0xfab61f01, 48 }, // -110
  { 0x0000c537, 0x1912364d, 47 }, // -109
  { 0x0000c537, 0x1912364d, 46 }, // -108
  { 0x000c5371, 0x912364cf, 49 }, // -107
  { 0x00009dc5, 0xada82b71, 47 }, // -106
  { 0x00027716, 0xb6a0adc3, 48 }, // -105
  { 0x00027716, 0xb6a0adc3, 47 }, // -104
  { 0x00027716, 0xb6a0adc3, 46 }, // -103
  { 0x00007e37, 0xbe2022c1, 46 }, // -102
  { 0x00007e37, 0xbe2022c1, 45 }, // -101
  { 0x000fc6f7, 0xc4045813, 49 }, // -100
  { 0x00064f96, 0x4e68233b, 50 }, // -99
  { 0x00064f96, 0x4e68233b, 49 }, // -98
  { 0x00064f96, 0x4e68233b, 48 }, // -97
  { 0x00050c78, 0x3eb9b5c9, 50 }, // -96
  { 0x00050c78, 0x3eb9b5c9, 49 }, // -95
  { 0x000a18f0, 0x7d736b91, 49 }, // -94
  { 0x000204fc, 0xe5e3e251, 49 }, // -93
  { 0x000204fc, 0xe5e3e251, 48 }, // -92
  { 0x000204fc, 0xe5e3e251, 47 }, // -91
  { 0x000204fc, 0xe5e3e251, 46 }, // -90
  { 0x00033b2e, 0x3c9fd081, 49 }, // -89
  { 0x0006765c, 0x793fa101, 49 }, // -88
  { 0x0006765c, 0x793fa101, 48 }, // -87
  { 0x000295be, 0x96e64067, 49 }, // -86
  { 0x000295be, 0x96e64067, 48 }, // -85
  { 0x000295be, 0x96e64067, 47 }, // -84
  { 0x000422ca, 0x8b0a00a5, 50 }, // -83
  { 0x000422ca, 0x8b0a00a5, 49 }, // -82
  { 0x00084595, 0x16140149, 49 }, // -81
  { 0x00084595, 0x16140149, 48 }, // -80
  { 0x00000d3c, 0x21bceccf, 43 }, // -79
  { 0x000d3c21, 0xbceccedb, 50 }, // -78
  { 0x000d3c21, 0xbceccedb, 49 }, // -77
  { 0x0000152d, 0x02c7e14b, 44 }, // -76
  { 0x0000152d, 0x02c7e14b, 43 }, // -75
  { 0x0000152d, 0x02c7e14b, 42 }, // -74
  { 0x00021e19, 0xe0c9bab3, 49 }, // -73
  { 0x00021e19, 0xe0c9bab3, 48 }, // -72
  { 0x00021e19, 0xe0c9bab3, 47 }, // -71
  { 0x0021e19e, 0x0c9bab25, 50 }, // -70
  { 0x000d8d72, 0x6b7177a9, 51 }, // -69
  { 0x000d8d72, 0x6b7177a9, 50 }, // -68
  { 0x000d8d72, 0x6b7177a9, 49 }, // -67
  { 0x00056bc7, 0x5e2d6311, 50 }, // -66
  { 0x00056bc7, 0x5e2d6311, 49 }, // -65
  { 0x00056bc7, 0x5e2d6311, 48 }, // -64
  { 0x00045639, 0x18244f41, 50 }, // -63
  { 0x001158e4, 0x60913d01, 51 }, // -62
  { 0x001158e4, 0x60913d01, 50 }, // -61
  { 0x001158e4, 0x60913d01, 49 }, // -60
  { 0x0001bc16, 0xd674ec81, 48 }, // -59
  { 0x003782da, 0xce9d9001, 52 }, // -58
  { 0x003782da, 0xce9d9001, 51 }, // -57
  { 0x000b1a2b, 0xc2ec5001, 51 }, // -56
  { 0x000b1a2b, 0xc2ec5001, 50 }, // -55
  { 0x000b1a2b, 0xc2ec5001, 49 }, // -54
  { 0x0002386f, 0x26fc1001, 49 }, // -53
  { 0x000470de, 0x4df82001, 49 }, // -52
  { 0x00470de4, 0xdf820001, 52 }, // -51
  { 0x00470de4, 0xdf820001, 51 }, // -50
  { 0x0038d7ea, 0x4c680001, 53 }, // -49
  { 0x0038d7ea, 0x4c680001, 52 }, // -48
  { 0x0038d7ea, 0x4c680001, 51 }, // -47
  { 0x0002d798, 0x83d20001, 49 }, // -46
  { 0x0002d798, 0x83d20001, 48 }, // -45
  { 0x0005af31, 0x07a40001, 48 }, // -44
  { 0x00048c27, 0x39500001, 50 }, // -43
  { 0x0012309c, 0xe5400001, 51 }, // -42
  { 0x0012309c, 0xe5400001, 50 }, // -41
  { 0x009184e7, 0x2a000001, 52 }, // -40
  { 0x000e8d4a, 0x51000001, 51 }, // -39
  { 0x000e8d4a, 0x51000001, 50 }, // -38
  { 0x000e8d4a, 0x51000001, 49 }, // -37
  { 0x0005d21d, 0xba000001, 50 }, // -36
  { 0x0005d21d, 0xba000001, 49 }, // -35
  { 0x0005d21d, 0xba000001, 48 }, // -34
  { 0x00012a05, 0xf2000001, 48 }, // -33
  { 0x00012a05, 0xf2000001, 47 }, // -32
  { 0x00012a05, 0xf2000001, 46 }, // -31
  { 0x00012a05, 0xf2000001, 45 }, // -30
  { 0x00003b9a, 0xca000001, 45 }, // -29
  { 0x00003b9a, 0xca000001, 44 }, // -28
  { 0x00003b9a, 0xca000001, 43 }, // -27
  { 0x00000beb, 0xc2000001, 43 }, // -26
  { 0x00000beb, 0xc2000001, 42 }, // -25
  { 0x00000beb, 0xc2000001, 41 }, // -24
  { 0x00000262, 0x5a000001, 41 }, // -23
  { 0x00000262, 0x5a000001, 40 }, // -22
  { 0x00000262, 0x5a000001, 39 }, // -21
  { 0x00000262, 0x5a000001, 38 }, // -20
  { 0x0000007a, 0x12000001, 38 }, // -19
  { 0x0000007a, 0x12000001, 37 }, // -18
  { 0x0000007a, 0x12000001, 36 }, // -17
  { 0x00000018, 0x6a000001, 36 }, // -16
  { 0x00000018, 0x6a000001, 35 }, // -15
  { 0x00000018, 0x6a000001, 34 }, // -14
  { 0x00000004, 0xe2000001, 34 }, // -13
  { 0x00000004, 0xe2000001, 33 }, // -12
  { 0x00000004, 0xe2000001, 32 }, // -11
  { 0x00000004, 0xe2000001, 31 }, // -10
  { 0x00000000, 0xfa000001, 31 }, // -9
  { 0x00000000, 0xfa000001, 30 }, // -8
  { 0x00000000, 0xfa000001, 29 }, // -7
  { 0x00000000, 0x32000001, 29 }, // -6
  { 0x00000000, 0x32000001, 28 }, // -5
  { 0x00000000, 0x64000001, 28 }, // -4
  { 0x00000000, 0x14000001, 28 }, // -3
  { 0x00000000, 0x28000001, 28 }, // -2
  { 0x00000000, 0x50000001, 28 }, // -1
  { 0x00000000, 0x10000001, 28 }, // 0
  { 0x00000000, 0x20000001, 28 }, // 1
  { 0x00000000, 0x40000001, 28 }, // 2
  { 0x00000000, 0x80000001, 28 }, // 3
  { 0x00000000, 0x0ccccccd, 27 }, // 4
  { 0x00000000, 0x0ccccccd, 26 }, // 5
  { 0x00000000, 0x66666667, 28 }, // 6
  { 0x00000000, 0x51eb851f, 30 }, // 7
  { 0x00000000, 0x51eb851f, 29 }, // 8
  { 0x00000000, 0x51eb851f, 28 }, // 9
  { 0x00000000, 0x10624dd3, 28 }, // 10
  { 0x00000002, 0x0c49ba5f, 32 }, // 11
  { 0x00000004, 0x189374bd, 32 }, // 12
  { 0x00000008, 0x3126e979, 32 }, // 13
  { 0x0000000d, 0x1b71758f, 35 }, // 14
  { 0x0000001a, 0x36e2eb1d, 35 }, // 15
  { 0x0000001a, 0x36e2eb1d, 34 }, // 16
  { 0x00000005, 0x3e2d6239, 34 }, // 17
  { 0x00000029, 0xf16b11c7, 36 }, // 18
  { 0x00000029, 0xf16b11c7, 35 }, // 19
  { 0x00000008, 0x637bd05b, 35 }, // 20
  { 0x0000010c, 0x6f7a0b5f, 39 }, // 21
  { 0x0000010c, 0x6f7a0b5f, 38 }, // 22
  { 0x0000010c, 0x6f7a0b5f, 37 }, // 23
  { 0x000001ad, 0x7f29abcb, 40 }, // 24
  { 0x000001ad, 0x7f29abcb, 39 }, // 25
  { 0x000001ad, 0x7f29abcb, 38 }, // 26
  { 0x00001579, 0x8ee2308d, 44 }, // 27
  { 0x00002af3, 0x1dc46119, 44 }, // 28
  { 0x00002af3, 0x1dc46119, 43 }, // 29
  { 0x000044b8, 0x2fa09b5b, 46 }, // 30
  { 0x00008970, 0x5f4136b5, 46 }, // 31
  { 0x00008970, 0x5f4136b5, 45 }, // 32
  { 0x000225c1, 0x7d04dad3, 46 }, // 33
  { 0x00006df3, 0x7f675ef7, 46 }, // 34
  { 0x00006df3, 0x7f675ef7, 45 }, // 35
  { 0x0006df37, 0xf675ef6f, 48 }, // 36
  { 0x0000afeb, 0xff0bcb25, 47 }, // 37
  { 0x000afebf, 0xf0bcb24b, 50 }, // 38
  { 0x000afebf, 0xf0bcb24b, 49 }, // 39
  { 0x00008cbc, 0xcc096f51, 47 }, // 40
  { 0x000465e6, 0x604b7a85, 49 }, // 41
  { 0x0008cbcc, 0xc096f509, 49 }, // 42
  { 0x00232f33, 0x025bd423, 50 }, // 43
  { 0x00070970, 0x9a125da1, 50 }, // 44
  { 0x00070970, 0x9a125da1, 49 }, // 45
  { 0x00070970, 0x9a125da1, 48 }, // 46
  { 0x0005a126, 0xe1a84ae7, 50 }, // 47
  { 0x0005a126, 0xe1a84ae7, 49 }, // 48
  { 0x0005a126, 0xe1a84ae7, 48 }, // 49
  { 0x0000901d, 0x7cf73ab1, 47 }, // 50
  { 0x00024075, 0xf3dceac3, 48 }, // 51
  { 0x00024075, 0xf3dceac3, 47 }, // 52
  { 0x000901d7, 0xcf73ab0b, 48 }, // 53
  { 0x0000734a, 0xca5f6227, 46 }, // 54
  { 0x0000734a, 0xca5f6227, 45 }, // 55
  { 0x000e6959, 0x4bec44df, 49 }, // 56
  { 0x0000b877, 0xaa3236a5, 47 }, // 57
  { 0x0002e1de, 0xa8c8da93, 48 }, // 58
  { 0x0002e1de, 0xa8c8da93, 47 }, // 59
  { 0x00012725, 0xdd1d243b, 48 }, // 60
  { 0x00049c97, 0x747490eb, 49 }, // 61
  { 0x00049c97, 0x747490eb, 48 }, // 62
  { 0x00049c97, 0x747490eb, 47 }, // 63
  { 0x000ec1e4, 0xa7db6957, 51 }, // 64
  { 0x000ec1e4, 0xa7db6957, 50 }, // 65
  { 0x000ec1e4, 0xa7db6957, 49 }, // 66
  { 0x0005e728, 0x43249089, 50 }, // 67
  { 0x0005e728, 0x43249089, 49 }, // 68
  { 0x0005e728, 0x43249089, 48 }, // 69
  { 0x00012e3b, 0x40a0e9b5, 48 }, // 70
  { 0x00012e3b, 0x40a0e9b5, 47 }, // 71
  { 0x00012e3b, 0x40a0e9b5, 46 }, // 72
  { 0x00012e3b, 0x40a0e9b5, 45 }, // 73
  { 0x0003c724, 0x0202ebdd, 49 }, // 74
  { 0x0003c724, 0x0202ebdd, 48 }, // 75
  { 0x0003c724, 0x0202ebdd, 47 }, // 76
  { 0x000305b6, 0x6802564b, 49 }, // 77
  { 0x00060b6c, 0xd004ac95, 49 }, // 78
  { 0x00060b6c, 0xd004ac95, 48 }, // 79
  { 0x00026af8, 0x533511d5, 49 }, // 80
  { 0x00026af8, 0x533511d5, 48 }, // 81
  { 0x00026af8, 0x533511d5, 47 }, // 82
  { 0x00026af8, 0x533511d5, 46 }, // 83
  { 0x0000f796, 0x87aed3ef, 47 }, // 84
  { 0x0000f796, 0x87aed3ef, 46 }, // 85
  { 0x0007bcb4, 0x3d769f77, 48 }, // 86
  { 0x00031848, 0x1895d963, 49 }, // 87
  { 0x00031848, 0x1895d963, 48 }, // 88
  { 0x00031848, 0x1895d963, 47 }, // 89
  { 0x00013ce9, 0xa36f23c1, 48 }, // 90
  { 0x00013ce9, 0xa36f23c1, 47 }, // 91
  { 0x00013ce9, 0xa36f23c1, 46 }, // 92
  { 0x00013ce9, 0xa36f23c1, 45 }, // 93
  { 0x0007ec3d, 0xaf941807, 50 }, // 94
  { 0x0007ec3d, 0xaf941807, 49 }, // 95
  { 0x000fd87b, 0x5f28300d, 49 }, // 96
  { 0x00032b4b, 0xdfd4d669, 49 }, // 97
  { 0x00032b4b, 0xdfd4d669, 48 }, // 98
  { 0x00032b4b, 0xdfd4d669, 47 }, // 99
  { 0x0000a242, 0x5ff75e15, 47 }, // 100
  { 0x0000a242, 0x5ff75e15, 46 }, // 101
  { 0x0000a242, 0x5ff75e15, 45 }, // 102
  { 0x00002073, 0xaccb12d1, 45 }, // 103
  { 0x00002073, 0xaccb12d1, 44 }, // 104
};

#define TO_AMARU_DEC to_amaru_dec_ieee32
#include "src/amaru.h"
#undef AMARU

#ifdef __cplusplus
}
#endif
