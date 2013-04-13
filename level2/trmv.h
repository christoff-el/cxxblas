#ifndef CXXBLAS_LEVEL2_TRMV_H
#define CXXBLAS_LEVEL2_TRMV_H 1

template <typename IndexType, typename A, typename X>
	void
	trmv(char uplo, char trans, char diag, IndexType n,
			const A *a, IndexType lda,
			X *x, IndexType incX);

#endif	// CXXBLAS_LEVEL2_TRMV_H 1
