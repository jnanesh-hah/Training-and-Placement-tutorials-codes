#include<stdio.h>
int main(){
    int a[]={1,5,4,3,6,2,4,5,8,2,2,2,2,2,2};
   int length;

   length=sizeof(a)/sizeof(a[0]);

    // for(int i=0;i<9;i++)
    // {
    //   printf("%d\t",a[i]);
    // } 
      printf("%d",length) ;
      

    return 0;
}