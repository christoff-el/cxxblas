#ifndef CXXBLAS_LEVEL2_TRSV_H
#define CXXBLAS_LEVEL2_TRSV_H 1

template <typename IndexType, typename ScalType, typename A, typename X>
	void
	trsv(char uplo, char trans, char diag, IndexType n,
			const A *a, IndexType lda,
			const X *x, IndexType incX);

#endif	// CXXBLAS_LEVEL2_TRSV_H 1
