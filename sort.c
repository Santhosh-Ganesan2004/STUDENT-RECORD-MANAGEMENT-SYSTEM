#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

void sort_name(Stu ** head)
{
    Stu *t=*head;
    int c;
    if(t== NULL)
    {
        printf("Linked List is empty!!\n\n");
        return;
    }
    if(t->next == NULL)
    {
        printf("Cannot sort a List with one element!!\n\n");
        return;
    }

    while(t != NULL)
    {
        c++;
        t=t->next;
    }

    for(int i =0;i<c-1;i++)
    {
       Stu *b4 =NULL;
       Stu * a= *head;
        for(int j=0;j<c-i-1;j++)
        {
            Stu *b = a->next;

            if(strcmp(a->n,b->n)>0)
            {
                a->next=b->next;
                b->next = a;

                if(b4 == NULL)
                    *head =b;
                else
                    b4 ->next = b;
                b4=b;
            }
            else
            {
                b4 =a;
                a=a->next;
            }
        }
    }
    printf("Sorted Successfully!!\n\n");

    printf("---------------------------------------------------\n");

}

void sort_per(Stu ** head)
{
    Stu *t=*head;
    int c =0;
    if(t== NULL)
    {
        printf("Linked List is empty!!\n\n");
        return;
    }
    if(t->next == NULL)
    {
        printf("Cannot sort a List with one element!!\n\n");
        return;
    }

    while(t != NULL)
    {
        c++;
        t=t->next;
    }

    for(int i =0;i<c-1;i++)
    {
       Stu *b4 =NULL;
       Stu * a= *head;
        for(int j=0;j<c-i-1;j++)
        {
            Stu *b = a->next;

            if(a->p< b->p)
            {
                a->next=b->next;
                b->next = a;

                if(b4 == NULL)
                    *head =b;
                else
                    b4 ->next = b;
                b4=b;
            }
            else
            {
                b4 =a;
                a=a->next;
            }
        }
    }
    printf("Sorted Successfullt!!\n\n");

    printf("---------------------------------------------------\n");
}

