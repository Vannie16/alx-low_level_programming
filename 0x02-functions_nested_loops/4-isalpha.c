1  #include "main.h"
2  /**
3   * _isalpha - function to check if c is a letter, lowercase or uppercase 
4   * @c: is the int that will use for the argument of the function 
5   * Return: 0
6   */
7  int _isalpha(int c)
8  {	
9          if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
10	   {
11     	   return (1);
12	   }	
13         else
14         return (0);
15	   }
