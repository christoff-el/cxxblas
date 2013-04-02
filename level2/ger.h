#ifndef CXXBLAS_LEVEL2_GER_H
#define CXXBLAS_LEVEL2_GER_H 1

template <typename IndexType, typename ScalType, typename X, typename Y, typename A>
	void
	ger(IndexType m, IndexType n, const ScalType &alpha, 
			const X *x, IndexType incX, 
			const Y *y, IndexType incY, 
				  A *a, IndexType &lda);

#endif	// CXXBLAS_LEVEL2_GER_H 1
