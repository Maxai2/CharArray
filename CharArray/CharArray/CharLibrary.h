#pragma once

int mystrlen(const char * str);
char * mystrcpy(char * str1, const char * str2);
char * mystrcat(char * str1, const char * str2);
char * mystrchr(char * str, char s);
char * mystrstr(char * str, char * phrase);
int mystrcmp(const char * str1, const char * str2);
unsigned _int64 StringToNumber(char * str);
char * NumberToString(unsigned _int64 num);
char * Uppercase(char * str1);
char * Lowercase(char * str1);
char * mystrrev(char * str);