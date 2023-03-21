#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: char
 * Description: Checks if char is lowercase and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/**
 * _isalpha - Entry point
 *
 * @c: char
 * Description: Checks if char is alphabet and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if alphabet or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

/**
 * _abs - Entry point
 *
 * @n: int
 * Description: Returns the value of n or positive n if n is negative
 * Return: Always return positive value of n
 */

int _abs(int n)
{
	int tmp;

	if (n < 0)
	{
		tmp = n * -1;
		return (tmp);
	}
	else
		return (n);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _isupper - Entry point
 *
 * @c: char
 * Description: Checks if char is lowercase and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if lowercase or 0 otherwise
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90);
}

/**
 * _isdigit - Entry point
 *
 * @c: char
 * Description: Checks if char is a digit between 0 and
 *                 9 and returns 1 or 0 otherwise
 *
 * Return: Returns 1 if degit or 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/**
* _atoi - converts a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/**
 * _strlen - Entry point
 *
 * @s: pointer to a char
 * Description: Gets the length of the string passed in as s
 *
 * Return: Return the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;

	return (i);

}

/**
 * _puts - Entry point
 *
 * @str: pointer to a string
 * Description: Prints str to the stdout
 *
 * Return: Return (void)
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar(10);

}

/**
* _strcpy - Copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';


	return (dest);
}

/**
 * _strcat - Entry point
 *
 * @dest: Pointer to char - string to concate to
 * @src: pointer to char - string to concate
 * Description: Concatenate string src to dest
 *
 * Return: Returns a pointer to char of string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int _strlen(char *);
	int len = _strlen(dest);

	while (*src)
	{
		*(dest + len) = *src;
		len++;
		src++;
	}

	*(dest + len) = '\0';

	return (dest);
}

/**
 * _strncat - Entry point
 *
 * @n: n numbers of byte of src to copy
 * @dest: Pointer to char - string to concate to
 * @src: pointer to char - string to concate
 * Description: Concatenate string src to dest
 *
 * Return: Returns a pointer to char of string concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int _strlen(char *);
	int i, len = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + len + i) = *(src + i);

	*(dest + len + i) = '\0';

	return (dest);
}

/**
 * _strncpy - Entry point
 *
 * @n: number of most bytes to copy, less than strlen(dest)
 * @dest: Pointer to char - string to concate to
 * @src: pointer to char - string to concate
 * Description: Concatenate string src to dest
 *
 * Return: Returns a pointer to char of string concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		*(dest + i) = *(src + i);

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}


	return (dest);
}

/**
 * _strcmp - Entry point
 *
 * @s1: Pointer to char - string to compare
 * @s2: pointer to char - string to compare
 * Description: Compare 2 strings
 *
 * Return: Returns an int greater than, equal to or greater than zero
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{

		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}

	return (*s1 - *s2);
}


/**
 * _memset - Entry point
 *
 * @s: pointer to a char
 * @b: char constant
 * @n: bytes of s to replace with b
 * Description: Fills the first n bytes of s with b
 *
 * Return: Returns a pointer to s memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}

/**
 * _memcpy - Entry point
 *
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n: bytes of src to copy to dest
 * Description: Copies n memory of src to dest memory
 *
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}

/**
 * _strchr - Searches for c in the string s
 *
 * @s: pointer to a char
 * @c: char to search for in s
 *
 * Return: Returns NULL if c is not found otherwise a pointer to\
 * the address of the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: pointer to a char
 * @accept: char to checck for in s
 *
 * Return: Returns the length of bytes from accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int sum = 0;
	char *ptr = accept;

	while (*s)
	{
		if (*s == *ptr && *ptr)
		{
			sum++;
			s++;
			ptr = accept;
		}
		else
		{
			ptr++;
		}

		if (*ptr == 0)
			return (sum);
	}
	return (sum);
}

/**
 * _strpbrk - Checks for the first occurance of the bytes in s from accept
 *
 * @s: pointer to a char
 * @accept: string to search for
 *
 * Return: Returns NULL if accept is not found otherwise a pointer to\
 * the address of the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s != 0)
	{
		ptr = accept;

		while (*ptr)
		{
			if (*s != *ptr)
				ptr++;
			else
				return (s);
		}
		s++;
	}
	return (NULL);
}

/**
 * _strstr - Search for the first occurance of a substring in a string
 *
 * @haystack: string
 * @needle: substring to search for in haystack
 *
 * Return: Returns the first occurance of needle in string haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr, *needle_ptr;

	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		if (!(*needle_ptr))
			return (haystack);

		while (*haystack_ptr)
		{
			if (*haystack_ptr != *needle_ptr)
				break;
			haystack_ptr++;
			needle_ptr++;

			if (!(*needle_ptr))
				return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
