#include <stdio.h>

typedef char* string;

typedef union
{
	string name;
	int age;
	double salary;
}TUnion;

int main(void)
{
	TUnion u;
	u.name = "Carlos Poveda";
	printf("Name: %s\n",u.name);
	u.age = 23;
	printf("Age: %d\n",u.age);
	u.salary = 23456.789;
	printf("Salary: %.2f\n",u.salary);
}
