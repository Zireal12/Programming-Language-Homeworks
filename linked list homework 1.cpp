#include <stdio.h>
#include <stdlib.h>

struct student {
	int num;
	struct student *next;
	
};
typedef struct student node;

node* list()
{
node *head = NULL;	
node *newnode = NULL;	
node *p = NULL;

while(1)
{
newnode=(node*)malloc(sizeof(node));
printf("nodu giriniz\n");
scanf("%d",&newnode->num);
newnode->next=NULL;

if(head==NULL)
head=newnode;
	
else
{
	
if(newnode->num%2!=0)
{
newnode->next=head;
head=newnode;	
}

if (newnode->num==-1) break;

if(newnode->num%2==0)
{
p=head;
while(p->next!=NULL)
p=p->next;
p->next=newnode;

}				
}	
	
}		
return head;	
}

void read(node *head)
{
node *p=NULL;
p=head;
while(p!=NULL)
{
printf("%d\n",p->num);
p=p->next;		
}
	
}

int main()
{
node *head;
head= list();
read(head);
return 0;
	
}
