#include <stdio.h>
#include <stdlib.h>

typedef char* string;

typedef struct
{
	string name;
	int age;
	double salary;
}TPerson;

int main(void)
{
	TPerson* em = malloc(sizeof *em);
	if(em)
	{
		em->name = "Carlitos Way";
		(*em).age = 40;
		em->salary = 344556.76322;
		printf("Name: %s\n",em->name);
		printf("Age: %d\n",em->age);
		printf("Salary: %.2f\n",em->salary);
	}
	free(em);
	em=NULL;
}
