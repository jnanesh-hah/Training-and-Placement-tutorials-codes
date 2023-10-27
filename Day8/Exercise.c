#include<stdio.h>

int main(){

        
        int arr[100];
        int size;
        
        printf("Enter the size of the array");
        scanf("%d",&size);
        printf("\nEnter the array elements:-");
        for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        }
        for(int i=0;i<size;i++){
            if(arr[i]%2==0){
                 printf("%d\t",arr[i]);
            }
          
        }
          for(int i=0;i<size;i++){
            if(arr[i]%2!=0){
                 printf("%d\t",arr[i]);
            }

          }   
    return 0;
}