#include<stdio.h>

void main(){
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
       for(i=n;i>=1;i--){
        for(j=i-1;j>=0;j--)
        {
        printf("*  ");
        }
        printf("\n");
}
    for(i=1;i<=n;i++){
        for(j=0;j<=i-1;j++)
        {
        printf("*  ");
        }
        printf("\n");
}
    for(i=1;i<=n;i++){
        for(int k=i;k<n;k++){
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
        printf("*  ");
        }
        printf("\n");
}
}