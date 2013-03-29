#ifndef CXXBLAS_LEVEL1_ASUM_TCC
#define CXXBLAS_LEVEL1_ASUM_TCC 1
#include <cmath>

template <typename Num, typename IndexType, typename X>
Num
asum(IndexType n, const X *x, IndexType incX)
{
	using std::abs;
	
	Num sum = 0;
	for (IndexType i=0, iX=0; i<n; ++i, iX+=incX) {
		sum += abs(x[iX]);
	}
	
	return sum;
}

#endif	// CXXBLAS_LEVEL1_ASUM_TCC 1
