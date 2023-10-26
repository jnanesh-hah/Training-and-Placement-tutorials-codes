#include<stdio.h>
/*Write a C program to eliminate the common elements int given 2 arrays
and print only the non repeating elements and the total
   The first two inputs will be the length of 1st and 2nd, and array
   elements will be given as an input. Eliminate the repeated elements.*/

   int Not_common(int *arr1,int *arr2,int l1, int l2){
    int count=0,flag,i,j;
    for ( i = 0 ; i < l1 ; i++ ) {
        flag = 0;
        for ( j = 0 ; j < l2 ; j++ ){
            if ( arr1[i] == arr2[j]){
                flag = 1;
                break;
                }
                }
                if ( flag==0)
                {
                    count++;
                    printf("%d\n",arr1[i]);

                }
   }
   }
int main(){
        int arr1[10]={1,2,3,4};
        int arr2[10]={2,3};
        int l1=4; int l2=2;
        Not_common(arr1,arr2, l1, l2);
        


    return 0;
}