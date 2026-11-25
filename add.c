#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"


Stu * add_new(Stu ** head, int r, char *name,float per)
{


    Stu * new = malloc(sizeof(Stu));
    Stu * t= *head;
    if(new == NULL)
    {
        printf("Allocation failed!!\n\n");
            return NULL;
    }
    new->rno = r;
    strcpy(new->n, name);
    new->p =per;
    new->next = NULL;


    if(*head == NULL)
    {
        *head = new;
        printf("Record added successfully\n\n");
        return new;
    }
    while(t->next != NULL)
        t=t->next;
    t->next=new;
    printf("Record Created Successfully!!\n\n");
    return new;
}

int no(Stu *head)
{
    Stu *t;
    int r=1;

    while(1)
    {
        t=head;
        while(t!=NULL)
        {
            if(t->rno == r)
            {
                break;
            }
            t=t->next;
        }
        if(t==NULL)
            return r;
        r++;
    }

}
