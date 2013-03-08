#ifndef CXXBLAS_LEVEL1_DOT_H
#define CXXBLAS_LEVEL1_DOT_H 1

template <typename IndexType, typename X, typename Y, typename NUM>
	void
	dot(IndexType n, const X *x, IndexType incX, const Y *y, IndexType incY, NUM &sum);

#endif