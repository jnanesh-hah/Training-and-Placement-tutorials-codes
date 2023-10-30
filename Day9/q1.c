#include<stdio.h>
int sum(int *num){
    int sum;
    int rem;
    while(*num!=0){
            rem=*num%10;
            sum=sum+rem;
            *num=*num/10;
    }
    return sum;

}
int main(){
    int num;
    printf("Enter the Number:-");
    scanf("%d",&num);
    printf("\n The Sum of the Digits is:- %d",sum(&num));
    return 0;
}