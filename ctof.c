#include <stdio.h>


int main(){


    // Integer based fahr to cels conversion
    // int fahr, celsius;
    // int lower,upper,step;

    // lower = 0;
    // upper = 300;
    // step = 20;


    // fahr = lower;
    // while(fahr <= upper){
    //     celsius = 5 * (fahr-32) /9;
    //     printf("%3d\t%6d\n",fahr,celsius); // %3d and %6d add spaces before the number is printed
    //     fahr = fahr + step;
    // }

    // Float based

    float fahr, celsius;
    int lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    while (celsius <= upper){
        //celsius = (5.0/9.0) * (fahr-32.0);

        fahr = celsius / (5.0/9.0) + 32.0;
        printf("%3.0f\t%6.1f\n",fahr,celsius); // %3.0f indicates 3 spaces and no decimal point or fractional numbers, while %6.1f is is printed 6 spaces, and a decimal point or fraction number is printed here. 
        celsius = celsius + step;
    }
    
    return(1);

}