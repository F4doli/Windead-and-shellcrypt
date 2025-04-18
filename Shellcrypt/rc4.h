#ifndef RC4_H

#define RC4_H
#include <stddef.h>

typedef struct {
    unsigned int i;
    unsigned int j;
    unsigned char s[256];
} Rc4Context;

void rc4Init(Rc4Context* context, const unsigned char* key, size_t length);
void rc4Cipher(Rc4Context* context, const unsigned char* input, unsigned char* output, size_t length);

#endif 