#ifndef CXXBLAS_LEVEL1_SWAP_TCC
#define CXXBLAS_LEVEL1_SWAP_TCC 1

template <typename IndexType, typename X, typename Y>
void
swap(IndexType n, X *x, IndexType incX, Y *y, IndexType incY)
{
	X z;
	
	for (IndexType i=0; i<n; ++i) {
		z = x[i];
		x[i] = y[i];
		y[i] = z;
	}
	
}

#endif	// CXXBLAS_LEVEL1_SWAP_TCC 1
