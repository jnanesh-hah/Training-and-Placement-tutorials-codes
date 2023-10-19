#include<stdio.h>


void main(){

    FILE *fb;
    char filedata[100];
    char data = ' ',ans=' ';
    char name[20];
    int usn;
    int score=0;
    printf("Enter your Name :- ");
    scanf("%s",&name);
    printf("Enter your USN Please:-");
    scanf("%d",&usn);
    printf("Hi %s, All the Best For your Test ",name);
    fb = fopen("Quiz.txt","r");
    if(fb==NULL){
            printf("File is not present");
    }
    else{//this program is to read the all the contents in the file 
        printf("\nFile is present,Data present in file\n");
        // fscanf(fb,"%s",filedata);
        // printf("\nData present in file=%s",filedata);
        while(data !=EOF){ 
            
                    if(data!='$'){
                        data=fgetc(fb);
                        if(data=='$'){
                            printf("\nAns=");
                            scanf("\n%c",&ans);
                        }
                          else
                          {
                             printf("%c",data);
                          }
                          
                        }
                        else
                          {
                            data=fgetc(fb);
                            if(ans==data){
                                printf("Right Answer");
                                score++;
                            }
                            else{

                            printf("\n Wrong Answer,Correct answer is %c",data);
                          }

                    }

              }

        }


fclose(fb); 

fb=fopen("result.txt","w");//To store more number of prativcipitants use character "a"(that is append)
fprintf(fb,"Name=%s , USN=%d, Result=%d",name,usn,score);
fclose(fb);
}

