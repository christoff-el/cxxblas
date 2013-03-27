#ifndef CXXBLAS_LEVEL1_ROTM_H
#define CXXBLAS_LEVEL1_ROTM_H 1

template <typename IndexType, typename X, typename Y, typename ParamType>
    void
    rotm(IndexType n, X *x, IndexType incX, Y *y, IndexType incY, const ParamType *param);

#endif	// CXXBLAS_LEVEL1_ROTM_H 1
