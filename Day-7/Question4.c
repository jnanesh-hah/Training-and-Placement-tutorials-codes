#include<stdio.h>
/*Write a program to check whether the given Integer is an ArmstrongNumber.
    153 = 1*1*1 + 5*5*5 + 3*3*3* */
    void ArmstrongNumber(int num){
        int digit,reminder=0,dig,q;
        int mul=1,sum=0;
        q=num;
        while(q!=0){
           
           q= q/10;
            digit++;
        }
        q=num;
        dig=digit;

        while(q!=0){
            reminder=q%10;
            while(dig!=0){
                mul=mul*reminder;
                dig--;  
            }
            sum=sum+mul;
            q=q/10;
            mul=1;
            dig=digit;
        }

        if(sum==num){
            printf("%d is an Armstrong number",sum);
        }
        else{
            printf("\n%d is not an Armstrong number",num);
            
            }

    }
int main(){

    int arm;
    printf("Enter the Number:-");
    scanf("%d",&arm);
    ArmstrongNumber(arm);

    return 0;
}