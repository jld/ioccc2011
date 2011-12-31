#include <stdio.h>
#include <stdlib.h>

typedef void **t;
void *N[] = {N, N};
t G, H, M=N;

#define Z ; if (A == D) goto
#define C ; *(T = G) =D ++; D -= (G =* -- T) ||! (G = calloc(2, sizeof* N)); \
	    *T ++= A; G -=(t) *T --- D; D = T;
#define F ; A =* D; *D ++= G; D =* (G = D);
#define U ; T = A; A =* D ++; D =* D;
#define L ; A = D; D =
#define S     = D; D = A;
#define X ; T = A; A =* ++D; *D --= T;

#define E(n) ; main(n, 0);
#define R    ; return  0 ;
#define T(B) B B B
#define Q &n ["BCCCCCA"]

void prn(t T, int l)
{
	int i, n=0;
	t A=T;

	if (((t)T[1])[1] == T) {
		for (i = 0; i < l; ++i) printf(" ");
		printf("%p = atom\n", (void*)T);
		return;
	}

	while (T != N) {
		for (i = 0; i < l; ++i) printf(" ");
		printf("%p[%d] = %p\n", (void*)A, n++, (void*)T[0]);
		prn(T[0], l+1);
		T = T[1];
	}
}

int main(int n, char **v)
{
	t x, a;
	t T, A, D;

	T=A=D=N F C if (v) { E(0) R }
	if (1 Q) { L G-1 U a S }
	if (2 Q) { L N C F T(E(n+1)) L G-1 U }
	else { C x S L x C L x X }
	if (1 Q) { L a C C F R }
	a S prn(a, 0) R;
}
