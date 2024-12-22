#include<stdio.h>
const int MAX_SIZE = 100;
int currentLength = 0;
int main(){
	int array[MAX_SIZE];
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
	int deleteIndex;
        printf("Moi ban nhap vi tri can xoa ");
        scanf("%d",&deleteIndex);
    if(deleteIndex < 0 || deleteIndex >= currentLength){
        printf("Vi tri ko hop le \n");
        return 0;
    }
    for (int i = deleteIndex; i < currentLength -1 ; ++i) {
        array[i] = array[i+1];
    }
    currentLength--;
    printf("Xoa thanh cong\n");
    printf("Danh sach cac phan tu trong mang moi la : \n");
    for (int i = 0; i < currentLength; ++i) {
    printf("%d ",array[i]);
    } 
    return 0;
}

