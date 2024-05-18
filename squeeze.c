#include<stdio.h>
// Function to remove all characters in s that match any character in c
void squeeze(char s[], const char c[]) {
    int i, j, k;
    for (i = 0, k = 0; s[i] != '\0'; i++) {
        int found = 0;
        for (j = 0; c[j] != '\0'; j++) {
            if (s[i] == c[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            s[k++] = s[i];
        }
    }
    s[k] = '\0'; // Terminate the string properly
}

int main() {
    char test[] = "yolo";
    char test2[] = "Yes";
    
    squeeze(test, test2);
    
    printf("Result: %s\n", test); // Expected output: "olo"

    return 0;
}
