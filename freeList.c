#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;

}Node;
void freeList(Node *L)
{
    Node *p=L->next;//指向第一个数据节点
    Node *q;
    while(p!=NULL)
    {
        q=p->next;
        free(p);
        p=q;
    }
    L->next=NULL;//头节点的next指针指空

}