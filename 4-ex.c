#include<stdio.h>

int main(){
	int day,month,year,leap,sum;
	int errno;
	printf("input the year value : ");
	scanf("%d",&year);
	
	printf("input the month value : ");
	scanf("%d",&month);
	if(month<1 || month>12){
		printf("month value out of range");
		return 0;
	}
	
	printf("input the day value : ");
	scanf("%d",&day);

	if(year%400==0 || (year%4==0 && year%100!=0)){
		leap = 1; //闰年
	}else{
		leap = 0;
	}

	switch(month){
		case 1: sum = 0;
			if(day>31 || day<1){
				errno = 1;
			}
			break;
		case 2: sum = 31;
			if((leap==1 && day>29) || (leap==0 && day>28) || day<1){
				errno = 1;
			}
			break;
		case 3: sum = 28+31;  //59
			if(day>31 || day<1){
				errno = 1;
			}
			break;
		case 4: sum = 28+31+31; //90
			if(day>30 || day<1){
				errno = 1;
			}
			break;
		case 5: sum = 28+31+31+30; //120
			if(day>31 || day<1){
				errno = 1;
			}
			break;
		case 6: sum = 28+31+31+30+31; //151
			if(day>30 || day<1){
				errno = 1;
			}
			break;
		case 7: sum = 28+31+31+30+31+30; //181
			if(day>31 || day<1){
				errno = 1;
			}
			break;
		case 8: sum = 28+31+31+30+31+30+31; //212
			if(day>31 || day<1){
				errno = 1;
			}
			break;
		case 9: sum = 28+31+31+30+31+30+31+31; //243
			if(day>30 || day<1){
				errno = 1;
			}
			break;
		case 10: sum = 28+31+31+30+31+30+31+31+30; //273
			if(day>31 || day<1){
				errno = 1;
			}
			break;
		case 11: sum = 28+31+31+30+31+30+31+31+30+31; //304
			if(day>30 || day<1){
				errno = 1;
			}
			break;
		case 12: sum = 28+31+31+30+31+30+31+31+30+31+30; //334
			if(day>31 || day<1){
				errno = 1;
			}
			break;
	}

	if(errno == 1){
		printf("day value out of range");
		return 0;
	}

	sum = sum + day;
	if(leap == 1){
		sum++;
	}
	
	printf("the date %d-%d-%d is the %d day of the year",year,month,day,sum);
	return 0;
}