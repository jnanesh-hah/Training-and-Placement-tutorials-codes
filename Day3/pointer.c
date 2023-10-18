#include<stdio.h>

void main(){

    int i1,i2,*ptr1,*ptr2;
   

    i1=1;
    i2=2;
 printf(" value of i1  %d\n",i1);
    ptr1=&i1;
    printf(" Address of i1 or value of ptr1 %d\n",ptr1);
    ptr2 = ptr1;

    printf("value of ptr2 %d\n",ptr2);

    *ptr1=3;
       printf(" value of ptr1 %d\n",*ptr1);
        printf(" value of i1  %d\n",i1);
    i2=*ptr2;
       printf(" value of i2 %d\n",i2);






    
}