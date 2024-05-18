#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void swap( int *px, int *py){
    int temp;
    //* points to value of the memory address & gets the memory address 

    printf("2 Mem addr X:%p\n Mem addr Y:%p\n",px,py);

    temp = *px;
    *px = *py;
    *py = temp;
    printf("3 Mem addr X:%p\n Mem addr Y:%p\n",px,py);
}




int main(){

    int x = 1, y = 2, z[10];

    printf("1 Mem addr X:%p\n Mem addr Y:%p\n",&x,&y);
   swap(&x,&y);



    printf("Value of X:%d\nValue of Y: %d", x,y);
    
    //6422028

    

}