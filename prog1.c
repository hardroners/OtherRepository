#include <stdio.h>

int main(int N, char *P[])
{
	int i;
	printf("le nom de la commande est %s\n",P[0]);
	if ( N > 1 ) {
		printf("Il y a %d parametre(s):\n",N-1);
		for(i=1;i<N;i++) printf("Le param. no %d est %s\n",i,P[i]);
  }
	printf("Hello World\n");
	return 0;
}
