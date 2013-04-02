#ifndef CXXBLAS_LEVEL2_SYR_H
#define CXXBLAS_LEVEL2_SYR_H 1

template <typename IndexType, typename ScalType, typename X, typename A>
	void
	syr(char uplo, IndexType n, const ScalType &alpha, 
			const X *x, IndexType incX, A *a, IndexType lda);

#endif	// CXXBLAS_LEVEL2_SYR_H 1
