#include <stdio.h>
#include <string.h>
struct student {
	int id;
	char fullName[100];
	int age;
	char phoneNumber[20];
	};
int main(){
	struct student sv[50];
	for(int i=0; i<5;i++){
	sv[i].id=i+1;
	fflush(stdin);
	printf("Moi ban nhap thong tin cho sinh vien thu %d :\n", i+1);
	printf("Moi ban nhap Ten:");
	fgets(sv[i].fullName,sizeof(sv[i].fullName),stdin);
	printf("Moi ban nhap Tuoi:");
	scanf("%d",&sv[i].age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai:");
	fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber),stdin);
}
	
	for(int i=0;i<5;i++){
	printf("Thong tin sinh vien thu %d la:\n",i+1);
	printf("ID cua sinh vien :%d\n", sv[i].id);
	printf("Ho va Ten cua sinh vien :%s\n", sv[i].fullName);
	printf("Tuoi cua sinh vien :%d\n", sv[i].age);
	printf("Sdt cua sinh vien :%s\n", sv[i].phoneNumber);
	
}
return 0;
}

