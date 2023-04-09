#ifndef OOP_RAR_COMPRESSOR_H
#define OOP_RAR_COMPRESSOR_H

#include <assert.h>
#include <malloc.h>
#include <stdio.h>
#include "compressor.h"

#define RAR_OK 0
#define RAR_ERR 1

#define RAR_TIME_TO_FINISH 5
#define RAR_MAX_COMPRESS 5

#define RAR_NO_CRYPT 0
#define RAR_CRYPT 1

typedef struct {
    int compressed_ratio;
    int error;
    int time_to_finish;
    int is_crypt;
} RarCompressor_t;

void RarCompressor_init(Compressor_t *compressor, int compressed_ratio);

void RarCompressor_compress(Compressor_t *compressor, void *data);

void RarCompressor_uncompress(Compressor_t *compressor, void *data);

void RarCompressor_status(Compressor_t *compressor);

void RarCompressor_free(Compressor_t *compressor);

#endif //OOP_RAR_COMPRESSOR_H
