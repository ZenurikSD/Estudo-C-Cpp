#include <stdio.h>
#include <stdlib.h>

void hanoi( int n, int origem, int destino, int auxiliar ) {
	if ( n != 0 ) {
		hanoi( n-1, origem, auxiliar, destino );
		printf("mover disco de %d para %d\n", origem, destino);
		hanoi( n-1, auxiliar, destino, origem );
	}
}

int main(void) {
	hanoi(4, 1, 3, 2);
	return 0;
}