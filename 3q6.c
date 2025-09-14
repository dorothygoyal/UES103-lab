#include<stdio.h>
//name-dorothy
//group-1a32
//date-14sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
	int n;
	printf("enter n");
	scanf("%d",&n);
	if (n%5==0&&n%8==0) {
		printf("n is div by 5 and 8");
	}
	else if(n%5==0||n%8==0) {
	printf("n is div by 5 or 8");
	}
	else{
		printf("n is div by neither 5 nor 8");
	}
	return 0;
}
