#include<stdio.h>
#include "Branch.h"
#include <string.h>

/**
 * @brief 
 * 
 */
ETRX E={"Electronics",1,3,"DC"};
EXTC ET={"Electronics and Telecommunication",2,5,"YS"};
IT I={"Information Technology",4,4,"DK"};
CS C={"Computer Science",3,6,"NK"};
void info(char dept[100])
{
    if(strcmp(department,E.name)==0)
          {
             printf("Enter the Subject Id: \n");
             scanf("%d",&subid);
             subject details=getdetails(subid);

             printf("For Professor Details Enter Y: ")
             char c;
             scanf("%c",&c);
             if(c=='Y')
             {
                 getprofdetails(details.pfid);
             }
          }
          else if(strcmp(department,C.name)==0)
          {

          }   
          else if(strcmp(department,ET.name)==0)
          {

          }
          else if(strcmp(department,I.name)==0)
          {

          }
          else
          {
              printf("--------------------Please Enter Valid Department  Name---------------- \n");
          }

}
int main()
{
    int choice,i=1,subid;
    char department[100];
    init_subjects();
    while(i>0)
    {
        printf("Enter 1 For Course Details :\n");
        printf("Enter 2 For Room Details :\n");
        printf("Enter 3 For Committee Details :\n");
        printf("Enter 0 For Exit :\n");
        scanf("%d",&choice);
        if(choice==1)
        {
          printf("Enter the Department Name: \n");
          scanf("%s",department);
           info();
          
          
        }
        else if(choice==2)
        {

        }
        else if(choice==3)
        {

        }
        else if(choice==0)
        {
            break;
        }
        else
        {

        }

    }
    

    return 0;
}