#ifndef CXXBLAS_LEVEL1_ROT_TCC
#define CXXBLAS_LEVEL1_ROT_TCC 1

#include <cmath>

template <typename IndexType, typename X, typename Y, typename ParamType>
void
rot(IndexType n, X *x, IndexType incX, Y *y, IndexType incY, const ParamType c, const ParamType s)
{
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;		//*
	IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
	
	X tmpX;
	for (IndexType i=0, iX=firstInxX, iY=firstInxY; i<n; ++i, iX+=incX, iY+=incY) {
		tmpX = x[iX];
		x[iX] = c*x[iX] + s*y[iY];
		y[iY] = c*y[iY] - s*tmpX;
	}
	
}

#endif	// CXXBLAS_LEVEL1_ROT_TCC 1

//*: If increments are negative, then we assume the first element is X((n-1)*|incx|). Otherwise 0.
