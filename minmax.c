//
//  minmax.c
//  
//
//  Created by André Souza on 4/3/15.
//
//

#include "minmax.h"
int solution(int K, int M, int A[], int N) {
    int i;
    // using the binary search algorithm to solve this problem
    
    // assume the max of the large sum is N * M
    long int max = N * M;
    // assume the min of the large sum is 0
    long int min = 0;
    long int result = 0;
    
    while (min <= max) {
        long int mid = (min + max) / 2;
        int count = 0;
        long int sum = 0;
        for (i=0; i < N; i++) {
            sum += A[i];
            // there is an element which is larger than the large sum, so it
            // is not a valid trial
            if (A[i] > mid) {
                count = K + 1;
                break;
            }
            if (sum > mid) {
                count++;
                sum = A[i];
            }
        }
        // we know that the last piece of the divide has not been counted
        count++;
        if (count <= K) {
            max = mid - 1;
            result = mid;
        } else {
            min = mid + 1;
        }
    }
    return (int)result;
}