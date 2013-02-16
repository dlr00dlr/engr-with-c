#include <stdio.h>
#include <string.h>
#include <ctype.h>

main ()
{	char word[512];
	void getword(char *), format(word), reverse(char *);

	while (getword(word), format(word), strcmp(word,"quit"))
		{if (*word == '\0') continue;
			reverse(word);
			printf("Your word reversed is \"%s\"\n\n",word);
		}
	return 0;
}

// get string from user
void getword(char *string)
{	printf("Enter a string: ");
	gets(string);
}
	
// remove whitespace & convert to lowercase
void format(char *string)
{	char *fast = string, *slow = string;
	while (*fast)
		{if (!isspace(*fast)) *slow++ = tolower(*fast); fast ++;
		}
	*slow = '\0';
}

// reverse it
void reverse(char *string)
{	char *end, *start = string, tempchar;

	if (*string == '\0') return 0;
	end = string + strlen(string) - 1;
	while (end > start)
	{	tempchar = *end;
		*end = *start;
		*start = tempchar;
		start++; end--;
	}
}
