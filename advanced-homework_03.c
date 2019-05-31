#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>
int main(void)
{
	char str[]="I $am 5a$ go6od#@$ stude[nt].";
	char newstr[50];
	
	int i,j=0;
	int length=strlen(str);
	
	for(i=0;i<length;i++)
	{
		if(isalpha(str[i])!=0 || isspace(str[i])!=0)
		{
			newstr[j]=str[i];
			j++;
		}
	}
	newstr[j]='\0';
	puts(newstr);
	system("pause");
	return 0;
}
