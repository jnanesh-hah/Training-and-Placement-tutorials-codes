#include <stdio.h>


int main() {
    // Write C code here
    char str1[15]="racecar";
    char str2[10];
    

        for(int j=6;j>=0;j--){
            str2[j]=str1[6-j];

        }
        if(str1[7]==str2[7]){
            printf("Palindromen\n");
        }
        else{
            printf("Not Palindrome\n");

        }
     printf("%s",str1);
    printf("\n%s",str2);
  return 0;
}