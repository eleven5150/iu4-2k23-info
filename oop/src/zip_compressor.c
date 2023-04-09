#include "zip_compressor.h"

void ZipCompressor_init(Compressor_t *compressor, int compressed_ratio) {
    assert(compressor);
    compressor->__impl = malloc(sizeof(ZipCompressor_t));
    ZipCompressor_t *zip_compressor = (ZipCompressor_t *) compressor->__impl;

    //init private attributes
    zip_compressor->time_to_finish = ZIP_TIME_TO_FINISH;
    zip_compressor->compressed_ratio = compressed_ratio;
    zip_compressor->compression_method = ZIP_LZMA;
    zip_compressor->error = ZIP_OK;

    //init public methods
    compressor->compress = &ZipCompressor_compress;
    compressor->uncompress = &ZipCompressor_uncompress;
    compressor->status = &ZipCompressor_status;
}

void ZipCompressor_compress(Compressor_t *compressor, void *data) {
    assert(compressor);
    assert(compressor->__impl);
    ZipCompressor_t *zip_compressor = (ZipCompressor_t *) compressor->__impl;
    printf("ZIP: compressor working. Compressed ratio: %d\n",
           zip_compressor->compressed_ratio);
}

void ZipCompressor_uncompress(Compressor_t *compressor, void *data) {
    assert(compressor);
    assert(compressor->__impl);
    ZipCompressor_t *zip_compressor = (ZipCompressor_t *) compressor->__impl;
    printf("ZIP: uncompressor working. Will be finished in %d.\n",
           zip_compressor->time_to_finish);
}

void ZipCompressor_status(Compressor_t *compressor) {
    assert(compressor);
    assert(compressor->__impl);
    ZipCompressor_t *zip_compressor = (ZipCompressor_t *) compressor->__impl;
    printf("Compressed ratio: %d, error: %d, compression method: %d\n",
           zip_compressor->compressed_ratio,
           zip_compressor->error,
           zip_compressor->
    );
}

void ZipCompressor_free(Compressor_t *compressor) {
    assert(compressor);
    assert(compressor->__impl);
    ZipCompressor_t *zip_compressor = (ZipCompressor_t *) compressor->__impl;
    free(zip_compressor);
}
