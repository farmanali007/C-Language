#include <stdio.h>
#include <stdlib.h>
int main()
{
     int i;
     int checker;
     char s[20];
     printf("Enter your name : ");
     gets(s);
     

     if (s == " ")
     {
          printf("invalid ...");
     }

     else
     {

          for (i = 0; i < strlen(s); i++)
          {
               if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] == ' ') || (s[i] >= 'A' && s[i] <= 'Z'))
               {
                    checker = 1;
               }

               else
               {
                    printf("\ninvalid");
                    checker = 0;
                    break;
               }
           if (s == " ")
           {
                printf("\ninvalid");
           }        
             
          }
     }

     if (checker == 1)
     {
          printf("your name is %s", s);
     }
     return 0;
}