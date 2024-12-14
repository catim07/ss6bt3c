#include<stdio.h>
int main(){
	long password=546433,a;
	do{
	printf("moi ban nhap mat khau: ");
	scanf("%ld",&a);
	if(password==a){
		printf("ban da nhap dung mat khau roi.\n");
	}else{
		printf("ban nhap sai mat khau roi hihi\n");
	}
   }while( password != a );
   return 0;
}
