#include "lists.h"

/**
 * print_list - prints the strings in a linked list
 * @h: pointer to struct of list_t
 * Return: return the number of linked list in the list
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	char *ptr;

	while (h != NULL)
	{
		ptr = create_print(h);
		_puts(ptr);
		_putchar(10);
		free(ptr);
		h = h->next;
		n++;
	}
	return (n);
}

/**
 * create_print - prints the strings in a linked list
 * @h: pointer to struct of list_t
 * Return: return a pointer to formatted string
 */

char *create_print(const list_t *h)
{
	char *ptr, *ptr_str;
	int ptr_int;
	int len, i = 0;

	ptr_str = h->str;
	ptr_int = h->len;
	if (h->str == NULL)
	{
		ptr_str = "(nil)";
		ptr_int = 0;
	}

	len = _strlen(ptr_str);
	ptr = malloc(sizeof(char) * len + 6);
	if (ptr == NULL)
		return (NULL);
	while (i < (len + 5))
	{
		if (i == 0)
		{
			ptr[i++] = 91;
			continue;
		}
		if (i == 1)
		{
			ptr[i++] = (ptr_int + '0');
			continue;
		}
		if (i == 2)
		{
			ptr[i++] = 93;
			ptr[i++] = 32;
			continue;
		}
		ptr[i] = *ptr_str;
		ptr_str++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * _puts - prints a string with newline
 * @str: the string to print
 * Return: void
 */

int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}
