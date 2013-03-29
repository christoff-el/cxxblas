#ifndef CXXBLAS_LEVEL1_DOT_H
#define CXXBLAS_LEVEL1_DOT_H 1

template <typename NUM, typename IndexType, typename X, typename Y>
	NUM
	dot(IndexType n, const X *x, IndexType incX, const Y *y, IndexType incY);

#endif	// CXXBLAS_LEVEL1_DOT_H 1
