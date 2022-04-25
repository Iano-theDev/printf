<<<<<<< HEAD
#include "main.h"                                                                                                                                                    
/**                                                                                                                                                                  
 * bin - converts to binary                                                                                                                                          
 * @n: input                                                                                                                                                         
 * @ptr: pointer to the count variable                                                                                                                               
 * Return: No return value                                                                                                                                           
 */                                                                                                                                                                  
int bin(unsigned int n, int *ptr)                                                                                                                                    
{                                                                                                                                                                    
        char c;                                                                                                                                                      
                                                                                                                                                                     
        (*ptr)++;                                                                                                                                                    
        if (n / 2 > 0)                                                                                                                                               
        {                                                                                                                                                            
                bin(n / 2, ptr);                                                                                                                                     
        }                                                                                                                                                            
        c = (n % 2) + '0';                                                                                                                                           
        write(1, &c, 1);                                                                                                                                             
        return (*ptr);                                                                                                                                               
} 
=======
#include "main.h"
/**
 * bin - converts to binary
 * @n: input
 * Return: No return value
 */
void bin(unsigned int n)
{
	char c;

	if (n / 2 > 0)
	{
		bin(n / 2);
	}
	c = (n % 2) + '0';
	write(1, &c, 1);
}
>>>>>>> d0d7ec91cd7b9d6b1e54853a3d85fcfdb8846604
