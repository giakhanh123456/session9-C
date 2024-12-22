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
    	if(currentLength == 0){
        printf("Mang chua co phan tu nao\n");
        } else{
        printf("Danh sach cac phan tu trong mang la : \n");
        for (int i = 0; i < currentLength; ++i) {
        printf("%d ",array[i]);
        } 
    }
    return 0;
}
