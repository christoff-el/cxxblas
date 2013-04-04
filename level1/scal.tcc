#ifndef CXXBLAS_LEVEL1_SCAL_TCC
#define CXXBLAS_LEVEL1_SCAL_TCC 1

#include <cmath>

template <typename IndexType, typename ALPHA, typename X>
void
scal(IndexType n, const ALPHA &alpha, X *x, IndexType incX)
{
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;		//*
	
	for (IndexType i=0, iX=firstInxX; i<n; ++i, iX += incX) {
		x[iX] *= alpha;
	}
}

#endif	// CXXBLAS_LEVEL1_SCAL_TCC 1

//*: If increments are negative, then we assume the first element is X((n-1)*|incx|). Otherwise 0.
