#include<iostream>
using namespace std;

int main(){
  ;
    int size;
    int sum=0;
    cout<<"Enter the size of the array:-";
    cin>>size;
    int arr[size];

    cout<<endl;
    cout<<"Enter the array elements:-";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
       sum=sum+arr[i];
    }
    cout<<"The Sum of the Array Elements:-"<<sum;
    return 0;
    
}