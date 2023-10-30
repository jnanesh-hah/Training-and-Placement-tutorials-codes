	#include<iostream>
	using namespace std;
    /*Write a program to print the */
	int fact(int num){
	     for(int i=num-1;i>0;i--)
	    {
	      num=num*i;
	    }
	    return num;
	}
	int sum(int num){
    int sum;
    int rem;
    while(num!=0){
            rem=num%10;
           sum+=fact(rem);
            num=num/10;
    }
    return sum;

}
	int main() {
	    int num=765;
	    int fact;
	    
	   
	    cout<<sum(num);
	      return 0;
	}