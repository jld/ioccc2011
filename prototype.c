#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef void **t;
void *N[] = {N, N};
t G, H, M=N, p=N;
char h;

#define Z ; if (A == D) goto
#define C ; *(T =++ G) =D ++; D -= (G =* -- T) ||! (G = calloc(2, sizeof* N)); \
	     *T ++= A; G -=(t) *T --- D; G -=!! (D = T);
#define F ; A =* D; *D ++=G +!!G; D =* (G = D); G -=!! G;
#define U ; T = A; A =* D ++; D =* D;
#define L ; A = D; D =
#define S     = D; D = A;
#define X ; T = A; A =* ++D; *D --= T;

#define Y X C L H C H S
#define W U D S L T Y Z
#define I(P,B) P: L P U U Z P##b; D S B L P U P S Z P; \
               P##a: L P U U L P Y Z P; P##b:

#define J(P) P: L M U Z P##b; T S L H Z P##a F H S F X D S Z P; \
             P##a: L M F M S

#define E(n) ; main(n, 0);
#define R    ; return  0 ;
#define T(B) B B B
#define Q &n ["0111112011138777764877667586677758767675999:=>=?=<"]
#define V(n,N,O) ; if (n Q) { N ; } else { O ; }

int main(int n, char **v)
{
	int b, d;
	t a, c, l, q, x, y, z, T, A, D;

	T=A=D=N F C V(32 *! v,
	    V(7, L G U V(12, F y S,; ) x S,; ),
	    srandom(v[1]?atoi(v[1]):time(0)) Z s);
	V(8, V(4, L x L y C T S V(2, h='0',; )
		V(3, C F T(E(n+1)) L G U, h+=(h>'/')+7*!(h-'9')) U
		V(2, V(1, A+=h<'/'; h='.', h='\n'), V(1, A++,; ))
		Z pr; rp:,
		V(2, L z S L p C p S
		    I(z, a S L z U x S I(x, U L N C L a U L T C
			    L T C L p C p S)),
		    V(1, C F T(E(n+1)),
			L G U E(7) L G U x S L T L x C C F E(n+1)
			L x C F T(E(40)) R))),
	    V(4, T(L y V(1, U y S,; ) L x U x S L T V(2, C C F E(n+1),
			a S L a U L T U L T C L a X)) R,
		V(2, V(1, L N C, L N U C a S L H L a C L a X),
		    L N C F T(E(n+1)) L G U)));
	V(7, V(8, L y, L x C) C F,; ) R;
pr:     putchar(h); h='.' Z rp;
aa:     J(v) Z v; vb: d+=(b=1) Z pa;

s:      E(0) L G U L a S E(12) C F E(19) C F E(26) C F E(33);

	L p C L p S y S b=d=1 C z S pa: n=1 L p;
	c S I(c, x S l S I(l, U Z la U Z ca
		L A+!(random()%n++) Z ld; q S q S ld:) L x U U Z o U Z as);
	L p U U Z sat L y L p Z bees; y S Z pa; as: L T U L y S W ca;
	J(o) A+=(b-=d+1)>-1 Z aa L z U L D W pa; bees: b+=d L q L A;
	U D S L N Z ya; L T L A Z yb; ya: L T U yb: L z Y
	L H L M C M S L z U U L D W pa;

sat:	L N;
	y S J(w) L z U L y C y S Z w; wb:
	L y F Z wc; y S U L D W wb; wc:
	C L a C F T(E(44)) ob: R;
}
