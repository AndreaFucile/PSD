#include"item.h"

typedef struct list *List;

int ListisEmpty(List);
List addHead(List, Item);
Item removeHead(List);
Item getHead(List);
void printList(List);
List selectionSort(List);
