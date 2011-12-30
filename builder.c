#include <stdio.h>
#include <stdlib.h>

typedef void **t;
void *N[] = {N, N};
t G, H, M;

#define Z ; if (A == D) goto
#define C ; *(T = G) =D ++; D -= (G =* -- T) ||! (G = calloc(2, sizeof* N)); \
	    *T ++= A; G -=(t) *T --- D; D = T;
#define F ; A =* D; *D ++= G; D =* (G = D);
#define U ; T = A; A =* D ++; D =* D;
#define L ; A = D; D =
#define S     = D; D = A;
#define X ; T = A; A =* ++D; *D --= T;

#define T(Q) Q Q Q 
#define T0(B,Q,E) B Q E 
#define T1(B,Q,E) B T(T0(B,Q,E)) E 
#define T2(B,Q,E) B T(T1(B,Q,E)) E
#define T3(B,Q,E) B T(T2(B,Q,E)) E
#define T4(B,Q,E) B T(T3(B,Q,E)) E
#define T5(B,Q,E) B T(T4(B,Q,E)) E
#define T6(B,Q,E) B T(T5(B,Q,E)) E

#define E(B) x = A B A = x
#define LL L a C a S
#define SS L a F a S
#define CC L a F E(F a S) C LL
#define UU SS U E(L a C) C a S

void prn(t T)
{
	int n=0;

	while (T != N) {
		printf("%p[%d] = %p\n", (void*)T, n, (void*)T[0]);
		prn(T[0]);
		T = T[1];
	}
}

int main()
{
	t x, a;

	t T, A, D;
	T=A=D=M=N F C;

	C a S T6(L N LL, SS C x S L x C L x X SS, CC);
	prn(a);
	return 0;
}
