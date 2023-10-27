#include<stdio.h>
/*Write a C Program to find the coordinates of the element */

int main(){

    int a[10][10],r,c;
    int search,count=0;
    printf("Enter the  row and column size :- ");
    scanf("%d %d",&r,&c);
    printf("Enter the  elements :- ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",a[i][j]);
           
        }
         printf("\n");
    }
    //  for(int i=0;i<c;i++){
    //     for(int j=0;j<c;j++){
    //         if(a[i][j]==search){
    //         printf("%d %d\t",i,j);
    //         count++;
    //     }
    //     }
    // }
    // if (count == 0) {
    //     printf("Element not found.");
    //     } else{
    //         printf("Found at multiple places.\n");
    //         }





    return 0;
}