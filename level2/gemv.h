#ifndef CXXBLAS_LEVEL2_GEMV_H
#define CXXBLAS_LEVEL2_GEMV_H 1

template <typename IndexType, typename ALPHA, typename X, typename Y>
    void
    gemv(char trans, IndexType m, IndexType n, const ALPHA &alpha, 
    		A *a, IndexType &lda, 
    		X *x, IndexType incX, BETA &beta,
    		Y *y, IndexType incY);

#endif	// CXXBLAS_LEVEL2_GEMV_H 1
