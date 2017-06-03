char *spaceToTab(char *str, int size)
{
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == ' ')
			str[index] = '\t';

		index++;
	}
	return str;
}

int countWord(char *str)
{
	int index = 0, word = 0;
	while (str[index++] != '\0')
	{
		if (str[index] == ' ')
			word++;
	}
	return word;
}