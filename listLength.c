#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
//遍历链表使得长度增加
int listLength(Node *L)
{
    Node *p=L;
    int len=0;
    while(p!=NULL)
    {
        p=p->next;
        len++;
    }
    return len;
}