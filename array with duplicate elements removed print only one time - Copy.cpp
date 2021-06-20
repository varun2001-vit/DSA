#include <stdio.h>
int main()
{int a[10],b[10],count=0;
for (int i=0;i<10;i++)
{scanf("%d",&a[i]);
b[i]=-1;
}

for(int i=0;i<10;i++)
{for(int j=i+1;j<10;j++)
{if(a[i]==a[j])
b[i]=0;
}
}
for (int i=0;i<10;i++)
{if(b[i]==-1)
printf("%d",a[i]);
}
}


