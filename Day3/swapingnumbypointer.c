#include<stdio.h>
//Write a program to swap two number using pointer

void main(){

        int num1=10,num2=20;
        int *ptr1,*ptr2,temp;
        printf("Before swap\n");
         printf("num1=%d\t",num1);
        printf("num2=%d\n",num2);

        ptr1=&num1;
        ptr2=&num2;
       // printf("ptr1=%d\t",*ptr1);
       // printf("ptr2=%d\n",*ptr2);
        // temp=*ptr1;
        // *ptr1=*ptr2;
        // *ptr2=temp;
        // printf("After  swap\n");
        //  printf("num1=%d\t",num1);
        // printf("num2=%d\n",num2);

        //Another method to swap the number
         *ptr1+= *ptr2;
        *ptr2=*ptr1 - *ptr2;
        *ptr1-= *ptr2;
         printf("After  swap\n");
         printf("num1=%d\t",num1);
        printf("num2=%d",num2);
/*a+=b  a=a+b*/
}