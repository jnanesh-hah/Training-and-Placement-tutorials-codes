#include<stdio.h>
//Recuresion function:- the function inside 

int sum(int a)
{

    if(a > 0)
    {
        return(a*sum(a-1));
    //10*(9*(8*(7*(6*(5*(4*(3*(2*1))))))))
    }
    else{
        return 0;

    }
}

void main(){

    int a=10;
    sum(10);
    

}