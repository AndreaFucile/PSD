#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "item.h"

Item input_item()
{
	char *p=malloc(sizeof(char)*20);
	scanf("%s",p);
	return p;
	
}
void output_item(Item item)
{
	char *p=item;
	printf("%s \n", p);
}

int cmp_item(Item item1,Item item2)
{
	char *p1=item1,*p2=item2;

	return strcmp(p1,p2);
}
