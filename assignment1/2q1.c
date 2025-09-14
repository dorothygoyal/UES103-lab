#include<stdio.h>
#include<math.h>
//name-dorothy
//group-1a32
//date-8sep
//roll no-1025030170

int main() {
	char const name="dorothy";
	int rollno = 1025030170;
	float a,b,c,d,x,y;
	printf("enter angle in degrees"); //degrees mei enter
	scanf("%f", &a);
	b=sin(3.14*a/180) ; //degree to rad
	printf("value of sine function is %f \n", b); //&b type krne pe sirf 0 ans
	printf("enter base number \n");
	scanf("%f", &x);
	c=pow(x,3);
	printf("base num raised to power 3 is %f \n", c);
	printf("enter num whose log is to be found \n");
	scanf("%f", &y);
	d=log(y);
	printf("value of log is %f \n", d);
	return 0;
}
