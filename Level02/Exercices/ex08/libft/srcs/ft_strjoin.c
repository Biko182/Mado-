#include "../includes/libft.h"


char * ft_strjoin(char *str1, char * str2)
{
    char * new;
   
    int i = 0;
    int j = 0;

    if (str1 == NULL || str2 == NULL )
   {       
       return(NULL);
   }
   int length = ft_strlen(str1) + ft_strlen(str2) + 1;

   if ((new = malloc(sizeof(char)* length)) == NULL)
   {
       return(NULL);
   }
   while (str1[i] != '\0')
   {
       new[i] = str1[i];
       i++;
   }
   while (str2[j] != '\0' )
    {
       new[i] = str2[j];
    
        i++;
        j++;
    }

    new[i] = '\0';

   return(new);

}


