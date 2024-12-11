#include<stdio.h>

void additem(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("Gia thi phan tu thu arr[%d] = ", i + 1);
		scanf("%d", &arr[i]);
	}
}

void printItem(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("Phan tu thu arr [%d] co gia tri la %d\n",i + 1 , arr[i]);
	}
}

int Themphantuvomang(int vitri, int size, int arr[], int newitem){
	if(vitri < 0 || vitri > size){
		printf("Vi tri khong hop le");
		return size;		
	}else{
			
		for(int i = size - 1; i >= vitri-1; i--){
			arr[i + 1] = arr[i];
		}
		arr[vitri-1] = newitem;
		size++;
    }
		return size;
}

void SuaPhanTu(int vitri, int arr[], int size, int newitem) {
    if(vitri < 1 || vitri > size) {
        printf("Vi tri khong hop le!\n");
    } else {
        arr[vitri - 1] = newitem; 
        printf("Phan tu tai vi tri %d da duoc sua voi gia tri moi: %d\n", vitri, newitem);
    }
}	

int XoaPhanTu(int vitri, int size, int arr[]) {
    if(vitri < 1 || vitri > size) {
        printf("Vi tri khong hop le!\n");
        return size;
    } else {
        for(int i = vitri - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; 
        printf("Phan tu tai vi tri %d da duoc xoa!\n", vitri);
        return size;
    }
}	
	
void SapXepMang(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang da duoc sap xep.\n");
}	

void TimKiemPhanTu(int arr[], int size, int giaTri) {
    int found = 0; 
    for(int i = 0; i < size; i++) {
        if(arr[i] == giaTri) {
            printf("Phan tu %d duoc tim thay tai vi tri %d\n", giaTri, i + 1);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", giaTri);
    }
}	


int main(){
	
	int luachon;
	int arr[100];
	int size=0;
	int vitri;
	int newitem;
	int giaTri;
	
	do{

	
	printf("\nMENU\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra cac gia tri cac phan tu dang quan ly\n");
	printf("3. Them mot phan tu vao vi tri chi dinh\n");
	printf("4. Sua mot phan tu o vi tri chi dinh\n");
	printf("5. Xoa mot phan tu tai vi tri chi dinh\n");
	printf("6. Sap xep phan tu\n");
	printf("7. Tim kiem phan tu nhap vao\n");
	printf("8. Thoat\n");
    printf("Vui long nhap lua chon cua ban : ");

	scanf("%d", &luachon);
	
	switch(luachon){
		case 1:
			printf("Vui long nhap so luong phan tu : ");
			scanf("%d", &size);
			additem(arr, size);
			break;
		case 2:
			printItem(arr, size);
			break;
		case 3:
			printf("Nhap vi tri muon them: ");
            scanf("%d", &vitri);
            printf("Nhap gia tri muon them: ");
            scanf("%d", &newitem);
			int tmp = Themphantuvomang(vitri, size, arr, newitem);
			size = tmp;
			break;
		case 4:
			printf("Nhap vi tri muon sua: ");
            scanf("%d", &vitri);
            printf("Nhap gia tri moi: ");
            scanf("%d", &newitem);
            SuaPhanTu(vitri, arr, size, newitem);
			break;
		case 5:
			printf("Nhap vi tri muon xoa: ");
            scanf("%d", &vitri);
            size = XoaPhanTu(vitri, size, arr);
			break;
		case 6:
			SapXepMang(arr, size);  
            printItem(arr, size); 
            break;
			
		case 7:
			printf("Nhap gia tri phan tu muon tim: ");
            scanf("%d", &giaTri);
            TimKiemPhanTu(arr, size, giaTri);  
			break;
		case 8:
			printf("Thoat khoi chuong trinh.\n");
			break;
		default	:
			printf("Gia tri khong hop le vui long thu lai.\n");
			break;
	}
      }while( luachon != 8 );

    return 0;
}





