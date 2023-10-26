// #include<stdio.h>
/*Write a C Program to find number of occurrences of second 
input in first input

input:- num1 and num2 such that 0 <= num1 <<=99999999 and 0 <= num2 <=9
You have to find number of occurrences of input num2 in input num1 and 
 return it with function int is Occured(int num1 ,int num2)
 
 Input : 199294                   Input:1222212             Input: 19845221
 
      9                                  2                           7
      
 Output: 3                        Output:5                  Output: 0*/




// int  Occured(int num1, int num2){

//     int count=0;
    
//     while(num1!=0){
//         if((num1%10)==num2)
//             count++;
//          num1/10;
        
        
//     }
        
//     return count;
// }
// int  main(){
//        int num1;
//         int num2;
//         int count=0;
     
//         printf("Enter the Frist Number:-");
//       scanf("%d",&num1);
//        printf("\nEnter the Second Number:-");
//       scanf("%d",&num2);

//      count = Occured(num1, num2);
//       printf("%d",count);
//     return 0;
// }

/*C program to print occurrence of a particular digit in a number.*/
 
#include <stdio.h>
 
/*function to get occurrence of a digit in a number*/
int findOccurrence(int num,int dig)
{
    int rem, cnt;
  
    cnt=0;
    while(num>0)
    {
        rem=num%10;
        if(rem==dig)
            cnt++;
        num/=10;
    }    
    return cnt;
}
  
int main()
{
    int num, digit, cnt;
  
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter digit to search: ");
    scanf("%d",&digit);
  
    cnt=findOccurrence(num,digit);
     
    printf("Total occurrence of digit is: %d in number: %d.",cnt,num);
      
    return 0;
}
