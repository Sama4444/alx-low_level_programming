include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: The string to be capitalizes
 *
 * Return: A pointer to the change string
 */

char *cap_string(char *str)

{
	int index = 0;

	while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;
	
	if str[index - 1] == ' ' ||
	
