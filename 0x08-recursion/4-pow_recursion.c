#include "main.h"
/**
* _pow_recursion - Write a function that returns the value of x raised powerof y
 * @x: This is the input number
 *   @y: This is the power number
 * Return: if "y" is bigger than zero raised to the power
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x, y - 1));
}
