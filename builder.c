#include <stdio.h>
#include <stdlib.h>

typedef void **t;
void *N[] = {N, N};
t G, H, M=N;

#define Z ; if (A == D) goto
#define C ; *(T =++ G) =D ++; D -= (G =* -- T) ||! (G = calloc(2, sizeof* N)); \
	     *T ++= A; G -=(t) *T --- D; G -=!! (D = T);
#define F ; A =* D; *D =G +!!G; D =* (G = D);
#define U ; T = A; A =* D ++; D =* D;
#define L ; A = D; D =
#define S     = D; D = A;
#define X ; T = A; A =* ++D; *D --= T;

#define E(n) ; main(n, 0);
#define R    ; return  0 ;
#define T(B) B B B
#define Q &n ["0111112011137777665776677566777757676775"]
#define V(n,N,O) ; if (n Q) { N ; } else { O ; }

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
	t a, x, y;
	t T, A, D;

	T=A=D=N F C if (v) { E(0) L G U a S E(7) L G U x S 
			     prn(a, 0); printf("-- \n"); prn(x, 0) R }
	V(3, L G U V(4, F y S,; ) x S,; );
	V(4, L y V(2, V(1, U y S,; ) L x U x S L T C C F T(E(n+1)),
		      U L x U L T C L y X),
	    V(2, V(1, /*!*/ L N L N C, C a S L a C L a X),
		L N C F T(E(n+1)) L G U));
	V(3, L x V(4, L y,; ) C C F,; ) R;
}
