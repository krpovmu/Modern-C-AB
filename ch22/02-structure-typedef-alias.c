#include <stdio.h>

typedef char* string;

typedef struct
{
	string name;
	int age;
	double salary;

}TPerson;

int main(void)
{
	TPerson emp01 = {"Carlos Poveda",40,3500.4512};
	printf("Name:%s\n",emp01.name);
	printf("Age:%d\n",emp01.age);
	printf("Salary:%.3f\n",emp01.salary);
}
