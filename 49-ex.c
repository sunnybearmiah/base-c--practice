#include<stdio.h>
#define MAX
#define MAXN(x,y) (x>y)?x:y
#define MINN(x,y) (x>y)?y:x

int main(){
	int a=10,b=20;
#ifdef MAX
	printf("1.the greater number is : %d\n",MAXN(a,b));
#else
	printf("1.the lesser number is : %d\n",MINN(a,b));
#endif

#ifdef MIN
	printf("2.the greater number is : %d\n",MINN(a,b));
#else
	printf("2.the lesser number is : %d\n",MAXN(a,b));
#endif

#undef MAX
#ifdef MAX
	printf("3.the greater number is : %d\n",MAXN(a,b));
#else
	printf("3.the lesser number is : %d\n",MINN(a,b));
#endif

#define MIN
#ifdef MIN
	printf("4.the greater number is : %d\n",MINN(a,b));
#else
	printf("4.the lesser number is : %d\n",MAXN(a,b));
#endif

	return 0;
}
