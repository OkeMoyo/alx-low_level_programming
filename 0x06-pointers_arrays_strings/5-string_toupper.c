#include "main.h"
#include <string.h>
/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @str: string to be uppercased
 * Return: adjusted string
 */

char *string_toupper(char *str)
{
	int i;
	int j;
	int n;
	char a[26] = {97,98,99,100,101,102,103,104,105,
		106,107,108,109,110,111,112,113,114,115,
		116,117,118,119,120,121,122};
	char b[26] = {65,66,67,68,69,70,71,72,73,74,75,
		76,77,78,79,80,81,82,83,84,85,86,87,
		88,89,90};

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
