#include <stdio.h>
#include <stdlib.h>
int main()
{ int num, i, *ptr,even=0,odd=0;
  printf("Enter number of elements: ");
   scanf("%d", &num);
ptr = (int*) malloc(num * sizeof(int));  //memory allocated using malloc
if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
else
{printf("Enter elements of array: ");
    for(i = 0; i < num; ++i)
    {
        scanf("%d", ptr + i);
     
    }
for(i = 0; i < num; ++i)
    {if(*(ptr+i)%2==0)
    even++;
    else
    odd++;
    }
}
printf(" no of even are= %d\n",even);
printf(" no of odd are= %d",odd);
return 0;

}

