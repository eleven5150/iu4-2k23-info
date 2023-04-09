#ifndef OOP_COMPRESSOR_H
#define OOP_COMPRESSOR_H

typedef struct Compressor_t {
    //public
    void (*compress)(struct Compressor_t *, void *data);

    void (*uncompress)(struct Compressor_t *, void *data);

    void (*status)(struct Compressor_t *);

    //private
    void *__impl; // implementation of compression format
} Compressor_t;

#endif //OOP_COMPRESSOR_H
