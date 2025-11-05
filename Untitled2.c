#include<stdio.h>
#define MAX 100 
int main(){
	int arr[MAX], size = 0, i, j, choice, max ;
	    //	in menu	
    while(1){
    	printf("\n_________________ Quan Li Danh Sach So Nguyen _________________\n")	;
        printf("1. them phan tu vao vi tri bat ki \n");
        printf("2. xoa phan tu o vi tri bat ki \n");
        printf("3. cap nhat gia tri tai vi tri bat ki \n");
        printf("4. tim kiem phan tu trong mang \n");
        printf("5. hien thi mang \n");
        printf("6. xep mang \n");
        printf("7. thoat chuong trinh \n");
        printf("_______________________________________________________________\n") ;
        
        printf("nhap lua chon: ");
        scanf("%d", &choice);
		
		switch(choice){
		    case 1: //nhap mang 
			    while(1){
			        printf("nhap kich thuoc can khoi tao cho mang: ");
	    	        scanf("%d", &size);
	    	
		            if (size>0 && size <= MAX){
			        break; 
		            }
		            printf("loi \n");
	            } 
	            for(i=0; i< size; i++) {
	        	    printf("array[%d] = ", i);
	        	    scanf("%d", &arr[i]); 
		        }
		        printf("ban da nhap %d phan tu", size);
	 	    break; 
		
		case 2: //in mang 
		    if(size == 0){
		    	printf("mang rong \n ");
		    	break; 
			} 
			printf("mang da cho la: \n");
			for(i=0; i<size; i++){
				printf("%d,", arr[i]); 
			}
			printf("\n") ;
			break;
		case 6: //tim kiem so lon nhat
		    if (size == 0) {
		    printf("mang rong \n") ;
		    break; 
		}
		    max = arr[0];
			for(i=1; i<size; i++){
				if(arr[i]> max) {
				max = arr[i];
			}
		}
		printf("so lon nhat la: %d", max);
		break; 
		
		case 4: //sap xep chan le 
		{
			int arrEven[size] , count1 = 0, count2 = 0, arrOdd[size];
			for(i=0; i<size; i++){
				if(arr[i]%2 == 0){
					arrEven[count1] = arr[i] ;
					count1++; 
				}else{
					arrOdd[count1] = arr[i] ;
					count2++; 
				} 
			} 
			int k =0; 
			for(i=0; i<count2;i++) {
				arr[k] = arrOdd[i]; 
				k++; 
			}
			for(i=0; i<count2;i++) {
				arr[k] = arrEven[i];
				k++; 
		}
        break; 
	} 
	    case 3: //giai thuat bong bong 
		    for(i=0; i<size-1; i++){
		    	for(j=0; i<size-1-i; j++){
		    		if(arr[j] > arr[j+1]){
					int t = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = t ;
				} 
			}
	    } 
	    break; 
	    case 5:{
				if(n == 0){
					printf("mang rong");
					break;
				}
				
				int x,pos = -1;
				printf("nhap vao gia tri can tim: ");
				scanf("%d",&x);
				
				//linear search neu mang chua sort
				if(sorted == 0){
					for(int i = 0 ; i < n;i++){
						if(arr[i] == x){
							pos = i;
							break;
						}
					}
				}else{ // binary search neu sorted  = 1 => mang sap xep 
					int left = 0,right = n -1;
					while(left <= right){
						int mid = (left + right) / 2;
						if(arr[mid] == x){
							pos = mid;
							break;
						}
						if(arr[mid] < x){
							left =mid + 1; 	
						}else{
							right = mid - 1;
						}
					}
				}
				if(pos == -1 ){
					printf("khong tim thay %d trong mang\n");
				}else{
					printf("Tim thay %d tai vi tri %d\n",x,pos);
				}
				break;
			}
   }
}
}


