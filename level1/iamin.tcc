#ifndef CXXBLAS_LEVEL1_IAMIN_TCC
#define CXXBLAS_LEVEL1_IAMIN_TCC 1

#include <cmath>

template <typename IndexType, typename X>
IndexType
iamin(IndexType n, X *x, IndexType incX)
{
	using std::abs;
	
	IndexType iMin = 0;
	X currMin = -1;
	for (IndexType i=0, iX=0; i<n; ++i, iX+=incX) {
		if (abs(x[iX]) > currMin) {
			iMin = i+1;								//Convert c++ index to Fortran index
			currMin = abs(x[iX]);
		}
	}
	
	return iMin;
}

#endif	// CXXBLAS_LEVEL1_IAMIN_TCC 1
