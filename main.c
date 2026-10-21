#include<stdio.h>
	
int main() {
  int a;

  // nhap so nguyen n 
  if (scanf("%d", &a)==1)
  // kiem tra n chia het cho 2
  if (a%2==0){
      printf("Chan\n",a);
  }else{
      printf("le\n",a);
}
	return 0;
}