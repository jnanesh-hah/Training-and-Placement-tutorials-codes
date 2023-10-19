#include<stdio.h>
#include<stdlib.h>
void main(){

    float *num;
    int N;
    int I;

    printf("Read how many numbers:");
    scanf("%d",&N);
    num=(float*)calloc(N,sizeof(float));
    /* num is now an array of float of size N */

    for(I=0;I<N;I++)
    {   
        printf("\nPlease enter number %d : ",num[I]);
        scanf("%f",&num[I]);
      
      
    }
      

 
}