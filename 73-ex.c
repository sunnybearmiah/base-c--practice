#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct LNode{
	int data;
	struct LNode *next;
};

struct LNode *create(int n){
	struct LNode *p,*q,*h;

	h = (struct LNode *)malloc(sizeof(struct LNode));//新建节点
	h->next = NULL;
	p = h;

	for(int i=1;i<=n;i++){
		printf("input the %dth node data : ",i);
		q = (struct LNode *)malloc(sizeof(struct LNode));//新建节点
		scanf("%d",&(q->data));
		q->next = NULL; //q是单节点

		p->next = q; //把q加到链表h后面
		p = q; //把节点设置成当前节点
	}
	return h;
}

void print(struct LNode *head){
	printf("origin link order : ");
	while(head->next != NULL){
		printf("%d ",head->next->data);
		head = head->next;
	}
}

void print_reverse(struct LNode *head){
	struct LNode *pre,*node,*nex;

	pre = head->next;
	node = pre->next;
	while(node != NULL){
		nex = node->next; //取第三个
		node->next = pre; //第二个的指向为第一个
		pre = node; //之前的第二个变成下次的第一个
		node = nex; //之前的第三个点成第二个
	}
	head->next->next = NULL;//此时head在倒数原来第二个，最后一个节点后为null
	head->next = pre; //原来最后一个变成第一个

	printf("reversed link order : ");
	while(head->next != NULL){
		printf("%d ",head->next->data);
		head = head->next;
	}
}

int main(){
	int n=10;
	struct LNode *head = NULL;	

	struct LNode *create(int n);
	void print(struct LNode *head);
	void print_reverse(struct LNode *head);

	head = create(n);
	print(head);
	printf("\n");
	print_reverse(head);
	return 0;
}

