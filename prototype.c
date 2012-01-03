#include <stdio.h>
#include <stdlib.h>

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
#define I(P,B) P##a: L P U U Z P##c; D S B L P U P S Z P##a; \
               P##b: L P U U L P Y Z P##a; P##c:

#define E(n) ; main(n, 0);
#define R    ; return  0 ;
#define T(B) B B B
#define Q &n ["0111112011138777764877667586677758767675999:=>=?=<"]
#define V(n,N,O) ; if (n Q) { N ; } else { O ; }

void prn(t T, int l)
{
	int i, n=0;
	t A=T;

	if (T != N && ((t)T[1])[1] == T) {
		for (i = 0; i < l; ++i) printf(" ");
		printf("%p %p = atom\n", (void*)T, T[1]);
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
	t a, c, l, x, y, z;
	t T, A, D;

	T=A=D=N F C if (v) { E(0) L G U L a S Z s; }
	V(7, L G U V(12, F y S,; ) x S,; );
	V(8, V(4, L x L y C T S V(2, h='0',; )
		V(3, C F T(E(n+1)) L G U, h+=h>'/') U
		V(2, V(1, A+=h<'/'; h='.', h='\n'), V(1, A++,; ))
		Z pr; rp:,
		V(2, L z S L p C p S
		    I(z, a S L z U x S I(x, U L N C L a U L T C
			    /*!*/ L N U L T C L p C p S)),
		    V(1, C F T(E(n+1)),
			L G U E(7) L G U x S L T L x C C F E(n+1)
			L x C F T(E(40)) R))),
	    V(4, T(L y V(1, U y S,; ) L x U x S L T V(2, C C F E(n+1),
			a S L a U L T U L T C L a X)) R,
		V(2, V(1, /*!*/ L N L N C, C a S L a C L a X),
		    L N C F T(E(n+1)) L G U)));
	V(7, V(8, L y, L x C) C F,; ) R;
pr:     putchar(h); h='.' Z rp;

s:      E(12) C F E(19) C F E(26) C F E(33) C F T(E(44));

	L p C p S y S C z S pa: printf("go ") L p L c S U U Z sat;
	I(c, x S l S I(l, U Z lb U Z cb) L x U U Z oa U Z as);
	L y L p Z bees; y S Z pa; as: L T U L y S W cb; oa: 
	L M U Z unsat; T S L H Z ob F H S F X D S Z oa; ob: printf("conf\n");
	L M F M S L z U L D W pa; bees: printf("bees\n");
	L p U U T S U U D S L z Y L H L M C M S L z U U L D W pa;

sat:	printf("done\n") L a C F T(E(44)) unsat: R;
}
