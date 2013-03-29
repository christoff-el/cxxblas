#ifndef CXXBLAS_LEVEL1_COPY_TCC
#define CXXBLAS_LEVEL1_COPY_TCC 1

template <typename IndexType, typename X, typename Y>
void
copy(IndexType n, const X *x, IndexType incX, Y *y, IndexType incY)
{
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;		//*
	IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
	
	for (IndexType i=0, iX=firstInxX, iY=firstInxY; i<n; i++, iX+=incX, iY+=incY) {
		y[iY] = x[iX];
	}
}

#endif	// CXXBLAS_LEVEL1_COPY_TCC 1

//*: If increments are negative, then we assume the first element is X((n-1)*|incx|). Otherwise 0.
