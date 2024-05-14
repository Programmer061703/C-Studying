#include <stdio.h>
#include <limits.h>



int main(){
    int x = INT_MAX;
    short y = SHRT_MAX;
    unsigned char z = UCHAR_MAX;
    long t = LONG_MAX;

    printf("Signed Int Max: %d\n Short Max: %d\n Unsigned char Max: %d\n Long Max: %d\n", x,y,z,t);
    return 0;

}