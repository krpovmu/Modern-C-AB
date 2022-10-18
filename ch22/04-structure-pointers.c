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
	TPerson* emp_p = &emp01;
	printf("Name:%s\n",(*emp_p).name);
	printf("Age:%d\n",emp_p->age);
	printf("Salary:%.3f\n",emp_p->salary);
}
