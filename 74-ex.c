#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct LNode{
	int data;
	struct LNode *next;
};

struct LNode *create_list(int array[],int n){
	struct LNode *q,*h,*p;
	h = (struct LNode *)malloc(sizeof(struct LNode));
	h->next = NULL;
	q = h;
	for(int i=0;i<n;i++){
		p = (struct LNode *)malloc(sizeof(struct LNode));
		p->next = NULL;
		p->data = array[i];
		q->next = p;
		q = p;
	}
	return h;
}

struct LNode *link(struct LNode *p,struct LNode *q){
	struct LNode *h;
	h = (struct LNode *)malloc(sizeof(struct LNode));
	h->next = NULL;
	h = p;
	while(h->next != NULL){
		h = h->next;
	}
	h->next = q->next; //链表结构有起始地址q->next是第一个有效值
	return p;
}

void print(struct LNode *p){
	while(p->next != NULL){
		printf("%d ",p->next->data);
		p = p->next;
	}
	printf("\n");
}

int main(){
	int a[5] = {0,1,2,3,4};
	int b[4] = {7,8,9,10};
	struct LNode *list_1,*list_2,*list;
	struct LNode *create_list(int array[],int n);
	struct LNode *link(struct LNode *p,struct LNode *q);
	void print(struct LNode *p);

	list_1 = create_list(a,5);
	printf("list_1 : ");
	print(list_1);

	list_2 = create_list(b,4);
	printf("list_2 : ");
	print(list_2);

	list = link(list_1,list_2);
	printf("list : ");
	print(list);
	
	return 0;
}