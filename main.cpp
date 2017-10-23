
#include <stdio.h>
#include "src/basedef.hpp"

int main() {
    int ri = 0;

    for (int i = 0; i < 100; ++i) {
        printf("%d\n", randomInt(100));
    }

    return 0;
}