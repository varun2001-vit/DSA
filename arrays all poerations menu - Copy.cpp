#include<stdio.h>

#include<stdlib.h>

int a[10], pos, elem;

int n = 0;

void create();

void display();

void insert();

void del();

int main()

{

int choice;

while(1)

{

printf("\n\n~~~~MENU~~~~");

printf("\n=>1. Create an array of N integers");

printf("\n=>2. Display of array elements");

printf("\n=>3. Insert ELEM at a given POS");

printf("\n=>4. Delete an element at a given POS");

printf("\n=>5. Exit");

printf("\nEnter your choice: ");

scanf("%d", &choice);

switch(choice)

{

case 1: create();

break;

case 2: display();

break;

case 3: insert();

break;

case 4:del();

break;

case 5:exit(1);

break;

default:printf("\nPlease enter a valid choice:");

        }

    }

}

void create()

{

            int i;

            printf("\nEnter the number of elements: ");

            scanf("%d", &n);

            printf("\nEnter the elements: ");

            for(i=0; i<n; i++)

            {

                        scanf("%d", &a[i]);

            }

}

void display()

{

          
            for(int i=0; i<n;i++)

                        printf("%d\t ", a[i]);

}

void insert()

{

            int i;

            if(n == 10)

            {

        printf("\nArray is full. Insertion is not possible");

                        return;

            }

           else

            {

printf("\nEnter a valid position where element to be inserted:    ");

scanf("%d", &pos);

printf("\nEnter the value to be inserted:   ");

scanf("%d", &elem);

for(i=n-1; i>=pos-1 ; i--)

{

    a[i+1] = a[i];

}

a[pos-1] = elem;

n = n+1;

display();

}
}

void del()

{

int i;

if(n == 0)

{

    printf("\nArray is empty and no elements to delete");

    return;

}

else

{

    printf("\nEnter a valid position from where element to be deleted:    ");

    scanf("%d", &pos);

    elem = a[pos-1];

    printf("\nDeleted element is : %d \n", elem);

    for( i = pos-1; i< n-1; i++)

    {

        a[i] = a[i+1];

    }

    n = n-1;

    display();

}
}
