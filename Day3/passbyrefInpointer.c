#include<stdio.h>

void set_x_abd_y(int *x,int *y){
    *x=1001;
    *y=1002;
}
void swap(int *ptr1,int *ptr2){
     *ptr1+= *ptr2;
        *ptr2=*ptr1 - *ptr2;
        *ptr1-= *ptr2;

}
void main(){

int a=1,b=2;
set_x_abd_y(&a,&b);

printf("a=%d\t",a);
printf("b=%d\n",b);
//-------------------------------
swap(&a,&b);
printf("a=%d\t",a);
printf("\n b=%d",b);


}