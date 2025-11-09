#include<stdio.h>
/*name-dorothy
group-1a32
date-11oct
roll no.-1025030170*/
int factorial(int n) {
	int fac=1;int i;
	for(i=1;i<=n;i++){
		fac=fac*i;
	}
	return fac;
}
int main() {
	int n;
	printf("enter num");
	scanf("%d",&n);
	int fact=factorial(n);
	printf("factorial of given number is %d",fact);
}
