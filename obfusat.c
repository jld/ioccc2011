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
#define Y X C L H C H S
#define W U D S L T Y Z

#define I(P,B) P##a: L P U U Z P##c; D S B L P U P S Z P##a; \
               P##b: L P U U L P Y Z P##a; P##c:

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
	L p C p S o S C w S pa: L p L c S U U Z sat;
	I(c, x S l S I(l, U Z lb U Z cb) L x U U Z oa U Z as);
	L o L p Z bees; o S Z pa;
as: L T U L o S W cb;
oa: L M U Z unsat; T S L H Z ob F H S F X D S Z oa;
ob: L M F M S L w U L D W pa;
bees: L p U U T S U U D S L w Y L H L M C M S L w U U L D W pa;
unsat: printf("s UNSATISFIABLE\n"); return 0;
sat: printf("s SATISFIABLE\nv ");
	for (n = 1; i[n]; ++n) { L i[n] U Z ub U Z uc; continue;
uc: printf("%d ", n); if (0) ub: printf("%d ", -n);
	} printf ("0\n");
	return 0;
}
