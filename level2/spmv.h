#ifndef CXXBLAS_LEVEL2_SPMV_H
#define CXXBLAS_LEVEL2_SPMV_H 1

template <typename IndexType, typename ScalType, typename AP, typename X, typename Y>
	void
	spmv(char uplo, IndexType n, const ScalType &alpha, 
			const AP *ap,
			const X *x, IndexType incX, 
			const ScalType &beta, 
			      Y *y, IndexType incY);

#endif	// CXXBLAS_LEVEL2_SPMV_H 1
