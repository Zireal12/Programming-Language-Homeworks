#include <stdio.h>
#include <stdlib.h>

struct student {
	int age;
	char name[50];
	struct student *next;
	
};
typedef struct student node;

node* createlist()
{
node *head=NULL;
node *newnode =NULL;	
node *p =NULL;
while(1){

newnode=(node*)malloc(sizeof(node));
printf("name degerini giriniz. Cikis icin -1 giriniz.\n");
scanf("%s",newnode->name);
printf("age degerini giriniz. Cikis icin -1 giriniz.\n");
scanf("%d",&newnode->age);
newnode->next=NULL;

if(head==NULL)
head=newnode;

else
{
	if(newnode->age==-1 ) break;
p=head;	
	while(p->next!=NULL)
	p= p->next;
	p->next=newnode;
}

}	

return head;
}


void deleteNode(node *head)
{
	node *p=head;
	node *q=NULL;
while(p->next!=NULL)
{
	if(q->age==p->age)
	q->next=p->next;
	else
	{
	q=p;
	p=p->next;
	}

	
}
}


void read(node *head)
{
	node *p=head;
	while(p!=NULL)
	{
		printf("%d   %s  \n",p->age,p->name);
		p=p->next;
	}
}



int main()
{
	int secim;
	node *head = createlist();
	while(secim!=-1)
	{
	printf("1-) Liste olustur\n");
	printf("2-) Listeyi oku\n");
	printf("3-) delete second age node \n");
	printf("4-) cikis icin -1 e basiniz\n");
	scanf("%d",&secim);

	switch(secim)
	{
	 case 1:
	 createlist();
	 break;
	 
	 case 2:
	 	read(head);
	 	break;
	 	
	 case 3:
	 	deleteNode(head);
	 	break;
		
		
	}	
	
    }
}
