#include "main.h"

/**
*_isupper - checks whether a character
*passed to it is lowercase or uppercase
*character.
*@c : character to be checked
*Return: 1 (uppercase), 0 (lowercase)
*/

int _isupper(int c)

{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
