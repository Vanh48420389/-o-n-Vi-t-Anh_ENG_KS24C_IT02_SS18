#include <stdio.h>
#include <string.h>

int main(){
	
	struct student{
		int ID;
		char fullName[100];
		int age;
		char phoneNumber[20];
	};
	
	struct student user01={186, "Doan Viet Anh", 18, "0354978826"};
	
	
	printf("%d\n", user01.ID);
	printf("%s\n", user01.fullName);
	printf("%d\n", user01.age);
	printf("%s\n", user01.phoneNumber);
	
	return 0;
}
