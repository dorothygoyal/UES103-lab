#include<stdio.h>
//name-dorothy
//group-1a32
//date-10sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
	printf("enter principal amt, rate of interest and time period");
	int p,r,t;
	scanf("%d%d%d",&p,&r,&t);
	printf("si=%d",(p*r*t)/100);
	return 0;
}
