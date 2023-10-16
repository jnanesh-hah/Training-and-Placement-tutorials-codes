#include<stdio.h>

void main(){
char usrch=' '';

  int count=4;

  printf("DO you want to signup(s)/Login(1)= ");
  ipval:
  scanf("\n %c",&usrch);

  printf("Enter Choice is = %c \n",usrch);

  if(usrch=='l'){
  printf("Login is Selected\n");
  }
  else if(usrch=='s')
  {
    printf("Sign up is Selected\n");
  }
  else{

    count--;
    if(count!=0){
    printf("\nRemaining Count is= %d",count);
      printf("Worng input , please Enter Valid input =");
      goto ipval; 
    }
    else{
      printf("You are Exceeded");
  }
    printf("Count=%d",count);
}
