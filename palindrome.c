#include<stdio.h>
#include<string.h>

int main(){
    char str1[10]="racecar";
    int a=0;
    int b=strlen(str1)-1;
    int res=0;

    while(b>a)
    {

        if(str1[a++]!=str1[b--])
        {
                res=1;
                break;
        }

    }
    if(res==0){
        printf("Palindrome");

    }
    else{
        printf(" Not a palindrome");
    }

return 0;
}
