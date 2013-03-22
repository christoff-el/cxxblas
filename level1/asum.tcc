#ifndef CXXBLAS_LEVEL1_ASUM_TCC
#define CXXBLAS_LEVEL1_ASUM_TCC 1
#include <cmath>

template <typename IndexType, typename X, typename NUM>
void
asum(IndexType n, const X *x, IndexType incX, NUM &sum)
{
	using std::abs;
	sum = 0;
	for (IndexType i=0, ix=0; i<n; i++, ix += incX) {
		sum += abs(x[ix]);
	}
}

#endif	// CXXBLAS_LEVEL1_ASUM_TCC 1