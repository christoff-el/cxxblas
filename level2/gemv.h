#ifndef CXXBLAS_LEVEL2_GEMV_H
#define CXXBLAS_LEVEL2_GEMV_H 1

template <typename IndexType, typename ScalType, typename A, typename X, typename Y>
	void
	gemv(char trans, IndexType m, IndexType n, 
			const ScalType &alpha, 
   			const A *a, IndexType lda, 
			const X *x, IndexType incX, 
   			const ScalType &beta, 
   				  Y *y, IndexType incY);

#endif	// CXXBLAS_LEVEL2_GEMV_H 1
