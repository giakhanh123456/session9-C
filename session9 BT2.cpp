#include<stdio.h>

int main(){
	int array[5] = {1,2,3,4,5};
	int sua, giatrimoi;
    printf("Moi ban nhap vi tri can sua ");
    scanf("%d",&sua);
    if(sua <0 ||sua >= 5 ){
        printf("Vi tri ko hop le \n");
    }
    printf("nhap gia tri moi (gia tri cu la %d) ", array[sua]);
    scanf("%d",&giatrimoi);
    array[sua] = giatrimoi;
    printf("sua thanh cong\n");
    printf("Danh sach cac phan tu trong mang moi la : \n");
    for (int i = 0; i < 5; ++i) {
    printf("%d ",array[i]);
    } 
    return 0;
}
