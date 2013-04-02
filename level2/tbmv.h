#ifndef CXXBLAS_LEVEL2_TBMV_H
#define CXXBLAS_LEVEL2_TBMV_H 1

template <typename IndexType, typename ScalType, typename A, typename X>
	void
	tbmv(char uplo, char trans, char diag, IndexType n, IndexType k, 
			const A *a, IndexType lda,
			const X *x, IndexType incX);

#endif	// CXXBLAS_LEVEL2_TBMV_H 1
