#include"main.h"

/**
 *void - it will not return any value 
 * it is void function
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
         if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else if (i < 0)
                printf("%d is negative\n", i);
}	
