#include <iostream>

int mystrlen(const char * str)
{
	int index = 0;
	while (str[index++] != '\0');
	return index;
}

char * mystrcpy(char * str1, const char * str2)
{
	int index = 0;
	char *temp = (char*)calloc(mystrlen(str2), sizeof(char));
	while (str2[index] != '\0')
	{
		temp[index] = str2[index];
		index++;
	}
	str1 = temp;
	//	free(temp);
	return str1;
}

char * mystrcat(char * str1, const char * str2)
{
	int index = 0;
	char *temp = (char*)calloc(mystrlen(str2) + mystrlen(str1), sizeof(char));

	for (int i = 0; str2[i] != '\0'; i++)
	{
		temp[i] = str2[i];
		index++;
	}

	for (int i = 0; str1[i] != '\0'; i++)
	{
		temp[index] = str1[i];
		index++;
	}

	str1 = temp;
	//	free(temp);
	return str1;
}

char * mystrchr(char * str, char s)
{
	int index = 0;
	char *temp = (char*)calloc(mystrlen(str), sizeof(char));

	while (str[index] != '\0')
	{
		if (str[index] == s)
		{
			for (int i = 0; str[index] != '\0'; i++)
			{
				temp[i] = str[index];
				index++;
			}
			str = temp;
			return str;
		}
		index++;
	}

	return 0;
}

char * mystrstr(char * str, char * phrase)
{
	int index = 0, i = 0;
	bool check = true;
	char *temp = (char*)calloc(mystrlen(str), sizeof(char));

	while (str[index] != '\0')
	{
		if (str[index] == phrase[i])
		{
			while (check)
			{
				if (phrase[i] == '\0')
					break;
				else if (str[index] != phrase[i])
					check = false;
				else
				{
					i++;
					index++;
				}
			}

			if (check)
			{
				index--;
				while (str[index] != ' ' && index != 0)
				{
					index--;
				}

				if (index != 0)
					index++;

				for (int k = 0; str[index] != ' ' && str[index] != '\0'; k++)
				{
					temp[k] = str[index];
					index++;
				}

				str = temp;
				return str;
			}
		}
		else
		{
			i = 0;
			check = true;
		}

		index++;
	}

	return 0;
}

int mystrcmp(const char * str1, const char * str2)
{
	if (mystrlen(str1) < mystrlen(str2))
		return -1;
	else if (mystrlen(str1) == mystrlen(str2))
		return 0;
	else if (mystrlen(str1) > mystrlen(str2))
		return 1;
}

int StringToNumber(char * str)
{
	long long num = 1;
	int index = 0;
	int numArr[255] = {};

	while (str[index] != '\0')
	{
		if (str[index] == ' ') // 32
			numArr[index] += 32;
		else
			numArr[index] += int(str[index]);

		if (index == 0)
			num *= numArr[index];
		else if (numArr[index] < 100)
			num = (num * 100) + numArr[index];
		else if (numArr[index] < 1000)
			num = (num * 1000) + numArr[index];

		index++;
	}

	return num;
}

int numberCount(int num)
{
	int count = 0;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return count;
}

long long countZeroFunc(int num)
{
	long long res = 1;
	for (int i = 0; i <= num; i++)
		res *= 10;

	return res;
}

char * NumberToString(int num)
{
	int countZero = countZeroFunc(numberCount(num)), cutNum = 0;

	char *temp = (char*)calloc(255, sizeof(char));

	int index = 0;
	while (num != 0)
	{
		if (int(num / 100) < 13)
		{
			countZero /= 100;
			cutNum = int(num / countZero);
			num %= countZero;
		}
		else
		{
			countZero /= 1000;
			cutNum = int(num / countZero);
			num %= countZero;
		}

		temp[index] = char(cutNum);
		index++;

		if (num / 100 == 0 || num / 1000 == 0)
		{
			cutNum = num;
			temp[index] = char(cutNum);
			num = 0;
		}
	}

	return temp;
}

char * Uppercase(char * str1)
{
	int index = 0;
	while (str1[index] != '\0')
	{
		if (97 <= int(str1[index]) && int(str1[index]) <= 122)
		{
			str1[index] = int(str1[index]) - 32;
		}

		index++;
	}

	return str1;
}

char * Lowercase(char * str1)
{
	int index = 0;
	while (str1[index] != '\0')
	{
		if (65 <= int(str1[index]) && int(str1[index]) <= 90)
		{
			str1[index] = int(str1[index]) + 32;
		}

		index++;
	}

	return str1;
}