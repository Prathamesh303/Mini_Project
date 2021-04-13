#include<stdio.h>
#include "Branch.h"
#include <string.h>
ETRX E={"ETRX",1,3,"DC"};
EXTC ET={"EXTC",2,5,"YS"};
IT I={"IT",4,4,"DK"};
CS C={"CS",3,6,"NK"};


void info(char department[100])
{
    int subid;
    if(strcmp(department,E.name)==0)
          {
             printf("Enter the Subject Id: \n");
             scanf("%d",&subid);
             subject details=getdetails(subid);
             if(details.sid==0)
             {
                printf("Invalid Subject Id \n");
             //   return =-1
             }
             else if((subid%1000)!=E.id)
             {
                 printf("---------WRONG DEPARTMENT !----------\n");
             }
             else
             {
                printf("For Professor Details Enter yes: \n");
                char t[4];
                scanf("%s",t);
                if(strcmp(t,"yes")==0)
                {
                   professor p1= getdetailsprof(details.pid);
                   printf("PROFESSOR DETAILS: \n");
                   printf("Professor Name:%s Professor ID:%d Professor Degree:%s  \n",p1.name,p1.pid,p1.degree);
                printf("\n");
                }
                printf("SUBJECT DETAILS: \n");
             printf("Subject Name:%s Subject ID:%d Department Name:ELECTRONICS(%s) Department ID:%d \n",details.name,details.sid,E.name,details.did);
             }
             
            
          }
          else if(strcmp(department,C.name)==0)
          {
              printf("Enter the Subject Id: \n");
             scanf("%d",&subid);
             subject details=getdetails(subid);
             if(details.sid==0)
             {
                printf("Invalid Subject Id \n");
             //   return =-1
             }
              else if((subid%1000)!=C.id)
             {
                 printf("---------WRONG DEPARTMENT !----------\n");
             }
             
             else
             {
                printf("For Professor Details Enter yes: \n");
                char t[4];
                scanf("%s",t);
                if(strcmp(t,"yes")==0)
                {
                   professor p1= getdetailsprof(details.pid);
                   printf("PROFESSOR DETAILS: \n");
                   printf("Professor Name:%s Professor ID:%d Professor Degree:%s  \n",p1.name,p1.pid,p1.degree);
                printf("\n");
                }
                printf("SUBJECT DETAILS: \n");
             printf("Subject Name:%s Subject ID:%d Department Name:COMPUTER SCIENCE(%s) Department ID:%d \n",details.name,details.sid,E.name,details.did);
             }
          }   
          else if(strcmp(department,ET.name)==0)
          {
              printf("Enter the Subject Id: \n");
             scanf("%d",&subid);
             subject details=getdetails(subid);
             if(details.sid==0)
             {
                printf("Invalid Subject Id \n");
             //   return =-1
             }
              else if((subid%1000)!=ET.id)
             {
                 printf("---------WRONG DEPARTMENT !----------\n");
             }
             else
             {
                printf("For Professor Details Enter yes: \n");
                char t[4];
                scanf("%s",t);
                if(strcmp(t,"yes")==0)
                {
                   professor p1= getdetailsprof(details.pid);
                   printf("PROFESSOR DETAILS: \n");
                   printf("Professor Name:%s Professor ID:%d Professor Degree:%s  \n",p1.name,p1.pid,p1.degree);
                printf("\n");
                }
                printf("SUBJECT DETAILS: \n");
             printf("Subject Name:%s Subject ID:%d Department Name:ELECTRONICS & TELECOMMUNICATION(%s) Department ID:%d \n",details.name,details.sid,E.name,details.did);
             }
          }
          else if(strcmp(department,I.name)==0)
          {
              printf("Enter the Subject Id: \n");
             scanf("%d",&subid);
             subject details=getdetails(subid);
             if(details.sid==0)
             {
                printf("Invalid Subject Id \n");
             //   return =-1
             }
              else if((subid%1000)!=IT.id)
             {
                 printf("---------WRONG DEPARTMENT !----------\n");
             }
             else
             {
                printf("For Professor Details Enter yes: \n");
                char t[4];
                scanf("%s",t);
                if(strcmp(t,"yes")==0)
                {
                   professor p1= getdetailsprof(details.pid);
                   printf("PROFESSOR DETAILS: \n");
                   printf("Professor Name:%s Professor ID:%d Professor Degree:%s  \n",p1.name,p1.pid,p1.degree);
                printf("\n");
                }
                printf("SUBJECT DETAILS: \n");
             printf("Subject Name:%s Subject ID:%d Department Name:INFORMATION TECHNOLOGY(%s) Department ID:%d \n",details.name,details.sid,E.name,details.did);
             }
          }
          else
          {
              printf("\n--------------------Please Enter Valid Department  Name---------------- \n");
          }
printf("\n");
}