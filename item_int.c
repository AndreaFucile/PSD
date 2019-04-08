#include <stdio.h>
#include<stdlib.h>
#include "item.h"

Item input_item()
{
	int *p=malloc(sizeof(int));
	scanf("%d",p);
	return p;
	
}
void output_item(Item item)
{
	int *p=item;
	printf("%d \n", *p);
}

int cmp_item(Item item1,Item item2)
{
	int *p1=item1,*p2=item2;

	return *p1-*p2;
}
