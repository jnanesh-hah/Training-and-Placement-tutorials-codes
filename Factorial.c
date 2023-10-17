#include<stdio.h>

int fact(int a){

    if(a>=1){
        return (a*fact(a-1));
    }
    else
    {
         return 1;
    }
   
}

int main(){

    int a;
    int factorial;
    printf("Enter the Number to find the factorial = ");
    scanf("%d",&a);

    factorial=fact(a);
    printf("Factorial of %d is %d",a,factorial);
    return 0;

}
