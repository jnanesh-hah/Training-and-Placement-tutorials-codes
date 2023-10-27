#include<stdio.h>
/*Election results 
The results of a recently held mayor election have been provided.
the votes in multiple booths per caandidate have been provided as a table.
If any one candidate received over 50% of the votes , the program should print 
a message declaring that candidate the winner. If no candidate received 50% of the votes, 
the program should print a message declaring a run-off between the two candidates receiving
the highest number of votes. the two candidates should be identified by their letter 
names . Below is the format for the input
*/

int main(){

    int vote,total=0;
    int votes[10];
    int i,j;
    int m1,m2,m1i,m2i;
    int booths,candidates;
    printf("Enter total number of voting booths: ");
    scanf("%d",&booths);
    printf("\nEnter total number of candidates: ");
    scanf("%d",&candidates);
    
     for(i=0;i<candidates;i++){
        votes[i]=0;
       
     }
        printf("Enter the number of votes:- ");
     for(i=0;i<booths;i++){
        for(j=0;j<candidates;j++){

         scanf("%d",&vote);
            votes[j]+=vote;
            total+=vote;

        }
     }
     m1=-1;
     m2=-2;
     for(i=0;i<candidates;i++){
        if (votes[i]>m1){
            m2=m1;
            m2i=m1i;
            m1=votes[i];
            m1i=i;
        }
        else{
            if(votes[i]>m2) {
                m2 = votes[i];
                m2i = i;
                }
             }
     }

     if(votes[m1i]>total/2){
        printf("\n%c has won.",'A'+m1i);
     }
     else{
        printf("\nrunoff between %c and %c",'A'+m1i,'A'+m2i);
        }

    return 0;
}