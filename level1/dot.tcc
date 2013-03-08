#ifndef CXXBLAS_LEVEL1_DOT_TCC
#define CXXBLAS_LEVEL1_DOT_TCC 1

template <typename IndexType, typename X, typename Y, typename NUM>
	void
	dot(IndexType n, const X *x, IndexType incX, const Y *y, IndexType incY, NUM &sum)
	{
		sum = 0;
		for (IndexType i=0, iX=0,iY=0; i<n; i++, iX+=incX, iY+=incY) {
			sum += x[iX]*y[iY];
		}
	};

#endif