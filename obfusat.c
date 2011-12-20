#include <stdio.h>
#include <stdlib.h>

typedef void **t;
void *N[] = {N, N};
t G, H, M;

#define Z ; if (A == D) goto
#define C ; *(T = G) =D ++; D -= (G =* -- T) ||! (G = calloc(2, sizeof* N)); \
	    *T ++= A; G -=(t) *T --- D; D = T;
#define F ; A =* D; *D ++= G; D =* (G = D);
#define U ; A =* D ++; D =* D;
#define L ; A = D; D =
#define S     = D; D = A;
#define X ; T = A; A =* ++D; *D --= T;

#define I(P,a,b,c,B) \
    a: L P U U Z c; D S B L P U P S Z a; b: L P U U L P X C L H C H S Z a; c:

int main()
{
	int n;
	t p, c, l, x;

	t T, A, D;
	T=A=D=M=N F C;

	scanf("p cnf %d %*d", &n);
	l = calloc(2*n+2, sizeof* N);
	for (l += n; n > 0; --n) { C x S L x C L x X L l[n] S U l[-n] S }
	L N U c S p S rb: A+=1 == scanf("%d", &n) Z re;
	L l L l+n Z ce U T S L c C c S Z rb; ce:
	L c C L p C p S L N; c S Z rb; re:
	L p C p S;



	return 0;
}
