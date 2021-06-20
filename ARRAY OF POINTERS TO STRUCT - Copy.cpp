#include <stdio.h>
#include<stdlib.h>
struct person
{
   char name[21];
   float weight;
};

int main()
{
    struct person *personPtr;
	int n;
	printf("enter the number of person");
	scanf("%d",&n);
	personPtr=(struct person *) malloc(n*sizeof(struct person));
for(int i=0;i<n;i++)      
{   printf("Enter name ");
    scanf("%s", &(personPtr+i)->name);

    printf("Enter weight: ");
    scanf("%f", &(personPtr+i)->weight);
}
for(int i=0;i<n;i++)    

   {
	 printf("Displaying:\n");
    printf("name: %s\n", (personPtr+i)->name);
    printf("weight: %.2f", (personPtr+i)->weight);
}

    return 0;
}
