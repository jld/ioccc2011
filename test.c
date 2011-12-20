#include <stdio.h>
#include <stdlib.h>

typedef void **t;
void *N[] = {N, N};

#define Z ; if (A == D) goto
#define C ; *(T = G) =D ++; D -= (G =* -- T) ||! (G = calloc(2, sizeof* N)); \
	    *T ++= A; G -=(t) *T --- D; D = T;
#define F ; A =* D; *D ++= G; D =* (G = D);
#define U ; A =* D ++; D =* D;
#define L ; A = D; D =
#define S     = D; D = A;
#define X ; T = A; A =* ++D; *D --= T;

int main()
{
	t A, D, T, G=0;

	int n;
	t p, i=N, o=N;
	A=D=T=N F C;
	scanf("%d", &n);
	p = calloc(n, sizeof* N);
r:	printf("0\n"); while (scanf("%d", &n), n) {L p+n-1 L i C i S}
#if 0
v:      L i U Z p L i F i S L o C o S Z v;
#else
v:      L i U Z p L o L i X o S i S Z v;
#endif
p:      L o U Z r; printf("%d ", (int)(A-p)+1) L o F o S Z p;
	return 0;
}
