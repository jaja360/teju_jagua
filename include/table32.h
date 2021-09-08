// This file is auto-generated. DO NOT EDIT IT.

#include <stdint.h>

typedef float    fp_t;
typedef uint32_t suint_t;
typedef uint64_t duint_t;

typedef struct {
  bool    negative;
  int32_t exponent;
  suint_t mantissa;
} rep_t;

enum {
  exponent_size  = 8,
  mantissa_size  = 23,
  large_exponent = 10,
  word_size      = 32,
  exponent_min   = -149
};

static struct {
  suint_t  const upper;
  suint_t  const lower;
  uint32_t const n_bits;
} scalers[] = {
  { 0x00000000, 0x04000001, 26 }, // 1
  { 0x00000000, 0x08000001, 26 }, // 2
  { 0x00000000, 0x10000001, 26 }, // 3
  { 0x00000000, 0x0ccccccd, 28 }, // 4
  { 0x00000000, 0x0ccccccd, 27 }, // 5
  { 0x00000000, 0x0ccccccd, 26 }, // 6
  { 0x00000000, 0x028f5c29, 26 }, // 7
  { 0x00000000, 0x51eb851f, 30 }, // 8
  { 0x00000000, 0x51eb851f, 29 }, // 9
  { 0x00000000, 0x10624dd3, 29 }, // 10
  { 0x00000002, 0x0c49ba5f, 33 }, // 11
  { 0x00000004, 0x189374bd, 33 }, // 12
  { 0x00000008, 0x3126e979, 33 }, // 13
  { 0x0000000d, 0x1b71758f, 36 }, // 14
  { 0x0000001a, 0x36e2eb1d, 36 }, // 15
  { 0x0000001a, 0x36e2eb1d, 35 }, // 16
  { 0x00000005, 0x3e2d6239, 35 }, // 17
  { 0x00000029, 0xf16b11c7, 37 }, // 18
  { 0x00000029, 0xf16b11c7, 36 }, // 19
  { 0x00000008, 0x637bd05b, 36 }, // 20
  { 0x0000010c, 0x6f7a0b5f, 40 }, // 21
  { 0x0000010c, 0x6f7a0b5f, 39 }, // 22
  { 0x0000010c, 0x6f7a0b5f, 38 }, // 23
  { 0x000001ad, 0x7f29abcb, 41 }, // 24
  { 0x000001ad, 0x7f29abcb, 40 }, // 25
  { 0x000001ad, 0x7f29abcb, 39 }, // 26
  { 0x00001579, 0x8ee2308d, 45 }, // 27
  { 0x00002af3, 0x1dc46119, 45 }, // 28
  { 0x00002af3, 0x1dc46119, 44 }, // 29
  { 0x000044b8, 0x2fa09b5b, 47 }, // 30
  { 0x00008970, 0x5f4136b5, 47 }, // 31
  { 0x00008970, 0x5f4136b5, 46 }, // 32
  { 0x000225c1, 0x7d04dad3, 47 }, // 33
  { 0x00006df3, 0x7f675ef7, 47 }, // 34
  { 0x00006df3, 0x7f675ef7, 46 }, // 35
  { 0x00006df3, 0x7f675ef7, 45 }, // 36
  { 0x0000afeb, 0xff0bcb25, 48 }, // 37
  { 0x0000afeb, 0xff0bcb25, 47 }, // 38
  { 0x000afebf, 0xf0bcb24b, 50 }, // 39
  { 0x00008cbc, 0xcc096f51, 48 }, // 40
  { 0x000465e6, 0x604b7a85, 50 }, // 41
  { 0x0008cbcc, 0xc096f509, 50 }, // 42
  { 0x00232f33, 0x025bd423, 51 }, // 43
  { 0x00070970, 0x9a125da1, 51 }, // 44
  { 0x00070970, 0x9a125da1, 50 }, // 45
  { 0x00070970, 0x9a125da1, 49 }, // 46
  { 0x0005a126, 0xe1a84ae7, 51 }, // 47
  { 0x0005a126, 0xe1a84ae7, 50 }, // 48
  { 0x0005a126, 0xe1a84ae7, 49 }, // 49
  { 0x0000901d, 0x7cf73ab1, 48 }, // 50
  { 0x00024075, 0xf3dceac3, 49 }, // 51
  { 0x00024075, 0xf3dceac3, 48 }, // 52
  { 0x000901d7, 0xcf73ab0b, 49 }, // 53
  { 0x0000734a, 0xca5f6227, 47 }, // 54
  { 0x0000734a, 0xca5f6227, 46 }, // 55
  { 0x0000734a, 0xca5f6227, 45 }, // 56
  { 0x0000b877, 0xaa3236a5, 48 }, // 57
  { 0x0002e1de, 0xa8c8da93, 49 }, // 58
  { 0x0002e1de, 0xa8c8da93, 48 }, // 59
  { 0x00012725, 0xdd1d243b, 49 }, // 60
  { 0x00049c97, 0x747490eb, 50 }, // 61
  { 0x00049c97, 0x747490eb, 49 }, // 62
  { 0x00049c97, 0x747490eb, 48 }, // 63
  { 0x000ec1e4, 0xa7db6957, 52 }, // 64
  { 0x000ec1e4, 0xa7db6957, 51 }, // 65
  { 0x000ec1e4, 0xa7db6957, 50 }, // 66
  { 0x0005e728, 0x43249089, 51 }, // 67
  { 0x0005e728, 0x43249089, 50 }, // 68
  { 0x0005e728, 0x43249089, 49 }, // 69
  { 0x00012e3b, 0x40a0e9b5, 49 }, // 70
  { 0x00012e3b, 0x40a0e9b5, 48 }, // 71
  { 0x00012e3b, 0x40a0e9b5, 47 }, // 72
  { 0x00012e3b, 0x40a0e9b5, 46 }, // 73
  { 0x0003c724, 0x0202ebdd, 50 }, // 74
  { 0x0003c724, 0x0202ebdd, 49 }, // 75
  { 0x0003c724, 0x0202ebdd, 48 }, // 76
  { 0x000305b6, 0x6802564b, 50 }, // 77
  { 0x000305b6, 0x6802564b, 49 }, // 78
  { 0x00060b6c, 0xd004ac95, 49 }, // 79
  { 0x00026af8, 0x533511d5, 50 }, // 80
  { 0x00026af8, 0x533511d5, 49 }, // 81
  { 0x00026af8, 0x533511d5, 48 }, // 82
  { 0x00026af8, 0x533511d5, 47 }, // 83
  { 0x0000f796, 0x87aed3ef, 48 }, // 84
  { 0x0000f796, 0x87aed3ef, 47 }, // 85
  { 0x0000f796, 0x87aed3ef, 46 }, // 86
  { 0x00031848, 0x1895d963, 50 }, // 87
  { 0x00031848, 0x1895d963, 49 }, // 88
  { 0x00031848, 0x1895d963, 48 }, // 89
  { 0x00013ce9, 0xa36f23c1, 49 }, // 90
  { 0x00013ce9, 0xa36f23c1, 48 }, // 91
  { 0x00013ce9, 0xa36f23c1, 47 }, // 92
  { 0x00013ce9, 0xa36f23c1, 46 }, // 93
  { 0x0007ec3d, 0xaf941807, 51 }, // 94
  { 0x0007ec3d, 0xaf941807, 50 }, // 95
  { 0x000fd87b, 0x5f28300d, 50 }, // 96
  { 0x00032b4b, 0xdfd4d669, 50 }, // 97
  { 0x00032b4b, 0xdfd4d669, 49 }, // 98
  { 0x00032b4b, 0xdfd4d669, 48 }, // 99
  { 0x0000a242, 0x5ff75e15, 48 }, // 100
  { 0x0000a242, 0x5ff75e15, 47 }, // 101
  { 0x0000a242, 0x5ff75e15, 46 }, // 102
  { 0x00002073, 0xaccb12d1, 46 }, // 103
  { 0x00002073, 0xaccb12d1, 45 }, // 104
};

static struct {
  unsigned const char correction : 7;
  unsigned const char refine     : 1;
} correctors[] = {
  { 1, 0 }, // 1
  { 2, 0 }, // 2
  { 4, 0 }, // 3
  { 1, 0 }, // 4
  { 2, 0 }, // 5
  { 2, 0 }, // 6
  { 1, 0 }, // 7
  { 1, 0 }, // 8
  { 3, 0 }, // 9
  { 1, 0 }, // 10
  { 2, 0 }, // 11
  { 4, 0 }, // 12
  { 8, 0 }, // 13
  { 1, 0 }, // 14
  { 1, 0 }, // 15
  { 2, 0 }, // 16
  { 1, 0 }, // 17
  { 2, 0 }, // 18
  { 3, 0 }, // 19
  { 1, 0 }, // 20
  { 2, 0 }, // 21
  { 3, 0 }, // 22
  { 5, 0 }, // 23
  { 2, 0 }, // 24
  { 3, 0 }, // 25
  { 4, 0 }, // 26
  { 1, 0 }, // 27
  { 2, 0 }, // 28
  { 3, 0 }, // 29
  { 1, 0 }, // 30
  { 2, 0 }, // 31
  { 3, 0 }, // 32
  { 5, 0 }, // 33
  { 2, 0 }, // 34
  { 3, 0 }, // 35
  { 4, 0 }, // 36
  { 1, 0 }, // 37
  { 2, 0 }, // 38
  { 3, 0 }, // 39
  { 1, 0 }, // 40
  { 2, 0 }, // 41
  { 5, 0 }, // 42
  { 9, 0 }, // 43
  { 1, 0 }, // 44
  { 2, 0 }, // 45
  { 3, 0 }, // 46
  { 1, 0 }, // 47
  { 1, 0 }, // 48
  { 3, 0 }, // 49
  { 1, 0 }, // 50
  { 2, 0 }, // 51
  { 3, 0 }, // 52
  { 5, 0 }, // 53
  { 2, 0 }, // 54
  { 2, 0 }, // 55
  { 3, 0 }, // 56
  { 1, 0 }, // 57
  { 2, 0 }, // 58
  { 4, 0 }, // 59
  { 2, 0 }, // 60
  { 2, 0 }, // 61
  { 3, 0 }, // 62
  { 5, 0 }, // 63
  { 2, 0 }, // 64
  { 2, 0 }, // 65
  { 4, 0 }, // 66
  { 2, 0 }, // 67
  { 2, 0 }, // 68
  { 4, 0 }, // 69
  { 13, 1 }, // 70
  { 2, 0 }, // 71
  { 3, 0 }, // 72
  { 6, 0 }, // 73
  { 2, 0 }, // 74
  { 2, 0 }, // 75
  { 4, 0 }, // 76
  { 1, 0 }, // 77
  { 2, 0 }, // 78
  { 4, 0 }, // 79
  { 1, 0 }, // 80
  { 2, 0 }, // 81
  { 4, 0 }, // 82
  { 7, 0 }, // 83
  { 2, 0 }, // 84
  { 2, 0 }, // 85
  { 4, 0 }, // 86
  { 1, 0 }, // 87
  { 2, 0 }, // 88
  { 5, 0 }, // 89
  { 1, 0 }, // 90
  { 1, 0 }, // 91
  { 3, 0 }, // 92
  { 6, 0 }, // 93
  { 2, 0 }, // 94
  { 3, 0 }, // 95
  { 5, 0 }, // 96
  { 1, 0 }, // 97
  { 2, 0 }, // 98
  { 4, 0 }, // 99
  { 1, 0 }, // 100
  { 2, 0 }, // 101
  { 3, 0 }, // 102
  { 1, 0 }, // 103
  { 1, 0 }, // 104
};
