#ifndef CXXBLAS_LEVEL2_GER_TCC
#define CXXBLAS_LEVEL2_GER_TCC 1

template <typename IndexType, typename ScalType, typename X, typename Y, typename A>
void
ger(IndexType m, IndexType n, const ScalType &alpha, 
		const X *x, IndexType incX, 
		const Y *y, IndexType incY, 
			  A *a, IndexType &lda)
{

IndexType firstInxX = (copysign(1,incX) < 0) ? (m-1)*(-incX) : 0;		//*
IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;

for (IndexType i=0, iY=firstInxY; i<n; ++i, iY+=incY) {

	for (IndexType j=0, jA=(i*lda),jX=firstInxX; j<m; ++j, ++jA, jX+=incX) {
		a[jA] += alpha * x[jX] * y[iY];
	}
		
}


}

#endif	// CXXBLAS_LEVEL2_GER_H 1
