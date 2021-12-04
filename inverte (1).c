//SPRINT 1 - Aluna: NÁBILA PALHARES - 119111555
#include 'inverte.h'

void inverte( char str[] ) //função de inverte a string
{
    char * i = str;

    while( i && *i )
        i++;

    for( i--; str < i; str++, i-- )
    {
        *str = *str ^ *i;
        *i = *str ^ *i;
        *str = *str ^ *i;
    }
}
