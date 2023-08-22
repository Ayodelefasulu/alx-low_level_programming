/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* Calculate the length of the string */
	while (*(s + length))
	{
		length++;
	}

	/* Swap characters to reverse the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + length - 1 - i);
		*(s + length - 1 - i) = temp;
	}
}
