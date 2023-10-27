#include<stdio.h>
/* A company has a sale record of N products for M days.
The company wishes to know the maximum revenue from a given product 
of the N product each day. Write an algorithm to find the highest 
revenue received each day

Input:
    The first line of the input consists of two space-separated integers-days(M)
    and products(N). representing the days and the products in the sales record.
    The next M lines consist of N space-separated integers representing the sales revenue
     received from each products each day

Output: 
    print M space-separated integers representing the maximum revenue received each day.

*/
void main(){
        int r=3,c=4;
        int i,j;
        int max=0;
        int arr[3][4]={100,198,333,323,122,232,221,111,223,565,245,764};
        printf("The elements of the array are\n");
        for(i=0;i<r;i++){
            max=0;
            for(j=0;j<c;j++)
            {
                if(max<arr[i][j]){
                    max = arr[i][j];
                }
                 //printf("%d\t",arr[i][j]);
            }
             printf("\n%d",max);
       
        }
           
        
}