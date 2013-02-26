#ifndef CXXBLAS_LEVEL1_AXPY_H
#define CXXBLAS_LEVEL1_AXPY_H 1

template <typename IndexType, typename ALPHA, typename X, typename Y>
    void
    axpy(IndexType n, const ALPHA &alpha, const X *x, IndexType incX,
         Y *y, IndexType incY);

#endif // CXXBLAS_LEVEL1_AXPY_H 1
