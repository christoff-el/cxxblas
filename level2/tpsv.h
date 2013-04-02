#ifndef CXXBLAS_LEVEL2_TPSV_H
#define CXXBLAS_LEVEL2_TPSV_H 1

template <typename IndexType, typename ScalType, typename AP, typename X>
	void
	tpsv(char uplo, char trans, char diag, IndexType n, 
			const AP *ap,
			const X *x, IndexType incX);

#endif	// CXXBLAS_LEVEL2_TPSV_H 1
