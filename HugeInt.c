#include <stdio.h>
#include "HugeInt.h"
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


HugeInt* createHugeInt (void) {
    HugeInt* hugeInt = malloc (sizeof (HugeInt));

    if (hugeInt != NULL) {
        HugeUnsignedInt* absoluteValue = createHugeUnsignedInt ();
        hugeInt->absoluteValue = absoluteValue;
        hugeInt->sign = PLUS;
    }

    return hugeInt;
}

HugeInt* createHugeIntFromString (const char* digitString) {
    HugeInt* hugeInt = createHugeInt ();

    if (hugeInt != NULL) {
        int explicitSign = 0;
        switch (*digitString) {
        case '-':
            hugeInt->sign = MINUS;
            explicitSign++;
            break;
        case '+':
            explicitSign++;
        default:
            hugeInt->sign = PLUS;
        }

        hugeInt->absoluteValue = createHugeUnsignedIntFromString (digitString + explicitSign);
    }

    return hugeInt;
}

HugeInt* createHugeIntFromHugeInt (const HugeInt* hugeInt, const unsigned int size) {
    HugeInt* hugeIntCopy = createHugeInt ();
    if ((hugeIntCopy != NULL) && (hugeInt != NULL)) {
        hugeIntCopy->absoluteValue = createHugeUnsignedIntFromHugeUnsignedInt (hugeInt->absoluteValue, size);
        hugeIntCopy->sign = hugeInt->sign;
    }
    return hugeIntCopy;
}

void deleteHugeInt (const HugeInt* hugeInt) {
    if (hugeInt != NULL) {
        deleteHugeUnsignedInt (hugeInt->absoluteValue);
        free (hugeInt);
    }
}

int getHugeIntLength (const HugeInt* hugeInt) {
    if (hugeInt != NULL) {
        return getHugeUnsignedIntLength (hugeInt->absoluteValue) + 1;
    }
    return 0;
}

HugeInt* simplifyHugeInt (const HugeInt* hugeInt) {
    if (hugeInt != NULL) {
        simplifyHugeUnsignedInt (hugeInt->absoluteValue);
    }
    return hugeInt;
}


void printHugeInt (const HugeInt* hugeInt) {
    char* hugeIntString = HugeIntToString(hugeInt);
    printf ("%s\n", hugeIntString);
    free (hugeIntString);
}