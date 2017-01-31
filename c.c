#include <stdio.h>

void tabu( void );

int main()
{

  tabu();
  
}

void tabu( void )
{
    int number,
        calc,
        result;

    printf( "Digite um Numero:/Put a Number:\n" );
    scanf ( "%d", &number );

    for ( calc = 1; calc <= 10; calc++ )
        {
          result = number * calc;
          printf( "%d x %2d = %3d\n", number, calc, result );
        }  

}
