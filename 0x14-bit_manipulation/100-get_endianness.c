/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1 if little, 0 if big endian
 */

int get_endianness(void)
{
	int o;
	char *c;

	c = (char *)&o;
	return (*c + 48);
}
