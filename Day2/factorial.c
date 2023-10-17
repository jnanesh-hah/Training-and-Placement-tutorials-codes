#include<stdio.h>

int fact(int a){

    int res=1;
    for(int i=a;i>1;i--){
        res=res*i;
    }
    return res;
   
}

int main(){

    int a=5;
    int factorial;
   // printf("Enter the Number to find the factorial = ");
   // scanf("%d",&a);

    factorial=fact(a);
    printf("Factorial of %d is %d",a,factorial);
    return 0;

}