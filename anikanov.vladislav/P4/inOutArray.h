#ifndef INOUTARRAY_H
#define INOUTARRAY_H
#include <iosfwd>

int inputArray(std::istream &, int *array, int n, int m);

void const printArray(std::ostream &, int *array, int n, int m);

#endif
