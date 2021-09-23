# include <stdio.h>
int check ( int ) ;
int main( )
{
int k = 350, z ;
z = check ( k ) ;
printf ( "%d\n", z ) ;
return 0 ;
}
int check ( int m )
{
if ( m > 40 )
return ( 1 ) ;
else
return ( 0 ) ;
}
