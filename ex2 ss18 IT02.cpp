#include <stdio.h>
#include <string.h>

int main(){
	
	struct student{
		int ID;
		char fullName[100];
		int age;
		char phoneNumber[20];
	};
	struct student user02;
	printf("Moi ban nhap thong tin cho sinh vien 02 :\n");
	printf("Moi ban nhap ID:");
	scanf("%d",&user02.ID);
	fflush(stdin);
	printf("Moi ban nhap Ten:");
	fgets(user02.fullName,sizeof(user02.fullName),stdin);
	printf("Moi ban nhap Tuoi:");
	scanf("%d",&user02.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(user02.phoneNumber, sizeof(user02.phoneNumber),stdin);
	printf("%d\n", user02.ID);
	printf("%s\n", user02.fullName);
	printf("%d\n", user02.age);
	printf("%s\n", user02.phoneNumber);
	return 0;
}

