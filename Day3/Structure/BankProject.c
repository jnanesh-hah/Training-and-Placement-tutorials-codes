#include<stdio.h>

struct accountDetails
{
    int customerId;
    int age;
    int  mobileNo;
    char name[50];
    char EmailId[20];

};

void main()
{

        int userChoice=0;
        struct accountDetails user1;  //Structure Declaration  and creating handel called user1
        printf("Do You Want to Creat Account Yes(1)/No(0)");
        scanf("%d",&userChoice);
        if(userChoice==1){
            printf("\nName:- ");
            scanf("%s",&user1.name);
            printf("\nEmailID:- ");
            scanf("%s",&user1.EmailId);
             printf("\nAge:- ");
            scanf("%d",&user1.age);
             printf("\nMobileNumber:- ");
            scanf("%d",&user1.mobileNo);
            user1.customerId=user1.age+user1.mobileNo;
            printf("\nYour account is Created Successfully, \nHere are the Details:-");
             printf("\nName:- %s",user1.name);
            printf("\nEmailID:- %s",user1.EmailId);
            printf("\nAge:-%d ",user1.age);
            printf("\nMobileNumber:- %d",user1.mobileNo);
           
            printf("\nCustomer ID:-%d",user1.customerId);

        }

}