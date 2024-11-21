#include <stdio.h>

int main() {
    // printf("a: %d, Z: %d, 0: %d, 9: %d, -: %d", 'a', 'Z', '0', '9', '-');
    // printf("a: %d, b: %d, z: %d, A: %d, Z: %d", 'a', 'b', 'z', 'A', 'Z');
    for (int i = 0; i <= 255; ++i) {
        printf("i = %d, c = %c\n", i, i);
    }
    return 0;
}