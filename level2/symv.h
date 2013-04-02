#ifndef CXXBLAS_LEVEL2_SYMV_H
#define CXXBLAS_LEVEL2_SYMV_H 1

template <typename IndexType, typename ScalType, typename A, typename X, typename Y>
	void
	symv(char uplo, IndexType n, const ScalType &alpha, 
			const A *a, IndexType lda,
			const X *x, IndexType incX, 
			const ScalType &beta, 
			      Y *y, IndexType incY);

#endif	// CXXBLAS_LEVEL2_SYMV_H 1
