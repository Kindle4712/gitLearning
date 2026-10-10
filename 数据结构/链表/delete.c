
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int deleteNode(Node *L, int pos)
{
    if(L==NULL||pos<1)
    return 0;
    //用来保存要删除节点的前驱
    Node *p=L;
    int i=0;
    //遍历链表找到删除位置的前驱节点
    while(i<pos-1)
{
    p=p->next;
    i++;
    if(p==NULL)
    return 0;
}
    if(p->next==NULL)
    {
        printf("删除位置不合法\n");
        return 0;
    }
    //q指向要删除的节点的后继
    Node *q=p->next;
    //要删除节点的前驱指向要删除节点的后继
    //注意赋值是右赋值给左
    p->next=q->next;
    free(q);
    return 1;


}