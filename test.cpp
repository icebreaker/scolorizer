#include <stdio.h>

void print_from_static_lib( void );
void print_from_shared_object( void );

int main( int argc, char *argv[] )
{
	printf("Print from executable!!!\n");
	print_from_static_lib();
	print_from_shared_object();
	
	return 0;
}
