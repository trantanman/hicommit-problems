#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  int max;
  // nhap ba so nguyen tu ban phim 
  printf("nhap so thu nhat: ");
  scanf("%d",&a);
  printf("nhap so thu hai: ");
  scanf("%d",&b);
  printf("nhap so nguyen thu ba: ");
  scanf("%d",&c);

  //gia su a la lon nhat
  max = a;
  //so sanh max voi b
  if (b>max){
    max = b;
  }

  //so sanh max voi c
  if (c>max){
    max = c;
  }
  // in ket qua
  printf("\n so lon nhat la :%d\n",max);

  return 0;

}
    

    
         
