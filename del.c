#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"
void del_by_rno(Stu ** head, int r)
{
    Stu *del = *head;
    if(del == NULL)
    {
        printf("Empty LinkedList\n\n");
    printf("---------------------------------------------------\n");
        return;
    }
    if(del->rno == r)
    {
        *head = del->next;
        free(del);
        printf("Deleted Successfully\n\n");
    printf("---------------------------------------------------\n");
        return;
    }

    while(del->next !=NULL)
    {
        if(del->next->rno == r)
        {
            Stu *t = del->next;
            del->next = t->next;
            free(t);
            printf("Deleted Successfully \n\n");
    printf("---------------------------------------------------\n");
            return;
        }

        del=del->next;
    }
    printf("Record not found\n\n");

}

void del_by_name(Stu ** head,char * name)
{
    Stu *del = *head;
    int c=0;
    int rr;
    Stu *arr[100];
    Stu * b4 = NULL;
    if(del == NULL)
    {
        printf("Empty LinkedList\n\n");
    printf("---------------------------------------------------\n");
        return;
    }
    while(del !=NULL)
    {
        if(strcmp(del->n, name)==0)
        {
            arr[c]= del;
            c++;
        }
        b4 = del;
        del=del->next;
    }
    if(c==0)
    {
    printf("Record not found\n\n");
    return;
    }

    printf("%d  records found\n\n",c);
    printf("---------------------------------------------------\n");
    for(int i=0;i<c;i++)
    {
        printf("%d \t %s \t %f\n",arr[i]->rno,arr[i]->n,arr[i]->p);
    }

    printf("---------------------------------------------------\n");
    printf("Enter the roll number you want to delete:\n");
    scanf("%d", &rr);

    for(int i=0;i<c;i++)
    {
        if(arr[i]->rno == rr)
        {
            Stu *t = *head;
            if(arr[i] == *head)
            {
                *head = t->next;
                free(t);
                printf("Record deleted successfully!!\n\n");
    printf("---------------------------------------------------\n");
                return;
            }
            for(;t->next !=arr[i];t=t->next);
            Stu *t2 = t->next;
            t->next = t2->next;
            free(t2);
            printf("Record deeted successfully!!\n\n");
    printf("---------------------------------------------------\n");
            return;
        }
    }
    printf("Record not found");
}
void del_all (Stu **head)
{
    Stu *del = *head, *t;

    if(del == NULL)
    {
        printf("LinkedList is Empty!!\n\n");
    printf("---------------------------------------------------\n");
        return;
    }

    while(del!= NULL)
    {
        t=del;
        del=del->next;
        free(t);
    }
    *head = NULL;

    printf("All node deleted!!\n\n");
    printf("---------------------------------------------------\n");

}

void reverse(Stu **head)
{
    Stu * cur = *head;
    Stu * new = NULL;
    Stu *t;

    while(cur != NULL)
    {
        t= cur;
        cur= cur->next;

        t->next =new;
        new =t;

    }
    *head = new;
    printf("Reversed Successfully!!\n\n");
    printf("---------------------------------------------------\n");
}

