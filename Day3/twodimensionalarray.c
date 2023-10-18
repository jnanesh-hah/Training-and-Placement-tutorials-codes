#include<stdio.h>
int ar=0,ac=0,br=0,bc=0;
    int a[20][20],b[20][20],c[20][20];

void displayarrrayb(){
     printf("Elements of B\n");
    for(int i=0;i<br;i++){
        for(int j=0;j<bc;j++){
           printf("%d\t",b[i][j]);

        }
        printf("\n");
     }
}
     void displayarrrayA(){
        printf("Elements of A\n");
    for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            printf("%d\t",a[i][j]);

        }
        printf("\n");
}
     }

   
int main(){
   
    
    printf("Enter the No of A rows and cols :- ");
    scanf("%d %d",&ar,&ac);

    printf("Enter the No of B rows and cols :- ");
    scanf("%d %d",&br,&bc);

     printf("enter the Elements A\n");
     for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            scanf("%d",&a[i][j]);
         
        }
     }

     printf("enter the Elements B\n");
     for(int i=0;i<br;i++){
        for(int j=0;j<bc;j++){
        
            scanf("%d",&b[i][j]);

        }
     }
     printf("\n");
       displayarrrayA();
       printf("\n");
        displayarrrayb();


        if((ar==br)&&(ac==bc)){
            for(int i=0;i<br;i++){
        for(int j=0;j<bc;j++){
        
            c[i][j]=a[i][j]+b[i][j];

        }
     }
  
        }
     printf("Elements of c\n");
    for(int i=0;i<ar;i++){
        for(int j=0;j<ac;j++){
            printf("%d\t",c[i][j]);

        }
        printf("\n");
}
    return 0;
}