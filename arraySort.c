//
//  arraySort.c
//  
//
//  Created by André Souza on 4/4/15.
//
//

#include "arraySort.h"
int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}