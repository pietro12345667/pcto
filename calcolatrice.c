#include <stdio.h>
int main()
{
    int numero1, numero2;
    printf("inserire numero\n");
    scanf ("%d", &numero1); 

    printf("inserire numero\n");
    scanf("%d", &numero2);
   char a;
    printf("inserire s per fare la somma, inserire m per fare la moltiplicazione, inserire d per fare la divisione, inserire r per il resto,  inserire f per fare la differenza\n");
    scanf(" %c", &a);
    if( a=='s')
    {
        int somma = numero1 + numero2;
        printf("somma %d\n",somma);
    }
    else if(a == 'm')
    {
    int moltiplicazione= numero1 * numero2;
    printf("moltiplicazione %d\n" ,moltiplicazione);
     
    }
    else if( a == 'f')
    {
    int differenza= numero1 - numero2;
    printf ("differenza %d\n",differenza);

    }
    else if (a == 'd')
    {
    int divisione= numero1 / numero2;
    printf("divisione %d\n", divisione);

    }
    else if (a == 'r')
    {
    int resto_divisione= numero1 % numero2;
    printf("resto %d\n", resto_divisione );
    }
    
    return (0);


}