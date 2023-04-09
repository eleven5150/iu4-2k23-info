#ifndef OOP_ZIP_COMPRESSOR_H
#define OOP_ZIP_COMPRESSOR_H

#include <assert.h>
#include <malloc.h>
#include <stdio.h>
#include "compressor.h"

#define ZIP_OK 0
#define ZIP_ERR 1

#define ZIP_TIME_TO_FINISH 5

#define ZIP_LZMA 0
#define ZIP_DEFLATE 1

typedef struct {
    int compressed_ratio;
    int error;
    int time_to_finish;
    int compression_method;
} ZipCompressor_t;


void ZipCompressor_compress(Compressor_t *compressor, void *data);

void ZipCompressor_uncompress(Compressor_t *compressor, void *data);

void ZipCompressor_status(Compressor_t *compressor);

void ZipCompressor_init(Compressor_t *compressor, int compressed_ratio);

void ZipCompressor_free(Compressor_t *compressor);

#endif //OOP_ZIP_COMPRESSOR_H
