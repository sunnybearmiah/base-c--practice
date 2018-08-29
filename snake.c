//画一个场所 二维数组 默认为0 蛇的位置为蛇的值
//画一条蛇 链表pos数组位置，direct方向，val数组值，next，场所该位置值=val
//画一个食物 不出边界 不与蛇节点重复
//上下左右移动 重新画蛇不能走相反方向
//吃到食物 重新画蛇新增节点 val+1
//死掉 咬到自己就是下一个点场所值不是0


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 40
#define LINE 60
#define LEN 1
#define U 72
#define D 80
#define L 75
#define R 77
#define ESC 27

struct Snake{
	int x;
	int y;
	int val;
	char direct;
	struct Snake *next;
};

void init_map(char map[ROW+1][LINE+1]){
	//初始化地图的值
	int i,j;
	for(i=0;i<ROW+1;i++){
		map[i][0] = '+';
		map[i][LINE] = '+';
	}
	for(i=0;i<LINE+1;i++){
		map[0][i] = '+';
		map[ROW][i] = '+';
	}
	/*
	for(i=0;i<ROW+1;i++){
		for(j=0;j<LINE+1;j++){
			if(map[i][j] != 0){
				printf("%c",map[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	*/
}
	
struct Snake *init_snake(char map[ROW+1][LINE+1]){
	//初始化蛇
	struct Snake *snake,*snake_1,*m;
	int x,y;

	snake = (struct Snake *)malloc(sizeof(struct Snake));//新建节点
	snake->next = NULL;
	snake_1 = snake;
	for(int i=0;i<LEN;i++){
		m = (struct Snake *)malloc(sizeof(struct Snake));
		m->next = NULL;
		m->x = ROW/2;
		m->y = LINE/2-(LEN-i-1);
		m->val = i+1;
		m->direct = 'R';
		snake_1->next = m;
		snake_1 = m;
	}

	m = snake;
	while(m->next != NULL){
		x = m->next->x;
		y = m->next->y;
		
		if(map[x][y] ==0){
			map[x][y] = 'o';
		}
		m = m->next;
	}
	/*
	while(snake->next != NULL){
		printf("%d ",snake->next->x);
		printf("%d ",snake->next->y);
		snake = snake->next;
	}
	printf("\n");
	*/
	return snake;
}

struct Snake *get_head(struct Snake *p){
	struct Snake *snake,*head;
	snake = p;

	while(p->next != NULL){
		p = p->next;
	}
	head = p;
	head->next = NULL;
	/*
	printf("%d ",head->x);
	printf("%d ",head->y);
	printf("\n");
	*/
	return head;
}

struct Snake *create_food(char map[ROW+1][LINE+1],struct Snake *p){
	struct Snake *food,*q,*f,*m;
	int x=0,y=0;

	food = (struct Snake *)malloc(sizeof(struct Snake));
	food->next = NULL;
	q = p;
	f = food;
	srand(time(NULL));

	while(map[x][y] != 0){
		x = rand()%ROW +1;
		y = rand()%LINE +1;
	}

	m = (struct Snake *)malloc(sizeof(struct Snake));
	m->next = NULL;
	m->x = x;
	m->y = y;
	m->val = 1;
	m->direct = 'R';
	f->next = m;
	f = m;

	m = food;
	while(m->next != NULL){
		x = m->next->x;
		y = m->next->y;
		
		if(map[x][y] ==0){
			map[x][y] = '*';
		}
		m = m->next;
	}
	/*
	while(food->next != NULL){
		printf("%d ",food->next->x);
		printf("%d ",food->next->y);
		food = food->next;
	}
	*/
	return food;
}

void draw(char map[ROW+1][LINE+1],struct Snake *p,struct Snake *q){
	int i,j,x,y;
	struct Snake *snake,*food;
	snake = p;
	food = q;

	while(snake->next != NULL){
		x = snake->next->x;
		y = snake->next->y;
		
		if(map[x][y] ==0){
			map[x][y] = 'o';
		}
		snake = snake->next;
	}

	for(i=0;i<ROW+1;i++){
		for(j=0;j<LINE+1;j++){
			if(map[i][j] != 0){
				printf("%c",map[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int eat_food(char map[ROW+1][LINE+1],struct Snake *p){
	int x,y;
	x = p->x;
	y = p->y;

	if(map[x][y] == '*'){
		return 1;
	}else{
		return 0;
	}
	/*
	if(direct = 'U'){
		food = map[x-1][y];
	}else if(direct = 'D'){
		food = map[x+1][y];
	}else if(direct = 'L'){
		food = map[x][y-1];
	}else if(direct = 'R'){
		food = map[x][y+1];
	}

	if(food=='*'){
		return 1;
	}else{
		return 0;
	}
	*/
}

int bite_self(char map[ROW+1][LINE+1],struct Snake *p){
	int x,y;
	x = p->x;
	y = p->y;

	if(map[x][y] == 'o'){
		return 1;
	}else{
		return 0;
	}
}

int hit_wall(char map[ROW+1][LINE+1],struct Snake *p){
	int x,y;
	x = p->x;
	y = p->y;

	if(map[x][y] == '+'){
		return 1;
	}else{
		return 0;
	}
}

void move(char map[ROW+1][LINE+1],struct Snake *p,struct Snake *q){
	struct Snake *head,*snake,*food;
	head = get_head(snake);


}

int main(){
	struct Snake *snake,*food;
	char map[ROW+1][LINE+1];
	int i,j;

	//初始化地图
	void init_map(char map[ROW+1][LINE+1]);
	//初始化蛇身
	struct Snake *init_snake();
	//获取蛇头
	struct Snake *get_head(struct Snake *p);
	//初始化食物
	struct Snake *create_food(char map[ROW+1][LINE+1],struct Snake *p);
	//画出整个界面
	void draw(char map[ROW+1][LINE+1],struct Snake *p,struct Snake *q);
	//蛇开始移动
	void move(char map[ROW+1][LINE+1],struct Snake *p,struct Snake *q);
	//移动蛇
	void move_snake(char map[ROW+1][LINE+1],struct Snake *p);
	//是否吃到食物
	int eat_food(char map[ROW+1][LINE+1],struct Snake *p);
	//是否咬到自己
	int bite_self(char map[ROW+1][LINE+1],struct Snake *p);
	//是否撞墙
	int hit_wall(char map[ROW+1][LINE+1],struct Snake *p);

	memset(map,0,sizeof(map)); 
	init_map(map);
	snake = init_snake(map);
	food = create_food(map,snake);

	draw(map,snake,food);

}