//
//  MaxNonoverlappingSegments.c
//  
//
//  Created by André Souza on 4/3/15.
//
//

#include "MaxNonoverlappingSegments.h"

int solution(int A[], int B[], int N) {
    // write your code in C99
    if (N <= 1) {
        return N;
    }
    int result = 1;
    int prevEnd = B[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > B[i-1] || A[i] > prevEnd) {
            result++;
            prevEnd = B[i];
        }
    }
    return result;
}