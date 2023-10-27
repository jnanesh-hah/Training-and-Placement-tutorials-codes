#include<stdio.h>
int main(){
    //char a;
    int count=0;
    for(int i=65;i<91;i++){
    printf("%c = %d\t",i,i);
    count++;
    if(count==8||count==16||count==24){
        printf("\n");
    }
    }
    printf("\n\n");
    count=0;
     for(int i=97;i<123;i++){
    printf("%c = %d\t\t",i,i);
    count++;
    if(count==8||count==16||count==24){
        printf("\n");
    }
    }
    return 0;

}