#include "main.h"
/**
*_isupper - checks whether a character
*passed to it is lowercase or uppercase
*character.
*
*@c : character to be checked
*
*Return: 1 (uppercase), 0 (lowercase)
*/
int _isupper(int c)
{

	for (c >=65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
