#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    int Atotal=0;
    int Btotal=0;
    if(a0 > b0){
        Atotal++;
    }
    if(a0<b0){
        Btotal++;
    }
    if(a1 > b1){
       Atotal++;
    }
    if(a1<b1){
        Btotal++;
    }
    if(a2 > b2){
        Atotal++;
    }
    if(a2<b2){
        Btotal++;
    }
    printf("%d %d",Atotal,Btotal);
    return 0;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
