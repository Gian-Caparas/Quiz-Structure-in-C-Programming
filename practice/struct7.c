#include <stdio.h>
//struct of array

struct ar{
    int r;
};

int main(){

    struct ar arr[2];
    
    arr[0].r = 10;
    arr[1].r = 20;

    for(int i=0; i<2; i++){
        printf("%d\n", arr[i].r);
    }

    return 0;
}