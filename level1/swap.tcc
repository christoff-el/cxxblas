#ifndef CXXBLAS_LEVEL1_SWAP_TCC
#define CXXBLAS_LEVEL1_SWAP_TCC 1

template <typename IndexType, typename XY>
void
swap(IndexType n, XY *x, IndexType incX, XY *y, IndexType incY)
{
	XY *z = new XY[n];
	
	for (IndexType i=0; i<n; ++i) {
		z[i] = x[i];
		x[i] = y[i];
		y[i] = z[i];
	}
	
	delete[] z;
}

#endif	// CXXBLAS_LEVEL1_SWAP_TCC 1