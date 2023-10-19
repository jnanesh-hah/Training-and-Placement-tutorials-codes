#include<stdio.h>


void main(){

    FILE *fb;
    char filedata[100];
    char data = ' ';
    fb = fopen("Filedemo.txt","r");
    if(fb==NULL){
            printf("File is not present");
    }
    else{//this program is to read the all the contents in the file 
        printf("File is present,Data present in file\n");
        // fscanf(fb,"%s",filedata);
        // printf("\nData present in file=%s",filedata);
        while(data !=EOF){ 
            
                data= fgetc(fb);
                printf("%c",data);

        }

    }

} 