#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node_t{
int data;
struct Node_t* next;
};
typedef struct Node_t node;
typedef struct Node_t* Node;

Node newnode(Node next,int data){
Node node=(Node)calloc(1,sizeof(Node));
node->data=data;
node->next=next;
return node;
}
 void addatbegain(Node*plist,int data){
*plist=newnode(*plist,data);

}
void print(Node list){
while(list){
   printf("%d->",list->data);
   list =list->next;
}
printf("NULL\n");

}
void addlast(Node *plist,int data){
while(*plist==NULL){
    addatbegain(plist,data);

}
Node node=*plist;
while(node->next)node=node->next;
node->next=newnode(NULL,data);
}
void removebegain(Node *plist){
while(*plist==NULL){
  printf("not remove from empty list");
}
*plist=(*plist)->next;

}
int main()
{
 Node list=NULL;
 int data;
 print(list);
 scanf("%d",&data);
 addatbegain(&list,data);
print(list);
scanf("%d",&data);
 addatbegain(&list,data);
print(list);
scanf("%d",&data);
 addatbegain(&list,data);
print(list);
scanf("%d",&data);
 addatbegain(&list,data);
print(list);
scanf("%d",&data);
 addatbegain(&list,data);
print(list);
scanf("%d",&data);
addlast(&list,data);
print(list);
removebegain(&list);
print(list);
    return 0;
}


