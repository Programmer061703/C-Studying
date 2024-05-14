#include<stdio.h>
#include<stdint.h>
#include <ctype.h>


uint32_t htoi(char *hex) {
    uint32_t val = 0;
    while (*hex) {

        uint8_t byte = *hex++; 
      
        
        if (byte >= '0' && byte <= '9'){
            byte = byte - '0';
            printf("Current numeric byte: %u\n", byte);
        } 
        else if (byte >= 'a' && byte <='f') {
            printf("Previous byte: %u\n", byte); 
            byte = byte - 'a' + 10;
            printf("Current byte: %u\n", byte);  
        }
        else if (byte >= 'A' && byte <= 'F'){
            printf("Previous byte: %u\n", byte); 
            byte = byte - 'A' + 10; 
            printf("Current byte: %u\n", byte);
        }
        
        val = (val << 4) | (byte & 0xF);
    }
    return val;
}


int main(){


    unsigned char *z = "Feeee";
    printf("Hex to int %d" , htoi(z)); 
    

}