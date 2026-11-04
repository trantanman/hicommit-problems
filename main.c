#include <stdio.h>

int main() {
  int dtb;
  int drl;
  int xlht;
  int xlhk;
  scanf("%d",&dtb);
  scanf("%d",&drl);
  if (dtb>=9.0){
    printf("xlht=1");
  }else if (8.0<=dtb){
    printf("xlht=2");
  }else if (dtb>=7.0){
    printf("xlht=3");
  }else{
    printf("xlht=4");
  }
  if (drl>=90){
    printf("xlhk=1");
  }else if (drl>=80){
    printf("xlhk=2");
  }else if (drl>=70){
    printf("xlhk=3");
  }else{
    printf("KHONG_DAT");
  }
  if (xlht==1&&xlhk==1){
    printf("HOC_BONG_XUAT_SAC");
  }else if(xlht==1&&xlhk==2){
    printf("HOC_BONG_GIOI");
  }else if(xlht==2&&xlhk==1){
    printf("HOC_BONG_GIOI");
  }else if(xlht==2&&xlhk==2){
    printf("HOC_BONG_GIOI");
  }else if(xlht==3&&xlhk==3){
    printf("HOC_BONG_KHA");
  }else if(xlht==3&&xlhk==1){
    printf("HOC_BONG_KHA");
  }else if(xlht==3&&xlhk==2){
    printf("HOC_BONG_KHA");
  }else if(xlht==1&&xlhk==3){
    printf("HOC_BONG_KHA");
  }else if(xlht==2&&xlhk==3){
    printf("HOC_BONG_KHA");
  }else{
    print("KHONG_DAT");
  }
  return 0;
}