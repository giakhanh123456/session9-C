#include <stdio.h>
const int MAX_SIZE = 100;
int currentLength = 0;
int main() {
    int array[MAX_SIZE];
    while(1){
        printf("MENU\n");
        printf("1. Nhap phan tu cho mang.\n");
        printf("2. Hien thi mang.\n");
        printf("3. Them gia tri vao mang.\n");
        printf("4. sua gia tri phan tu.\n");
        printf("5. Xoa phan tu.\n");
        printf("6. thoat.\n");
        printf("================================\n");
        int choice;
        printf("nhap chuc nang : ");
        scanf("%d",&choice);
    switch (choice) {
    case 1:
        int n;
	    printf("nhap so luong phan tu: ");
        scanf("%d", &n);
	if(n <= 0 || n > MAX_SIZE){
		printf("khong hop le, nhap tu 1 - %d\n", MAX_SIZE);
	}
	for(int i = 0; i < n; i++){
		printf("nhap array[%d] = ", i);
		scanf("%d", array + i);
	}
	currentLength = n;
	break;
	case 2:
	if(currentLength == 0){
        printf("Mang chua co phan tu nao\n");
    } else{
        printf("Danh sach cac phan tu trong mang la : \n");
    for (int i = 0; i < currentLength; ++i) {
        printf("%d ",array[i]);
        } 
    }
    printf("\n");
    break;
    case 3:
    int addIndex, newValue;
        printf("Moi ban nhap gia tri can them ");
        scanf("%d",&newValue);
        printf("Moi ban nhap vi tri can them ");
        scanf("%d",&addIndex);
    if(addIndex < 0){
        addIndex = 0;
    }else if(addIndex > currentLength){
        addIndex = currentLength;
    }
    for(int i = currentLength; i > addIndex; i--){
        array[i] = array[i-1];
    }
    array[addIndex] = newValue ;
    currentLength++;
    printf("Them thanh cong\n");
    break;
    case 4:
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
    break;
    case 5:
    int deleteIndex;
        printf("Moi ban nhap vi tri can xoa ");
        scanf("%d",&deleteIndex);
    if(sua < 0 || sua >= currentLength){
        printf("Vi tri ko hop le \n");
        break;
    }
    for (int i = deleteIndex; i < currentLength -1 ; ++i) {
        array[i] = array[i+1];
    }
        currentLength--;
        printf("Xoa thanh cong\n");
        break;
    case 6:
    	break;
    default:
        printf("khong hop le, vui long nhap lai\n");
        break;
    }
    if(choice == 6){
            printf("Thoat chuong trinh");
            break;
    }
  }
    return 0;
}
	
	
	
	
	
	
