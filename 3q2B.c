#include<stdio.h>
//name-dorothy
//group-1a32
//date-15sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
	int x,y,z;
	printf("enter 3 integers");
	scanf("%d%d%d",&x,&y,&z);
	(x>y&&x>z)? printf("x is greatest"):0;
	(y>z&&y>x)? printf("y is greatest"):0;
	(z>y&&z>x)? printf("z is greatest"):0;
	return 0;
}
	
