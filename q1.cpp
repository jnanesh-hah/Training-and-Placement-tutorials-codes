#include <iostream>
using namespace std;
int sumDigits(int num){
    int a=0;
    int rem;
    while(num!=0){
        rem=num%10;
        a=a+rem;
        num=num/10;
    }
    return a;
}
int main() {
    // Write C++ code here
  int num;
  cout<<"Enter the Number:-";
  cin>>num;

 cout<<sumDigits(num);

    return 0;
}