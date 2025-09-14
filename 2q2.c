#include<stdio.h>
#include<math.h>
//name-dorothy
//group-1a32
//date-8sep
//roll no-1025030170

int main() {
	int a,b,c,D,x1,x2;
	char const name="dorothy";
	int rollno = 1025030170;
	printf("equation is of form ax^2+bx+c \n");
	printf("enter a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	D= (pow(b,2)-4*a*c);
	x1= (-b-sqrt(D))/(2*a);
	x2=(-b+sqrt(D))/(2*a);
	printf ("roots are %d and %d", x1,x2);
	return 0;
}
