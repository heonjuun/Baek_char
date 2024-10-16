#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
	char a[4], b[4];	
	scanf("%s %s", a, b);	
	
	bool pass;

	for (int i = 2; i >= 0; i--)
	{
		if (a[i] > b[i])
		{												
			pass = true;
			break;
		}
		else if (a[i] < b[i])
		{
			pass = false;
			break;
		}
	}
	for (int i = 2; i >= 0; i--)
	{
		if (pass) printf("%c", a[i]);
		else printf("%c", b[i]);
	}
	
		
	return 0;
}