#ifndef CXXBLAS_LEVEL1_DOT_TCC
#define CXXBLAS_LEVEL1_DOT_TCC 1

template <typename Num, typename IndexType, typename X, typename Y>
Num
dot(IndexType n, const X *x, IndexType incX, const Y *y, IndexType incY)
{
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;		//*
	IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
	
	Num sum = 0;
	for (IndexType i=0, iX=firstInxX,iY=firstInxY; i<n; ++i, iX+=incX, iY+=incY) {
		sum += x[iX]*y[iY];
	}
	
	return sum;
}

#endif	// CXXBLAS_LEVEL1_DOT_TCC 1

//*: If increments are negative, then we assume the first element is X((n-1)*|incx|). Otherwise 0.
