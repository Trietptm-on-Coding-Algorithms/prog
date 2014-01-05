
#include <stdio.h>
#include <pthread.h>

#define Fx 20
struct ThreadData {
	int start, stop;
	long long int total;
};

long long int factorial( int max, int min);
void launch( void * data );


int main()
{
	//setup variables
	int factorialOf = Fx;
	pthread_t thread[2];
	struct ThreadData data[2];
	int i;
	long long int result = 1;

	//divide work for threads
	data[0].start = 1;
	data[0].stop = Fx / 2 ;
	data[1].start = Fx / 2 + 1;
	data[1].stop = Fx;

	//launch threads
	for( i = 0; i < 2; i++ )
		pthread_create( &thread[i], NULL, (void*)launch, (void*) &data[i] );

	for( i = 0; i < 2; i++ )
		result *= data[i].total;

	printf( "Factorial of %d is %lld\n.", Fx, result );

}

void launch( void * data ) {
	struct ThreadData * t;
	t = (struct ThreadData *) data;
	(*t).total = factorial( (*t).stop, (*t).start);	
}

long long int factorial( int max, int min ) {
	if ( max == min )
		return 1;
	return ((long long int)max) * factorial( max-1, min);
}
