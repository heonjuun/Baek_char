#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{

	char s[100];	
	while (fgets(s, sizeof(s), stdin) != NULL)
	{
		printf("%s", s);
		if (s[0] == ' ' ||s[-1] == ' ')
		{
			break;
		}


	}

}