#include<stdio.h>
int main(){

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={4,5,6,7,8,9,10,13,14,15};
    int c[10];

    for(int i=0;i<10;i++){
        printf(" %d\n",a[i]);
    }
    for(int i=0;i<10;i++){
        printf(" %d\n",b[i]);
    }

    for(int j=0;j<10;j++){
        c[j]=a[j]+b[j];
        printf(" %d",c[j]);
    }

     






    printf("\nsizeof array a is=%d",sizeof(a[4]));

    return 0;

}