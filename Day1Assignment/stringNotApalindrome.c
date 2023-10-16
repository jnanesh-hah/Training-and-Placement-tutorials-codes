#include <stdio.h>

int main() {
    // Write C code here
    char str1[20]="Happy Dasars";
    char str2[20];
   
        for(int j=11;j>=0;j--){
            str2[j]=str1[11-j];

        }
        if(str1==str2){
            printf("Palindromen\n");
        }
        else{
            printf("Not Palindrome\n");

        }
     printf("%s",str1);
    printf("\n%s",str2);
    return 0;
}