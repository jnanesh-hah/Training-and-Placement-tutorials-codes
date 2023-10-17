#include<stdio.h>

void EvenOdd(int num){

    if(num%2==0){
        printf("The given number %d is Even Number\n",num);
    }
    else{
        printf("The given number %d is Odd Number\n",num);
    }

}

// This Function is Used to Find Whether the given number is Prime Or not
void primeornot(int a){
    

 int loop;
    int prime = 1;



    for(loop = 2; loop < a; loop++) {
        if((a % loop) == 0) {
            prime = 0;
        }
    }

    if (prime == 1)
        printf("%d is prime number\n", a);
    else
        printf("%d is not a prime number\n", a);
   
}
int fact(int a){

    int res=1;
    for(int i=a;i>1;i--){
        res=res*i;
    }
    return res;
   
}


int main(){

    int a=10;
    printf("Enter the Number = ");
   scanf("%d",&a);
  primeornot(a);
  EvenOdd(a);
 // fact(a);
 printf("Factorial of %d is %d",a,fact(a));
    return 0;

}