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
#define U 119
#define D 115
#define L 97
#define R 100
#define ESC 27

struct Snake{
	int x;
	int y;
	int val;
	char direct;
	struct Snake *next;
};

//初始化地图
void init_map(char map[ROW+1][LINE+1]);
//初始化蛇身
struct Snake *init_snake();
//获取蛇头
struct Snake *get_head(struct Snake *p);
//初始化食物
void create_food(char map[ROW+1][LINE+1],struct Snake *p);
//画出整个界面
void draw(char map[ROW+1][LINE+1],struct Snake *p);
//蛇开始移动
void move(char map[ROW+1][LINE+1],struct Snake *p);
//移动蛇
struct Snake *new_snake(char map[ROW+1][LINE+1],struct Snake *p,struct Snake *h);
//是否吃到食物
int eat_food(char map[ROW+1][LINE+1],struct Snake *p);
//是否咬到自己
int bite_self(char map[ROW+1][LINE+1],struct Snake *p);
//是否撞墙
int hit_wall(char map[ROW+1][LINE+1],struct Snake *p);


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
	return snake;
}

struct Snake *get_head(struct Snake *p){
	struct Snake *snake,*head;
	int x,y,val;
	char direct;
	snake = p;

	while(snake->next != NULL){
		snake = snake->next;
	}
	x = snake->x;
	y = snake->y;
	val = snake->val;
	direct = snake->direct;

	head = (struct Snake *)malloc(sizeof(struct Snake));//新建节点
	head->next = NULL;
	head->x = x;
	head->y = y;
	head->val = val;
	head->direct = direct;
	head->next = NULL;

	return head;
}

void create_food(char map[ROW+1][LINE+1],struct Snake *p){
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
}

void draw(char map[ROW+1][LINE+1],struct Snake *p){
	int i,j,x,y;
	struct Snake *snake;
	snake = p;

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

void move(char map[ROW+1][LINE+1],struct Snake *p){
	struct Snake *head,*snake,*m;
	int direct,x,y;
	char head_direct;
	snake = p;

	head = get_head(snake);

	while(1){
		printf("input direct:");
		x = head->x;
		y = head->y;
		head_direct = head->direct;

		//读取方向
		direct = getchar();
		if(head->val != 1){
			if((head_direct == U && direct == D)
				||(head_direct == D && direct == U)
				||(head_direct == L && direct == R)
				||(head_direct == R && direct == L)){
				continue;
			}
		}

		if(direct == U){
			head->x = x-1;
		}else if(direct == D){
			head->x = x+1;
		}else if(direct == L){
			head->y = y-1;
		}else if(direct == R){
			head->y = y+1;
		}else{
			continue;
		}

		if(bite_self(map,head) || hit_wall(map,head)){
			printf("game over!");
			return;
		}

		head->direct = direct;
		m = new_snake(map,snake,head);
		draw(map,m);
		head = get_head(m);
	}
}

struct Snake *new_snake(char map[ROW+1][LINE+1],struct Snake *p,struct Snake *h){
	struct Snake *snake,*head,*m,*n;
	int val,x,y;
	char direct;
	n = p;
	snake = p;
	head = h;

	if(eat_food(map,head)){
		while(snake->next != NULL){
			snake = snake->next;
		}
		head->val = (head->val) +1;

		x = head->x;
		y = head->y;					
		val = head->val;
		direct = head->direct;

		snake->next = head;
		snake->next->next = NULL;
		
		map[x][y] = 'o';
		create_food(map,p);
	}else{
		x = snake->next->x;
		y = snake->next->y;
		map[x][y] = 0;

		n = snake->next->next;
		if(snake->next->next == NULL){
			snake->next = NULL;
		}else{
			snake->next = n;//删除第一个节点

			while(snake->next != NULL){
				x = snake->next->x;
				y = snake->next->y;
				val = (snake->next->val) -1;
				snake->next->val = val;
				map[x][y] = 'o';
				snake = snake->next;
			}
		}

		snake->next = head;
		snake->next->next = NULL;
		x = head->x;
		y = head->y;
		map[x][y] = 'o';
	}

	return p;
}


int main(){
	struct Snake *snake,*food;
	char map[ROW+1][LINE+1];
	int i,j;

	memset(map,0,sizeof(map)); 
	init_map(map);
	snake = init_snake(map);
	create_food(map,snake);

	draw(map,snake);

	move(map,snake);

}