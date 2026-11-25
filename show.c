#include<stdio.h>
#include<stdlib.h>
#include "student.h"
void show(Stu *head)
{
    if(head == NULL)
    {
        printf("Linked List is Empty\n\n");
        return;
    }
    printf("-------------------------------------------------------------\n");
    printf("Rno \t Name \t Percentage\n");
    printf("-------------------------------------------------------------\n");
    while(head != NULL)
    {
        printf("%d \t  %s \t %0.2f\n", head ->rno, head->n, head->p);
        head = head->next;
    }   
    printf("-------------------------------------------------------------\n\n");
    return;
}
