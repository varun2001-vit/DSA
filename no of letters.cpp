#include<stdio.h> 
int  main()
{
 
	char str[100]; 
	int c=0,v=0,s=0;
	scanf("%[^'\n']s",&str);
	for(int i=0;str[i]!='\0';i++)
	{if (str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
	 v++;
	 else if(str[i]==' ' or str[i]=='t')
	 s++;
	 else
	 c++;
	}
printf(" consonants are %d",c);
printf(" vovals are %d",v);
printf(" special  are %d",s);
return 0;
	 
}  
