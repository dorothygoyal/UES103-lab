#include <stdio.h>
//name-dorothy
//group-1a32
//date-23sep
//roll no.-1025030170

int main() {
	char name='dorothy';
	int rollno=1025030170;
    int a, b, c , d, e;
    printf("enter 5 numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float mean =(a+b+c+d+e)/5.0;
    printf("mean is %f \n",mean);
    double s= (sqrt(pow(a-mean,2)+pow(b-mean,2)+pow(c-mean,2)+pow(d-mean,2)+pow(e-mean,2))/5.0);
    printf("std devn is %.2f \n",s);
    int max=a;//let krliya ki max is a
    if(b>max) max=b; //checking if b is greater than a(max var mein stored)
    if(c>max) max=c;//checking if c..
    if (d > max) max = d;
    if (e > max) max = e;
    printf("maximum is %d",max);
}
