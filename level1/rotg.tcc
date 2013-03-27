#ifndef CXXBLAS_LEVEL1_ROTG_TCC
#define CXXBLAS_LEVEL1_ROTG_TCC 1

#include <cmath>

template <typename CoordType, typename CType, typename SType>
void
rotg(CoordType &a, CoordType &b, CType &c, SType &s)
{
	
	CoordType r, z;
	
	if (b == 0) {
		c = copysign(1,a);
		s = 0;
		r = abs(a);
		z = (a != 0 ? s : 1/c);
	}
	else if (a == 0) {
		c = 0;
		s = -copysign(1,b);
		r = abs(b);
		z = 1;
	}
	else if (abs(b) > abs(a)) {
		CoordType t = a/b;
		CoordType u = copysign(sqrt(1+t*t),b);
		
		s = -1/u;
		c = -s*t;
		r = b*u;
		z = 1/c;
	}
	else {
		CoordType t = b/a;
		CoordType u = copysign(sqrt(1+t*t),a);
		
		c = 1/u;
		s = -c*t;
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

Using 'improved' LAPACK-style algorithm (wikipedia).
The parameter z is defined such that if |a| > |b|, z is s; otherwise if c is not 0 z is 1/c; otherwise z is 1.

r --> a
z --> b

*/
