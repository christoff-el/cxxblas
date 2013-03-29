#ifndef CXXBLAS_LEVEL1_ROTG_TCC
#define CXXBLAS_LEVEL1_ROTG_TCC 1

#include <cmath>

template <typename CoordType, typename CType, typename SType>
void
rotg(CoordType &a, CoordType &b, CType &c, SType &s)
{
	using std::abs;
	
	CoordType r, z;
	
	if (b == 0) {
		c = copysign(1,a);
		s = 0;
		r = abs(a);
		z = s;//(a != 0 ? s : 1/c);
	}
	else if (a == 0) {
		c = 0;
		s = copysign(1,b);
		r = abs(b);
		z = 1;
	}
	else if (abs(b) > abs(a)) {
		CoordType t = a/b;
		CoordType v = (a>0 && b<0) ? +1 : -1;			//**
		CoordType u = v*sqrt(1+t*t);
		
		s = -1/u;
		c = s*t;
		r = -b*u;
		z = 1/c;
	}
	else {
		CoordType t = b/a;
		CoordType u = copysign(sqrt(1+t*t),b);
		
		c = 1/u;
		s = c*t;
		r = a*u;
		z = s;
	}
	
	a = r;
	b = z;

}

#endif	// CXXBLAS_LEVEL1_ROTG_TCC 1

/*
[c  s| [a| = [r|	
|-s c] |b]	 |0]

Using 'improved' LAPACK-style algorithm (wikipedia). <--- With MUCH tweaking of signs so that it matches the
test suite results
The parameter z is defined such that if |a| > |b|, z is s; otherwise if c is not 0 z is 1/c; otherwise z is 1.

r --> a
z --> b

**: Here we need a function that does this:

a b --> sign
+ + --> -
+ - --> +
- + --> -
- - --> -

I can't think of a nice one..

*/
