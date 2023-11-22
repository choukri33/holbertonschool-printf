#include "main.h"
#include <stdio.h>

int main(void){

int result;

result = _printf("salut");
if(result == 5)
{
	printf("reussie\n"); 
}
else
	printf("erreur mgl\n");
return (0);
}
