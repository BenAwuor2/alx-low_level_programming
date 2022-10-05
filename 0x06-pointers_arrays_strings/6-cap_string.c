<<<<<<< HEAD
#include "main.h" 
  
/** 
 * cap_string - capitalizes everey word of a string 
 * @s: string to modify 
 * Return: the resulting string 
 */ 
  
char *cap_string(char *s) 
{ 
        int i, j; 
  
        char spe[13] = {' ', '\t', '\n', ',', ';', '.', 
                '!', '?', '"', '(', ')', '{', '}'}; 
  
        for (i = 0; s[i] != '\0'; i++) 
        { 
                if (i == 0 && s[i] >= 'a' && s[i] <= 'z') 
                        s[i] -= 32; 
                for (j = 0; j < 13; j++) 
                { 
                        if (s[i] == spe[j]) 
                        { 
                                if (s[i + 1] >= 'a' && s[i + 1] <= 'z') 
                                { 
                                        s[i + 1] -= 32; 
                                } 
                        } 
                } 
        } 
        return (s); 
=======
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: string;
 */

char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (; s[i]; i++)
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		    || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
		    || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		     || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		     || s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
>>>>>>> 0d8f92b8d1fc69e339cd3c7ca93436b5b68cff58
}
