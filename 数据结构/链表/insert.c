
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int insertNode(Node *L, int pos, int e)
{
    //用来保存要插入的节点的前驱节点
    Node *p=L;
    int i=0;
    //遍历链表找到插入位置的前驱节点
    while(i<pos-1)
    {
        p=p->next;
        i++;
        if(p== NULL)
        return 0;
    }
    //插入新的节点
    Node *q=(Node*)malloc(sizeof(Node));
    q->data=e;
    q->next=p->next;
    p->next=q;
    return 1;
}