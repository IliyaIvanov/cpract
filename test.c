#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

struct xorshift32_state* global_state = NULL;

struct xorshift32_state {
    uint32_t a;
};

uint32_t xorshift32(struct xorshift32_state* state) {
    uint32_t x = state->a;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return state->a = x;
}

float rnd(float upper) {
    if (global_state == NULL) {
        int size = sizeof(struct xorshift32_state);
        struct xorshift32_state* pointer = malloc(size);
        global_state = pointer;
    }
    global_state->a = xorshift32(global_state);
    return (global_state->a / (float)UINT32_MAX) * upper;
}

void tab(int value) {
    for (int i = 0; i < value; i++) {
        printf(" ");
    }
}

int main() {
    printf("START\n");
    printf("%d\n", rand());
    printf("%d\n", rand());
}