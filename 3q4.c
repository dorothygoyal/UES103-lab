#include<stdio.h>
//name-dorothy
//group-1a32
//date-15sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
	int m;
	printf("enter month number");
	scanf("%d",&m);
	switch(m)
	{
	case 1:
		printf("january");
		break;
	case 2:
		printf("february");
		break;
	case 3:
		printf("march");
		break;
	case 4:
		printf("april");
		break;
	case 5:
		printf("may");
		break;
	case 6:
		printf("june");
		break;
	case 7:
		printf("july");
		break;
	case 8:
		printf("august");
		break;
	case 9:
		printf("september");
		break;
	case 10:
		printf("oct");
		break;
	case 11:
		printf("nov");
		break;
	case 12:
		printf("dec");
		break;
	default:
		printf("error");
	}
	return 0;
}
