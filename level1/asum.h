#ifndef CXXBLAS_LEVEL1_ASUM_H
#define CXXBLAS_LEVEL1_ASUM_H 1

template <typename IndexType, typename X, typename NUM>
	void
	asum(IndexType n, const X *x, IndexType incX, NUM &sum);

#endif	// CXXBLAS_LEVEL1_ASUM_H 1
