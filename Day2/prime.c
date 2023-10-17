#include<stdio.h>




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

int main(){
    for(int i=2;i<=100;i++){
        primeornot(i);
    }
    return 0;
}