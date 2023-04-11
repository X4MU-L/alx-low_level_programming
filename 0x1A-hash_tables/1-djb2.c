/**
 * hash_djb2 - the djb2 algorithm to hash the key @str
 * @str: the strings to hash
 * Return: the hash value of the string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /*same as hash * 33 + c */
	return (hash);
}
