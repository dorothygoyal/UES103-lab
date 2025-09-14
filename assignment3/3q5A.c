#include<stdio.h>
//name-dorothy
//group-1a32
//date-14sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
	int x;
	printf("enter number");
	scanf("%d",&x);
	if(x%2==0) {
		printf("even \n");
	}
	else {
		printf("odd \n");
	}
	if(x>0) {
		printf("pos \n");
	}
	else if(x<0) {
		printf("neg \n");
	}
	else {
		printf("zero");
	}
}
