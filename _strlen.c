<<<<<<< HEAD
#include "main.h"                                                                                                                                                    
/**                                                                                                                                                                  
 * _strlen - gets the length of a string                                                                                                                             
 * @s: inputed string                                                                                                                                                
 *                                                                                                                                                                   
 * Return: string length                                                                                                                                             
 */                                                                                                                                                                  
int _strlen(const char *s)                                                                                                                                           
{                                                                                                                                                                    
        int length = 0, i;                                                                                                                                           
                                                                                                                                                                     
        for (i = 0; s[i] != '\0'; i++)                                                                                                                               
                length++;                                                                                                                                            
        return (length);
=======
#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: inputed string
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
>>>>>>> d0d7ec91cd7b9d6b1e54853a3d85fcfdb8846604
}
