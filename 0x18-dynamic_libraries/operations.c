/**
 * add - Entry point
 *
 * @n: Params int
 * @y: Params int
 * Description: Adds two ints and return the value
 * Return: int value of adding n and y
 */

int add(int n, int y)
{
	return (n + y);
}

/**
 * div - Entry point
 *
 * @n: Params int
 * @y: Params int
 * Description: divides two ints and return the value
 * Return: int value of dividing n by y
 */

int div(int n, int y)
{
	if (y < 1)
		return (0);
        return (n / y);
}

/**
 * sub - Entry point
 *
 * @n: Params int
 * @y: Params int
 * Description: subtracts two ints and return the value
 * Return: int value of subtracting y from n
 */

int sub(int n, int y)
{
        return (n - y);
}

/**
 * mul - Entry point
 *
 * @n: Params int
 * @y: Params int
 * Description: multiplys two ints and return the value
 * Return: int value of multiplying n and y
 */

int mul(int n, int y)
{
        return (n * y);
}

/**
 * mod - Entry point
 *
 * @n: Params int
 * @y: Params int
 * Description: mods two ints and return the value
 * Return: int value of remainder of n mod y
 */

int mod(int n, int y)
{
        return (n % y);
}
