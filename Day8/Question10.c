#include<stdio.h>
#define c 5
#define r 5
//Treasure Hunt
/*step 1 construct the 5 x 5 matrix*/
int main(){

        int tre[5][5]={34,21,32,41,25,14,42,43,14,31,54,45,52,42,23,33,15,51,31,35,21,52,33,13,23};
      int i=0,j=0,x,y;
      int count=0;

     //   printf("Entered Matrix:\n");
    //     for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         scanf("%d",&tre[i][j]);
    //     }
    //     printf("\n");
    // }

        while(1){//printf("\n");
      
            x=(tre[i][j])/10-1;
             y=(tre[i][j])%10-1;
             printf("%d%d\t",i+1,j+1);
                
             if(i==x && j==y){
                break;
             }
             i=x;
             j=y;
             count++;
                 if(count==5||count==10||count==15){
            printf("\n");
        }

        }



        
//printf("\n%d",count);
    // printf("Matrix after entering values:\n");
    //   for( i=0;i<r;i++){
    //     for(j=0;j<c;j++){
    //         printf("%d\t",tre[i][j]);
    //     }
    //     printf("\n");
    // }

    return 0;
}
