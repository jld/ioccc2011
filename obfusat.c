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

#define I(P,B) P##a: L P U U Z P##c; D S B L P U P S Z P##a; \
               P##b: L P U U L P X C L H C H S Z P##a; P##c:

int main()
{
	int n;
	t p, c, l, i, x, o, w;

	t T, A, D;
	T=A=D=M=N F C;

	scanf("p cnf %d %*d", &n);
	i = calloc(2*n+2, sizeof* N);
	for (i += n; n > 0; --n) { C x S L x C L x X L i[n] S U i[-n] S }
	L N U c S p S rb: A+=1 == scanf("%d", &n) Z re;
	L i L i+n Z ce U T S L c C c S Z rb; ce:
	L c C L p C p S L N; c S Z rb; re:
	L p C p S w S o S; pa: L p L c S U U Z sat;
	I(c, x S l S I(l, U Z lb U Z cb) L x U U Z unsat; U Z as);
	L o L w Z bees; o S Z pa;
as: L T U L w S U D S L T X C L H C H S Z cb;
sat: printf("p SAT\n"); return 0;
unsat: printf("p UNSAT\n"); return 0;
bees: printf("p BEES\n"); return 0;
}
