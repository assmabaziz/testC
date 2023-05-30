#include <stdio.h>

int main () 
{
    char reponse;
    float A , B ;
     const char C= 100;  
     const char XC= 90;
     const char L= 50;  
     const char XL= 40;  
     const char X= 10;  
     const char IX= 9;
     const char V= 5;  
     const char IV= 4;  
     const char I= 1;
    int operation ;
    do  {
        printf ("calcolator : MENU \n");
        printf ("1 - addition.\n"); 
        printf ("2 - substraction.\n"); 
        printf ("3 - multiplication.\n"); 
        printf ("4 - division.\n"); 
        printf ("which calculation do you want?");
        scanf ("%d", &operation);
        printf ("enter the first number: ");
        scanf ("%f", & A);
        printf ("enter the second number: ");
        scanf ("%f", & B);

        switch (operation)  {

            case 1 : printf ("%.2f \n", A + B);
            
                break;

            case 2 : printf ("%.2f \n", A - B);
            
                break;

            case 3 : printf ("%.2f \n", A * B);
            
                break;

            case 4 : if (B !=0)
                    
                    printf ("%.2f \n", A / B);

                     else

                    printf ("B must not be equal to 0 \n");

                break;

        
             default: printf ("enter valid number please");
            break;
        }

       
    } while (reponse != 'N');
    
}