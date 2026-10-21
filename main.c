#include<stdio.h>
	int main ()
{
	int a;
	int b;
	
	printf("nhap so nguyen a\n");
	scanf("%d",&a);
	printf("nhap so nguyen b\n");
	scanf("%d",&b);
	
	if(a>b)
	printf("So lon hon la %d",a);
	else if(b>a)
	printf("so lon hon la %d",b);
	return 0;
}