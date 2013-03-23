#ifndef CXXBLAS_LEVEL1_IAMIN_TCC
#define CXXBLAS_LEVEL1_IAMIN_TCC 1

#include <cmath>

template <typename IndexType, typename X>
void
iamin(IndexType n, X *x, IndexType incX, IndexType &iMin)
{
	using std::abs;
	
	iMin = 0;
	X currMin = abs(x[0]);
	for (IndexType i=1, iX=incX; i<n; ++i, iX+=incX) {
		if (abs(x[iX]) < currMin) {
			iMin = i;
			currMin = abs(x[iX]);
		}
	}
	
}

#endif	// CXXBLAS_LEVEL1_IAMIN_TCC 1
