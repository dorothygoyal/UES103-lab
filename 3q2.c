#include<stdio.h>
//name-dorothy
//group-1a32
//date-14sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
	int x,y,z;
	printf("enter 3 numbers");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z) {
		printf("x is greatest");
	}
	else if (y>z&&y>x) {
		printf("y is greatest");
	}
	else {
		printf("z is greatest");
	}
	return 0;
}
