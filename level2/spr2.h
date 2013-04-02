#ifndef CXXBLAS_LEVEL2_SPR2_H
#define CXXBLAS_LEVEL2_SPR2_H 1

template <typename IndexType, typename ScalType, typename X, typename Y, typename AP>
	void
	spr2(char uplo, IndexType n, const ScalType &alpha, 
			const X *x, IndexType incX, 
			const Y *y, IndexType incY,
			      AP *ap);

#endif	// CXXBLAS_LEVEL2_SPR2_H 1
