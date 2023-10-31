/*Given an array, the task is to cyclically rotate the aaray clockwise by one time
Examples:
Input: a[]={1,2,3,4,5}
Output: a[]={5,1,2,3,4}
Input : a[]={2,3,4,5,1}
Output: a[]={1,2,3,4,5}*/
#include<iostream>
using namespace std;

void rotate(int n,int arr[]){
    int temp=arr[n-1];
    for(int i=n-2;i>0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
}

int main(){
    
    return 0;
}