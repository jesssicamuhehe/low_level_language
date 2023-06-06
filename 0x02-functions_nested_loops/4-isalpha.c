#include "main.h"

/**
 *  * main - checks for alphabetic character.
 *    * Return: 1 if c is a letter, else returns 0
 */
int _isalpha(int c)
{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
