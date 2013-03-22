#ifndef CXXBLAS_LEVEL1_IAMAX_TCC
#define CXXBLAS_LEVEL1_IAMAX_TCC 1

#include <cmath>

template <typename IndexType, typename X>
void
iamax(IndexType n, X *x, IndexType incX, IndexType &iMax)
{
	using std::abs;
	
	iMax = 0;
	X currMax = abs(x[0]);
	for (IndexType i=1, iX=incX; i<n; ++i, iX+=incX) {
		if (abs(x[iX]) > currMax) {
			iMax = i;
			currMax = abs(x[iX]);
		}
	}
	
}

#endif	// CXXBLAS_LEVEL1_IAMAX_TCC 1