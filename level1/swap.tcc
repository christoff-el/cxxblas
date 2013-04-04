#ifndef CXXBLAS_LEVEL1_SWAP_TCC
#define CXXBLAS_LEVEL1_SWAP_TCC 1

#include <cmath>

template <typename IndexType, typename X, typename Y>
void
swap(IndexType n, X *x, IndexType incX, Y *y, IndexType incY)
{
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;		//*
	IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
	
	X z;
	for (IndexType i=0, iX=firstInxX, iY=firstInxY; i<n; i++, iX+=incX, iY+=incY) {
		z = x[iX];
		x[iX] = y[iY];
		y[iY] = z;
	}
	
}

#endif	// CXXBLAS_LEVEL1_SWAP_TCC 1

//*: If increments are negative, then we assume the first element is X((n-1)*|incx|). Otherwise 0.
