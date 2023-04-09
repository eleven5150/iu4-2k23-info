#include "main.h"

void do_stuff(Compressor_t *compressor, void* data_to_compress, void* data_to_decompress){
    compressor->compress(compressor, data_to_compress);
    compressor->uncompress(compressor, data_to_decompress);
    compressor->status(compressor);
}

int main() {
    void* uncompressed_data[DATA_SIZE];
    void* compressed_data[DATA_SIZE];

    Compressor_t rar_compressor;
    RarCompressor_init(&rar_compressor, RAR_MAX_COMPRESS);
    do_stuff(&rar_compressor, uncompressed_data, compressed_data);
    RarCompressor_free(&rar_compressor);

    Compressor_t zip_compressor;
    ZipCompressor_init(&zip_compressor, RAR_MAX_COMPRESS);
    do_stuff(&zip_compressor, uncompressed_data, compressed_data);
    ZipCompressor_free(&zip_compressor);

    return 0;
}

//typedef struct {
//    char *name;
//    int id;
//    int average_mark;
//    int *marks;
//} Student_t;
//
//Student_t *Student_init(char *name, int *marks){
//    Student_t *this = (Student_t *)malloc(sizeof(Student_t));
//    this->name = name;
//    this->id = get_unique_id();
//    this->marks = marks;
//    this->average_mark = calc_average_mark(this->marks);
//    return this;
//}
//
//void Student_free(Student_t *this){
//    return_unique_id(this->id);
//    free(this);
//}
