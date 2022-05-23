//
// Created by Julien Le ber on 17/05/2022.
//
#include <stdlib.h>
#include "DoublyLinkedList.h"
#include "HugeFloat.h"
#include "HugeFloatOperator.h"
#include "HugeInt.h"
#include "HugeIntOperator.h"
#include "HugeUnsignedInt.h"
#include "HugeUnsignedIntOperator.h"
#include "ScanHugeNumber.h"
#include "ShowHugeNumber.h"
//Addition de main
int main (void) {
    HugeUnsignedInt* hugeNumber = createHugeUnsignedIntFromString ("123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
    hugeNumber = createHugeUnsignedIntFromString ("0000000123456789012345678901234567890");
    printHugeUnsignedInt (hugeNumber);
}
