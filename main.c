#include<stdio.h>
#include "Branch.h"
#include <string.h>

/**
 * @brief 
 * 
 */

/**
 * @brief 
 * 
 */
void init()
{
    init_subjects();
    init_professors();
    init_rooms();
    init_committee();
}

int main()
{
    int choice,i=1;
    char department[100];
     init();
    while(i>0)
    {
        printf("Enter 1 For Course Details :\n");
        printf("Enter 2 For Room Details :\n");
        printf("Enter 3 For Committee Details :\n");
        printf("Enter 0 For Exit :\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("------------------------------------------------------------------------------------------ \n");
            printf("Enter the Department Name: \n");
            scanf("%s",department);
            info(department);
            printf("------------------------------------------------------------------------------------------ \n");

          
        }
        else if(choice==2)
        {
            int roomn;
            printf("------------------------------------------------------------------------------------------ \n");
           printf("Enter the Room Number:\n");
           scanf("%d",&roomn);
           room details=getdetailsroom(roomn);
           if(details.room_num==0)
           {
               printf("INVALID ROOM NUMBER! \n");
           }
           else
           {
               if(details.booked==1)
               {
                   printf("ROOM is already booked by %s \n",details.booked_by);
                   printf("Select another Room \n");
                   room nb[100];
                   int k;
                   notbooked(nb,&k);
                   printf("List of Room which are not booked: \n");
                   for(int i=0;i<k;i++)
                   {
                       printf("Floor:%d Room Number: %d \n",nb[i].floor,nb[i].room_num);
                   }
                  
               }
               else
               {char book[100];
               printf("Please Enter the Name for booking: \n");
                scanf("%s",book);
                booking(roomn,book);
                   printf("Room Booked !\n");
                   printf("\n");
               }
           }
            printf("------------------------------------------------------------------------------------------ \n");

        }
        else if(choice==3)
        {
            printf("------------------------------------------------------------------------------------------ \n");
            int id;
            printf("Enter the Committee Id: \n");
            scanf("%d",&id);
            committee details=getdetailscommittee(id);
            if(details.cid==0)
            {
                printf("Invalid Committee ! \n");
            }
            else
            {
                printf("Committe Name: %s Committee Id: %d Committee Chair Person: %s \n",details.name,details.cid,details.cpname);
            }
            printf("------------------------------------------------------------------------------------------ \n");


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