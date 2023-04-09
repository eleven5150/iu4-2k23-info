#include "rar_compressor.h"

void RarCompressor_init(Compressor_t *compressor, int compressed_ratio) {
    assert(compressor);
    compressor->__impl = malloc(sizeof(RarCompressor_t));
    RarCompressor_t *rar_compressor = (RarCompressor_t *) compressor->__impl;

    //init private attributes
    rar_compressor->time_to_finish = RAR_TIME_TO_FINISH;
    rar_compressor->compressed_ratio = compressed_ratio;
    rar_compressor->is_crypt = RAR_NO_CRYPT;
    rar_compressor->error = RAR_OK;

    //init public methods
    compressor->compress = &RarCompressor_compress;
    compressor->uncompress = &RarCompressor_uncompress;
    compressor->status = &RarCompressor_status;
}

void RarCompressor_compress(Compressor_t *compressor, void *data) {
    assert(compressor);
    assert(compressor->__impl);
    RarCompressor_t *rar_compressor = (RarCompressor_t *) compressor->__impl;
    printf("RAR: compressor working. Compressed ratio: %d\n",
           rar_compressor->compressed_ratio);
}

void RarCompressor_uncompress(Compressor_t *compressor, void *data) {
    assert(compressor);
    assert(compressor->__impl);
    RarCompressor_t *rar_compressor = (RarCompressor_t *) compressor->__impl;
    printf("RAR: uncompressor working. Will be finished in %d.\\n",
           rar_compressor->time_to_finish);
}

void RarCompressor_status(Compressor_t *compressor) {
    assert(compressor);
    assert(compressor->__impl);
    RarCompressor_t *rar_compressor = (RarCompressor_t *) compressor->__impl;
    printf("Compressed ratio: %d, error: %d, using encryption: %d\n",
           rar_compressor->compressed_ratio,
           rar_compressor->error,
           rar_compressor->is_crypt
    );
}

void RarCompressor_free(Compressor_t *compressor) {
    assert(compressor);
    assert(compressor->__impl);
    RarCompressor_t *rar_compressor = (RarCompressor_t *) compressor->__impl;
    free(rar_compressor);
}

