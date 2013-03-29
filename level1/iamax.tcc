#ifndef CXXBLAS_LEVEL1_IAMAX_TCC
#define CXXBLAS_LEVEL1_IAMAX_TCC 1

#include <cmath>

template <typename IndexType, typename X>
IndexType
iamax(IndexType n, X *x, IndexType incX)
{
	using std::abs;
	
	IndexType iMax = 0;
	X currMax = -1;
	for (IndexType i=0, iX=0; i<n; ++i, iX+=incX) {
		if (abs(x[iX]) > currMax) {
			iMax = i+1;								//Convert c++ index to Fortran index
			currMax = abs(x[iX]);
		}
	}
	
	return iMax;
}

#endif	// CXXBLAS_LEVEL1_IAMAX_TCC 1
