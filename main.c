#include <stdio.h>

int main() {
  int dtb;
  int drl;
  scanf("%d",&dtb);
  scanf("%d",&drl);
  if (dtb>=9.0,drl>=90){
    printf("HOC BONG XUAT SAC");
  }else if (dtb>=8.0,drl>=80);{
    printf("HOC BONG GIOI");
  }else if (dtb>=7.0,drl>=70){
    printf("HOC BONG KHA");
  }else{
    printf("KHONG DAT");
  }
  return 0;
}