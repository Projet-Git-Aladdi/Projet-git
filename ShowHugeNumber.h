#ifndef SHOW_HUGE_NUMBER
#define SHOW_HUGE_NUMBER

#include "HugeFloat.h"
#include "HugeInt.h"
#include "HugeUnsignedInt.h"

extern void printHugeUnsignedInt (const HugeUnsignedInt* hugeUnsignedInt);
extern void printHugeInt         (const HugeInt* hugeInt);
extern void printHugeFloat       (const HugeFloat* hugeFloat);
static char* HugeIntToString (const HugeInt* hugeInt);
static char* HugeFloatToString (const HugeFloat* hugeFloat);

#endif // !SHOW_HUGE_NUMBER
