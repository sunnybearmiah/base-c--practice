#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreateList(int n);
void print(LinkList h);

int main(){
	LinkList Head = NULL;
	int n ;
	printf("link length : ");
	scanf("%d",&n);
	Head = CreateList(n);

	printf("link table value : ");
	print(Head);
	printf("\n\n");
	return 0;
}

LinkList CreateList(int n){
	LinkList L,p,q;
	int i;
	L = (LNode*)malloc(sizeof(LNode));
	if(!L){
		return 0;
	}

	L->next = NULL;
	q = L;
	for(i=1;i<=n;i++){
		p = (LinkList)malloc(sizeof(LNode)); //创建节点
		printf("input the %dth value : ",i);
		scanf("%d",&(p->data));
		p->next = NULL; //p只存一个元素
		q->next = p;  //q下一个元素指向;
		q = p; //当前节点设置成新加的节点
	}

	return L;
}

void print(LinkList h){
	LinkList p = h->next;
	while(p!=NULL){
		printf("%d",p->data);
		p = p->next;
	}
}