#ifndef CXXBLAS_LEVEL1_ROT_TCC
#define CXXBLAS_LEVEL1_ROT_TCC 1

template <typename IndexType, typename X, typename Y, typename ParamType>
void
rot(IndexType n, X *x, IndexType incX, Y *y, IndexType incY, ParamType c, ParamType s)
{

	X tmpX;
	for (IndexType i=0, iX=0, iY=0; i<n; ++i, iX+=incX, iY+=incY) {
		tmpX = x[iX];
		x[iX] = c*x[iX] + s*y[iY];
		y[iY] = c*y[iY] - s*tmpX;
	}
	
}

#endif	// CXXBLAS_LEVEL1_ROT_TCC 1