#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int nswaps = 20;
    int finalswaps = 0;
    for(int i = 0; i < n; i++){
        nswaps = 0;

        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                int s = a[j];
                a[j] = a[j+1];
                a[j+1] = s;
                
                nswaps++;
                finalswaps++;
            }
        }
        if(nswaps == 0){
            printf("Array is sorted in %i swaps.\n", finalswaps);
            printf("First Element: %d \n", a[0]);
            printf("Last Element: %d \n", a[n-1]);
            return 0;

        }
    }
    return 0;
}

