#include <stdio.h>

typedef struct
{
	char* name;
	int age;
	double salary;

}structPersona;

int main(void)
{
	structPersona employee01 = {"Camilo Chaparro",32,5234.566};
	printf("Name: %s\n",employee01.name);
	printf("Age: %d\n",employee01.age);
	printf("Salary: %.2f\n",employee01.salary);
}
