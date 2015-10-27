#include "Spooky.h"

void SpookyHash32_test(const void *key, int len, void* seed, void *out) {
    *(uint32_t*)out = SpookyHash::Hash32(key, len, seed);
}

void SpookyHash64_test(const void *key, int len, void* seed, void *out) {
    *(uint64_t*)out = SpookyHash::Hash64(key, len, seed);
}

void SpookyHash128_test(const void *key, int len, void* seed, void *out) {
    uint64_t h1 = *((uint32_t*)seed), h2 = *((uint32_t*)seed);
    SpookyHash::Hash128(key, len, &h1, &h2);
    ((uint64_t*)out)[0] = h1;
    ((uint64_t*)out)[1] = h2;
}
