#ifndef CXXBLAS_LEVEL1_SCAL_TCC
#define CXXBLAS_LEVEL1_SCAL_TCC 1

template <typename IndexType, typename ALPHA, typename X>
void
scal(IndexType n, const ALPHA &alpha, X *x, IndexType incX)
{
	for (IndexType i=0, ix=0; i<n; ++i, ix += incX) {
		x[ix] *= alpha;
	}
}

#endif	// CXXBLAS_LEVEL1_SCAL_TCC 1