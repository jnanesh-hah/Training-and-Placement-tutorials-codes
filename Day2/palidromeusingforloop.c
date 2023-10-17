#include<stdio.h>
void palindromornot(int a){
        int r=0,q=0,res=0;


         for(int i=0;i<=a;i++){

            q=i;
        while(q>0)
        {
                r=q%10;
                res=(res*10)+r;
                q=q/10;
              //  printf("\n value of q=%d, \n value of res=%d \n value of r= %d",q,res,r);
               // printf("\n-------------------------------");

        }
        if(i==res){
            printf("\n Its a palidrome number %d",i);
        }
        else{
            printf("\n Its not palidrome");
        }

}
}
int main(){

    palindromornot(100);
    return 0;
}