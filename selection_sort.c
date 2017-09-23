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

    for(int i = 0; i < n-1; i++){
        int min = i;

        for(int j = i+1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            //swap
            int s = a[i];
            a[i] = a[min];
            a[min] = s; 
        }
    }

    for(int p = 0; p < n ; p++){
        printf("%d ", a[p]);
    }
    printf("\n");
    
    return 0;
}

