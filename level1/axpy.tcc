#ifndef CXXBLAS_LEVEL1_AXPY_TCC
#define CXXBLAS_LEVEL1_AXPY_TCC 1

template <typename IndexType, typename ALPHA, typename X, typename Y>
void
axpy(IndexType n, const ALPHA &alpha, const X *x, IndexType incX,
     Y *y, IndexType incY)
{
    for (IndexType i=0, iX=0, iY=0; i<n; ++i, iX+=incX, iY+=incY) {
        y[iY] += alpha*x[iX];
    }
}


#endif // CXXBLAS_LEVEL1_AXPY_TCC 1
