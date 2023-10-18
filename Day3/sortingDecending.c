#include <stdio.h> 
  
int main() 
{ 
  
    int a[9] = {1,5,4,3,6,2,4,5,8}; 
    int n = 9, i, j, t = 0; 
    
    // iterates the array elements 
    for (i = 0; i < n; i++) { 
        
        // iterates the array elements from index 1 
        for (j = i + 1; j < n; j++) { 
            
            // comparing the array elements, to set array 
            // elements in descending order 
            if (a[i] < a[j]) { 
                t = a[i]; 
                a[i] = a[j]; 
                a[j] = t; 
            } 
        } 
    } 
    // printing the output 
    for (i = 0; i < n; i++) { 
        printf("%d ", a[i]); 
    } 
    return 0; 
}
// #include<stdio.h>
//  int a[9]={1,5,4,3,6,2,4,5,8};

//  void displayarray(){
//     for(int i=0;i<9;i++){
//         printf("%d\t",a[i]);
//     }

//  }
// int main()
// {   
//     printf("\nBefore Sorting\n");
//     displayarray();
//     int temp=0,maxpos=0,maxele=0;

//     for(int i=0;i<9;i++){
//         maxpos=i;
//         maxele=a[i];

//       for(int j=i+1;j<9;j++){

//         if(maxele<a[j]){
//             maxpos=j;
//             maxele=a[j];
//         }
//         temp=a[i];
//         a[i]=maxele;
//         a[maxpos]=temp;
//         printf("After %d Iteration\n",i++);
//         displayarray();
//       }
      
      
//     }printf(" \nAfter Sorting\t ");
//       displayarray();

//     return 0;

// }