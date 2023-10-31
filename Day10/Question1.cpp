#include<iostream>
using namespace std;
/*Given an array[] of size N and a number K , where K is smaller than the size of the array.
Find the K'th smallest element int he given array. Given that all array elements are distinct.
Examples:
input: arr[]={7,10,4,3,20,15},k=3
Output: 7
Input: arr[]={7,10,4,3,20,15},k=4
output:10*/
int main(){
    int len;
    // cout<<"Enter the Size of the array:-";

    // cin>>size;
    int arr[6]={7,10,4,3,20,15};
    int k;
    int temp=0;
    len=sizeof(arr)/sizeof(arr[0]);
    //cout<<len;
  
    cout<<"Enter K'th element you want";
    cin>>k;
    int result;

    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }

   
        for(int i=0;i<len;i++){
           
                if(arr[i]<arr[i+1]){
                    k--;
                   
                   
                }
                 result=arr[i];
                 if(k==0){
                        break;
                    }
        }
        
    
    for(int i=0;i<len;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"The "<<k<<"element of the array is :-  "<<result;

    return 0;
}