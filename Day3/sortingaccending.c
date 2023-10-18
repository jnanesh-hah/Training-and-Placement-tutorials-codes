#include<stdio.h>
int main(){
    int a[9]={1,5,4,3,6,2,4,5,8};
    int temp=0;

    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
             
    } printf("%d\t",a[i]);
        }
      

    return 0;
}