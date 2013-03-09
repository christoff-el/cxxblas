#ifndef CXXBLAS_LEVEL1_SCAL_H
#define CXXBLAS_LEVEL1_SCAL_H 1

template <typename IndexType, typename ALPHA, typename X>
    void
    scal(IndexType n, const ALPHA &alpha, X *x, IndexType incX);

#endif	// CXXBLAS_LEVEL1_SCAL_H 1