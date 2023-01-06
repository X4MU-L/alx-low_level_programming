int _sqrt_recursion(int n)
{
	int temp = 0;
	int _root(int x, int y);

	if (n < 0)
		return (-1);

	return (_root(n, temp));
}


int _root(int n, int j)
{
	if (j * j == n)
		return (j);
	if (j == (n / 2))
		return (-1);
	return (_root(n, j + 1));
}