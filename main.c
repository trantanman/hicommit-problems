#include<stdio.h>
	int main ()
{
	int a;
	int b;
	
	printf("nhap so nguyen a\n");
	scanf("%d",&a);
	
	
	if(a%2==0)
	printf("Chan %d",a);
	else if(a%2!=0)
	printf("le %d",a);
	return 0;
}