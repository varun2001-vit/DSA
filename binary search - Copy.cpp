#include<stdio.h>
int main()
{int a[10],n=10,start=0,end=n-1,b;
printf("enter the elements");
for(int i=0;i<10;i++)
{scanf("%d",&a[i]);
}
printf("enter the element to be searched");
scanf("%d",&b);
while(start<=end)
{

{int mid;
mid=(start+end)/2;
if(a[mid]==b)
{
printf("found");
break;
}
else if(a[mid]<b)
start=mid+1;
else if(a[mid]>b)
end=mid-1;
}
}
if (start> end)
printf("Not found!isn't present in the list.\n");


return 0;
}
