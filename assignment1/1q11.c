#include<stdio.h>
#include<math.h>
//name-dorothy
//group-1a32
//date-22sep
//roll no.-1025030170

int main()
{
	char name='dorothy';
	int rollno=1025030170;
 
	float n,x,d;
	printf("enter number");
	scanf("%f",&n);
	printf("enter nth number \n");
	scanf("%f",&x);
	
	d=pow(n,1/x);
	
	printf("nth root is %f \n",d);
	return 0;

}
