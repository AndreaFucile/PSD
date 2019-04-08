#include<stdlib.h>
#include<stdio.h>
#include"item.h"
#include"list.h"

struct list{
	int size;
	struct node *head;
};
struct node {
	Item value;
	struct node *next;
};

node newNode();
void swap(node,node);
node min(node);

List newList()
{
	List l=malloc(sizeof(struct list));
	l->size=0;
	l->head=NULL;
	return l;
}

void swap(node *n1,node *n2)
{
	node tmp=newNode();
	tmp->value=n1->value;
	
	n1->value=n2->value;
	n2->value=tmp->value;
}

node min(node n)
{
	Item min=n->value;
	for(n;n!=NULL;n=n->next)
	{
		if(n->value < min)
			min=n->value;
	}
	return n;
}

node newNode()
{
	node n=malloc(sizeof(struct node));
	n.size=0;
	n.next=NULL;
}

int isEmpty(List l)
{
	if(l->head!=NULL)
		return 1;
	else 
		return 0;

}

List addHead(List l, Item i)
{
	node n=newNode();
	n->next=l->head;
	n->value=item;
	l->head=n;
	l->size += 1;
}

Item removeHead(List l)
{
	item app;
	if(isEmpty(l))
	{
		fprintf(stderr,"lista vuota \n");
		return NULL;
	}
	struct node *temp=l->head;
	l->head=temp->next;
	app=temp->item;
	free(temp);
	l->size --;
	return app;

}

Item getHead(List l)
{
	item app;
	if(isEmpty(l))
	{
		fprintf(stderr,"lista vuota \n");
		return NULL;
	}
	return  l->head->value;
}


void printList(List l)
{
	node *p;
	for(p=l->head;p!=NULL;p=p->next)
		output_item(p->value);
}


List selectionSort(List l)
{
	node*p;
	node n=newNode();
	for(p=l->head;p!=NULL;p=p->next)
	{
		n=min(p);
		swap(p,n);
	}
	return l;
}








