#include "string.h"

#include <stdint.h>

int memcmp(const void *str1, const void *str2, size_t n)
{
        uint8_t *str1p = (uint8_t*)str1;
        uint8_t *str2p = (uint8_t*)str2;
        for (size_t i = 0; i < n; i++) {
                if (str1p[i] < str2p[i]) {
                        return -1;
                } else if (str1p[i] > str2p[i]) {
                        return 1;
                }
        }

        return 0;
}

void *memcpy(void *dst, const void *src, size_t n)
{
        uint8_t *dstp = (uint8_t*)dst;
        uint8_t *srcp = (uint8_t*)src;
        for (size_t i = 0; i < n; i++) {
                dstp[i] = srcp[i];
        }

        return dst;
}

void *memset(void *str, int c, size_t n)
{
        int *strp = (int*)str;
        for (size_t i = 0; i < n; i++) {
                strp[i] = c;
        }

        return str;
}

size_t strlen(const char *str)
{
        size_t len = 0;
        while (str[len] != '\0') {
                len++;
        }


        return len;
}
