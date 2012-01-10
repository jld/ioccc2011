#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef void **t;
void *N[] = {N, N};
t G, H, M=N, u=N;
int h;

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

#define J(P) P##a: L M U Z P##c; T S L H Z P##b F H S F X D S Z P##a; \
             P##b: L M F M S

#define E(m) ; n += main(m, 0);
#define R    ; return  0 ;
#define T(B) B B B
#define Q &n ["0111112011138777764877667586677758767675999:=>=?=<"]
#define V(n,N,O) ; if (n Q) { N ; } else { O ; }

int main(int n, char **v)
{
	int b, d=n;
	t q, r, s, w, x, y, z, T, A, D;

	T=A=D=N F q=w=x=y=z=H C V(32 *! v,
	    V(7, L G U V(12, F y S,; ) x S,; ),
	    srandom((unsigned)(v[1]?atoi(v[1]):time(0))) Z e);
	V(8, V(4, L x L y C T S V(2, h=48,; )
		V(3, C F T(E(n+1)) L G U, h+=(h>47)+7*!(h-57)) U
		V(2, V(1, A+=h<47; h=46, h=10), V(1, A++,; ))
		Z p; q:,
		V(2, L z S L u C u S
		    I(z, w S L z U x S I(x, U L N C Z xb L w U L T C
			    L T C Z zb L u C u S)),
		    V(1, C F T(E(n+1)),
			L G U E(7) L G U x S L T L x C C F E(n+1)
			L x C F T(E(40)) R))),
	    V(4, T(L y V(1, U y S,; ) L x U x S L T V(2, C C F E(n+1),
			w S L w U L T U L T C L w X)) R,
		V(2, V(1, L N C, L N U C w S L H L w C L w X),
		    L N C F T(E(n+1)) L G U)));
	V(7, V(8, L y, L x C) C F,; ) R;
p:     (void)putchar(h); h=46 Z q;
a:     J(v) Z va; vc: d+=(b=1) Z t;

e:      E(0) L G U L w S E(12) C F E(19) C F E(26) C F E(33);

	L u C L u S y S b=d=1 C z S t: n=1 L u;
	r S I(r, x S s S I(s, U Z sb U Z rb
		L A+!(random()%n++) Z sd; q S q S sd:) L x U U Z ua U Z s);
	L u U U Z r L y L u Z b; y S Z t; s: L T U L y S W rb;
	J(u) A+=(b-=d+1)>-1 Z a L z U L D W t; b: b+=d L q L A;
	U D S L N Z g; L T L A Z h; g: L T U h: L z Y
	L H L M C M S L z U U L D W t;

r:	L N;
	y S J(y) L z U L y C y S Z ya; yc:
	L y F Z yd; y S U L D W yc; yd:
	C L w C F T(E(44)) uc: R;
}
