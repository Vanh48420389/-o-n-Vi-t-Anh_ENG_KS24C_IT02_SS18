#include <stdio.h>
#include <string.h>
struct student {
		char fullName[100];
		int age;
		char phoneNumber[20];
	};
int main(){
	
	for(int i=0; i<5;i++){
	struct student user[i+1];
	printf("Moi ban nhap thong tin cho sinh vien thu %d :\n", i+1);
	printf("Moi ban nhap Ten:");
	fgets(user[i+1].fullName,sizeof(user[i+1].fullName),stdin);
	printf("Moi ban nhap Tuoi:");
	scanf("%d",&user[i+1].age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(user[i+1].phoneNumber, sizeof(user[i+1].phoneNumber),stdin);
}
	for(int i=0;i<5;i++){
	struct student user[i+1];
	printf("Thong tin sinh vien thu nhat la:");
	printf("%s\n", user[i+1].fullName);
	printf("%d\n", user[i+1].age);
	printf("%s\n", user[i+1].phoneNumber);
	
}
return 0;
}

