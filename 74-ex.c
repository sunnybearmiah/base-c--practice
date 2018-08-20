#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct LNode{
	int data;
	struct LNode *next;
}

struct LNode *create_list(int array[],int n){
	int *p = array;
	struct LNode *q,*h;
	h = (struct LNode *)malloc(sizeof(struct LNode));
	h->next = NULL;
	q = h;
	for(int i=0;i<n;i++){
		q->data = *(p+i);
		q = q->next;
	}
	q = NULL;
	return h;
}



int main(){
	int a[5] = {0,1,2,3,4};
	int b[4] = {7,8,9,10};
	struct LNode *list_1,*list_2,*list;
	struct LNode *create_list(int array[],int n);
	struct LNode *link(struct LNode *p,struct LNode *q);

	list_1 = create_list(a,5);
	list_2 = create_list(b,4);
	list = link(list_1,list_2);
}