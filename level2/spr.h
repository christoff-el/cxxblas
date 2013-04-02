#ifndef CXXBLAS_LEVEL2_SPR_H
#define CXXBLAS_LEVEL2_SPR_H 1

template <typename IndexType, typename ScalType, typename X, typename AP>
	void
	spr(char uplo, IndexType n, const ScalType &alpha, 
			const X *x, IndexType incX, AP *ap);

#endif	// CXXBLAS_LEVEL2_SPR_H 1
