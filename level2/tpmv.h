#ifndef CXXBLAS_LEVEL2_TPMV_H
#define CXXBLAS_LEVEL2_TPMV_H 1

template <typename IndexType, typename ScalType, typename AP, typename X>
	void
	tpmv(char uplo, char trans, char diag, IndexType n, 
			const AP *ap,
			const X *x, IndexType incX);

#endif	// CXXBLAS_LEVEL2_TPMV_H 1
