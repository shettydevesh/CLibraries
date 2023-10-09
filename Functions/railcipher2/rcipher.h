#ifndef rcipher_h
#define rcipher_h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define VAL(PTR) (*PTR)

typedef char* STRING;
typedef char** STRING_REF;
void rail_fence_encrypt(STRING_REF str, int depth);
void rail_fence_decrypt(STRING_REF str, int depth);
void flush_stdin();
#endif