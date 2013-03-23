#ifndef CXXBLAS_LEVEL1_COPY_TCC
#define CXXBLAS_LEVEL1_COPY_TCC 1

template <typename IndexType, typename X, typename Y>
void
copy(IndexType n, const X *x, IndexType incX, Y *y, IndexType incY)
{
	for (IndexType i=0, iX=0, iY=0; i<n; i++, iX+=incX, iY+=incY) {
		y[iY] = x[iX];
	}
}

#endif	// CXXBLAS_LEVEL1_COPY_TCC 1
