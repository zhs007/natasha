
#include "basedef.hpp"
#include <math.h>

#include "../lib/libfortuna/fortuna.h"

// random [0, max]
int randomInt(int max) {
    unsigned int ri;
    fortuna_get_bytes(4, (uint8*)&ri);

    return ri % max;
}