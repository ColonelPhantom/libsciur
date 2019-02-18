#ifndef _SCIUR_STORAGE_H
#define _SCIUR_STORAGE_H

#include <cstdint>
#include <string>

typedef uint_fast64_t docid_t;
typedef uint_fast64_t tokid_t;

typedef uint_fast32_t occnum_t;
typedef uint_fast64_t offset_t;

int setup(char* indexfile);
int write(docid_t docid,  

#endif// _SCIUR_STORAGE_H
