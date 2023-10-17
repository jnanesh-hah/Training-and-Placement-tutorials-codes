#include<iostream>
using namespace std;

int main(){
        int a[10]={1,2,3,4,5,6,7,8,9,10};
        string city="mysuru";

            for(int i : a)
    {
    	cout<<i<<" ";
    }

        cout<<sizeof(a)<<endl;
         cout<<city[2];
        
    return 0;
}