#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    for(int i = 1; i < ar_size; i++){
        for(int j = i - 1, d = i; d > 0; j--, d--){ // >=
            if(ar[d] < ar[j]){
                // swap
                int temp = ar[d];
                ar[d] = ar[j];
                ar[j] = temp;
            }
        }
        
        for(int p = 0; p < ar_size; p++){
            printf("%d ", ar[p]);
        }
        printf("\n");
    }

}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
    return 0;
}

