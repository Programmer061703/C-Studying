#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main(){

    clock_t begin = clock();
    int x = 1, y = 2, z[10];

    int *ip;

    ip = &x;

    printf("Mem Addr: %p \n", (void*)ip);
    //6422028

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("%f",time_spent);

}