#include <stdio.h>
int main() {
  int a;
  scanf("%d",&a);
  
  switch (a){
    case 1:
    printf ("XEP_LOAI_XUAT_SAC");
    case 2:
    printf ("XEP_LOAI_GIOI");
    case 3:
    printf ("XEP_LOAI_KHA");
    case 4:
    printf ("XEP_LOAI_TRUNG_BINH");
  default: 
    printf ("KHONG_HOP_LE");
  }
  return 0;
}