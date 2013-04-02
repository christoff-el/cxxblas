#ifndef CXXBLAS_LEVEL2_GBMV_H
#define CXXBLAS_LEVEL2_GBMV_H 1

template <typename IndexType, typename ScalType, typename A, typename X, typename Y>
    void
	gbmv(char trans, IndexType m, IndexType n, IndexType kl, IndexType ku, 
			const ScalType &alpha, 
   			const A *a, IndexType lda, 
   			const X *x, IndexType incX, 
   			const ScalType &beta, 
   			      Y *y, IndexType incY);

#endif	// CXXBLAS_LEVEL2_GBMV_H 1
