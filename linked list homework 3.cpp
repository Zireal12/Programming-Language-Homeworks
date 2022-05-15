#include <stdio.h>
#include <stdlib.h>

struct student {
	int num;
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
printf("nodu degerini giriniz. Cikis icin -1 giriniz.\n");
scanf("%d",&newnode->num);
newnode->next=NULL;

if(head==NULL)
head=newnode;

else
{
	if(newnode->num==-1) break;
p=head;	
	while(p->next!=NULL)
	p= p->next;
	p->next=newnode;
}

}	

return head;
}

int count(node *head)
{
	int counter=0;
	node *p =head;
	while(p!=NULL)
	{
		counter++;
		p=p->next;
	}
	return counter;
}

void delmiddle(node *head,int counter)
{
	node *p=head;
	node *q=head;
for(int i=1;i<counter/2;i++)
	p=p->next;	

while(q->next!=p)
q=q->next;
q->next=p->next;

}


void read(node *head)
{
	node *p=head;
	while(p!=NULL)
	{
		printf("%d\n",p->num);
		p=p->next;
	}
}



int main()
{
	int secim;
	node *head = createlist();
	int counter = count(head);
	while(secim!=-1)
	{
	printf("1-) Liste olustur\n");
	printf("2-) Listeyi oku\n");
	printf("3-) ortadaki dugumu sil\n");
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
	 	int counter = count(head);
	 	delmiddle(head,counter);
	 	break;
		
		
	}	
	
    }
}
