#include<stdio.h>
#include<stdlib.h>

int main(){


float *nums;
int i;

  nums=(float*)calloc(5,sizeof(float));

    if(nums==NULL)
{
    printf("num1 Memory is not Allocated");
}

else{
    printf("Num1 Memory is allocated\n");
    for(int i=0;i<5;i++){
        nums[i]=i;
        printf("%d\t",nums[i]);
    }
}

nums =(float *)realloc(nums,10 * sizeof(int));
printf("--------------------Values after extending----------------------");
for(int i=0;i<10;i++){
printf("%d",nums[i]);
}

free(nums);














    return 0;

}




