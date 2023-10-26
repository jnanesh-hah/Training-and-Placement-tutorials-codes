#include<stdio.h>
/*write a program to check whether the givem integer is an Strong number
Ans:-Strong Number is a number in which the sum of factorial of individual
digits of a number is equal to the original number
For Example:- 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

to solve this question
Step1:- calculate the Factorial of each digit of a number and add them
Step2:- Check whether the calculated result is equal to the actual number

*/
int fact(int num ){
    
        for(int i=num-1;i>1;i--){
            num=num*i;
        }
        return num;
}
 void Strong(int num){
    int q=num;
    int result=0;
    int rem;
    while(q!=0){
        rem=q%10;
            result=result+fact(rem);
            q=q/10;
    }
    if(result==num){
        printf("%d is strong number",num);
    }
    else{
        printf("%d is not strong number",num);
        }

 }
int main(){

        int num=40585;
        Strong(num);

       


   return 0;
}