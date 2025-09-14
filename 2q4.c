#include<stdio.h>
//name-dorothy
//group-1a32
//date-8sep
//roll no-1025030170

int main() {
	char const name="dorothy";
	int rollno = 1025030170;
	int i;
	printf("enter number");
	scanf("%d",&i);
	i+=2;
	printf("num+2=%d\n",i);
	i-=3;
	printf("current num-3=%d \n",i);
	i*=4;
	printf("current num*4=%d \n",i);
	i/=3;
	printf("quotient when div by 3=%d \n",i);
	i%=4;
	printf("remainder when divided by 4=%d",i);
	return 0;
}
