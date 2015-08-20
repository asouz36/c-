//
//  binarySearch.c
//  
//
//  Created by André Souza on 4/5/15.
//
//

#include "binarySearch.h"
int binarySearch(int *A, int x, int n)
{
    int beg = 0;
    int end = n - 1;
    int result = -1;
        
    while (beg <= end){
     int mid = (beg + end) / 2;
     if (A[mid] <= x){
       beg = mid + 1;
      result = mid;
     }
     else{
      end = mid - 1;
     }
    }
    return result;
}