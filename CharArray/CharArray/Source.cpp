#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <ctype.h>
#include "Functions.h"
#include "CharLibrary.h"

#define size 255
//	const int size = 255;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

int main()
{
	/*1. Дана строка символов. Заменить в ней все пробелы на табуляции
	3. Подсчитать количество слов во введенном предложении.*/
	//char *str = new char[size];
	//cout << "Text: ";
	//cin.getline(str, size);

	//int count = 0;
	//count = countWord(str) + 1;
	//cout << "Count of word: " << count;
	//str = spaceToTab(str, size);
	//cout << "\nNew text: " << str << endl;

	//-------------------------------------------------------------------------------------
	/*7. Создать библиотеку следующих функций:

	//	a. int mystrlen(const char * str); - функция определяет длину строки.
	//char *str = new char[size];
	//cout << "Text: ";
	//cin.getline(str, size);

	//int count = 0;
	//count = mystrlen(str) - 1;
	//cout << "Count of word: " << count << endl;
	//-----------------------------------------------------------------------------------------------
	/*b. char * mystrcpy (char * str1, const char * str2);
	- функция копирует строку str2 в буфер, адресуемый через str1.
	Функция возвращает указатель на первую строку str1. */

	//cout << "String one: ";
	//char *str1 = new char[size];
	//cin.getline(str1, size);
	//cout << "String two: ";
	//char *str2 = new char[size];
	//cin.getline(str2, size);

	//str1 = mystrcpy(str1, str2);
	//cout << "\n\nResult: " << str1 << endl;
	//-----------------------------------------------------------------------------------------------
	/*	c. char * mystrcat (char * str1, const char * str2); - функция
	присоединяет строку str2 к строке str1. Функция возвращает
	указатель на первую строку str1.*/

	//cout << "String one: ";
	//char *str1 = new char[size];
	//cin.getline(str1, size);
	//cout << "String two: ";
	//char *str2 = new char[size];
	//cin.getline(str2, size);

	//str1 = mystrcat(str1, str2);
	//cout << "\n\nString two + string one: " << str1 << endl;
	//-----------------------------------------------------------------------------------------------
	/*	d. char * mystrchr (char * str, char s); - функция осуществляет
	поиск символа s в строке str. Функция возвращает указатель
	на первое вхождение символа в строку, в противном случае 0.*/

	//char *str = new char[size];
	//cout << "String: ";
	//cin.getline(str, size);
	//cout << "Input the symbol to search: ";
	//char s;
	//cin >> s;

	//if (mystrchr(str, s) != 0)
	//{
	//	str = mystrchr(str, s);
	//	cout << "\nWe found place at the beginning your symbol: " << str << endl;
	//}
	//else
	//	cout << "\nSorry we does not found your symbol in the string(" << endl;
	//-----------------------------------------------------------------------------------------------
	/*	e. char * mystrstr (char * str1, char * str2); - функция
	осуществляет поиск подстроки str2 в строке str1. Функция
	возвращает указатель на первое вхождение подстроки str2 в
	строку str1, в противном случае 0.*/

	//cout << "String: ";
	//char *str = new char[size];
	//cin.getline(str, size);
	//cout << "Input similar pharase: ";
	//char *phrase = new char[size];
	//cin.getline(phrase, size);

	//if (mystrstr(str, phrase) != 0)
	//{
	//	str = mystrstr(str, phrase);
	//	cout << "\nWe found the word in which your phrase meeting: " << str << endl;
	//}
	//else
	//	cout << "\nSorry we does not found your phrase in the string(" << endl;
	//-----------------------------------------------------------------------------------------------
	/*	f. int mystrcmp (const char * str1, const char * str2); - функция
	сравнивает две строки, и , если строки равны возвращает 0,
	если первая строка больше второй, то возвращает 1, иначе -1.*/

	//cout << "Input the first string: ";
	//char *str1 = new char[size];
	//cin.getline(str1, size);

	//cout << "Input the second string: ";
	//char *str2 = new char[size];
	//cin.getline(str2, size);

	//cout << endl;
	//if (mystrcmp(str1, str2) == -1)
	//	cout << "The function return us: " << mystrcmp(str1, str2) << ", so that mean the first string is less than the second.";
	//else if (mystrcmp(str1, str2) == 0)
	//	cout << "The function return us: " << mystrcmp(str1, str2) << ", so that mean first string is equal to second.";
	//else if (mystrcmp(str1, str2) == 1)
	//	cout << "The function return us: " << mystrcmp(str1, str2) << ", so that mean the first string is more than the second.";
	//cout << endl;
	//-----------------------------------------------------------------------------------------------
	/*	g. int StringToNumber( char * str); - функция конвертирует
	строку в число и возвращает это число.*/

	//cout << "Text: ";
	//char *str = new char[size];
	//cin.getline(str, size);

	//cout << "Your text in number format from ASCII table is(32 is space): " << StringToNumber(str) << endl;
	//-----------------------------------------------------------------------------------------------
	/*	h. char * NumberToString ( int number); - функция конвертирует
	число в строку и возвращает указатель на эту строку.*/

	//cout << "Symbols: ";
	//short row = 1, col = 0;
	//for (int i = 32; i <= 126; i++)
	//{
	//	SetConsoleCursorPosition(h, { col, row });
	//	if (32 <= i && i <= 47 || 58 <= i && i <= 64 || 91 <= i && i <= 96 || 123 <= i && i <= 126)
	//	{
	//		cout << "\'" << char(i) << "\' - " << i;
	//		row++;
	//	}
	//	
	//	if (row == 5 && row != 0)
	//	{
	//		col += 13; row = 1;
	//	}
	//}

	//SetConsoleCursorPosition(h, { 0, 6 });
	//cout << "Numbers: ";
	//row = 7, col = 0;
	//for (int i = 48; i <= 57; i++)
	//{
	//	SetConsoleCursorPosition(h, { col, row });
	//	cout << "\'" << char(i) << "\' - " << i;
	//	row++;

	//	if (row == 9 && row != 0)
	//	{
	//		col += 13; row = 7;
	//	}
	//}

	//SetConsoleCursorPosition(h, { 0, 10 });
	//cout << "Alphabets: ";
	//row = 11, col = 0;
	//for (int i = 65; i <= 90; i++)
	//{
	//	SetConsoleCursorPosition(h, { col, row });
	//	if (i <= 67)
	//		cout << "\'" << char(i) << "\' - " << i << " \'" << char(i + 32) << "\' - " << i + 32 << "  |";
	//	else
	//		cout << "\'" << char(i) << "\' - " << i << " \'" << char(i + 32) << "\' - " << i + 32 << " |";

	//	row++;

	//	if (row == 16 && row != 0)
	//	{
	//		col += 20; row = 11;
	//	}
	//}

	//SetConsoleCursorPosition(h, { 0, 17 });
	//cout << "Number: ";
	//long long num;
	//cin >> num;

	//cout << "Your number in text format by ASCII table is(32 is space): " << NumberToString(num) << endl;
	//-----------------------------------------------------------------------------------------------
	/*	i. char * Uppercase (char * str1); - функция преобразует строку
	в верхний регистр.*/

	//cout << "Text: ";
	//char *text = new char(size);
	//cin.getline(text, size);

	//cout << "Your text in Uppercase format: " << Uppercase(text) << endl;
	//-----------------------------------------------------------------------------------------------
	/*	j. char * Lowercase (char * str1); - функция преобразует строку
	в нижний регистр.*/

	//cout << "Text: ";
	//char *text = new char(size);
	//cin.getline(text, size);

	//cout << "Your text in Lowercase format: " << Lowercase(text) << endl;
	//-----------------------------------------------------------------------------------------------
	/*	k. char * mystrrev (char * str); - функция реверсирует строку и
	возвращает указатель на новую строку.*/


}