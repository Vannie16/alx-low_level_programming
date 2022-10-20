1  #include "main.h"
2  /**
3  * _islower - function to check for lowercase character
4  * @c: is the int that will use for the argument of the function
5  * Return: 0
6  */
7  int _islower(int c)
8  {
9	if (c >= 'a' && c <= 'z')
10	{	
11		return (1);
12	}
13	else
14		return (0);
15	}
