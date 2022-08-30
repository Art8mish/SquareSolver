#ifndef COMMON_LIBRARY_H_INCLUDED
#define COMMON_LIBRARY_H_INCLUDED

#include <stdio.h>
#include <TXlib.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <cmath>

#define SOFT_ASSERT(condition)                                            \
            do                                                            \
            {                                                             \
                if (!(condition))                                         \
                    printf("Error in %s; file: %s; num of line: %d \n",   \
                           #condition, __FILE__, __LINE__);               \
            } while(false);

#endif // COMMON_LIBRARY_H_INCLUDED
