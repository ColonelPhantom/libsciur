#ifndef _SCIUR_STORAGE_H
#define _SCIUR_STORAGE_H

#include <stdint.h>

typedef uint_fast64_t docid_t;

int setup(char* indexfile);
int write(docid_t docid,  

#endif// _SCIUR_STORAGE_H
