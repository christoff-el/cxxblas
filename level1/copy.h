#ifndef CXXBLAS_LEVEL1_COPY_H
#define CXXBLAS_LEVEL1_COPY_H 1

template <typename IndexType, typename X, typename Y>
	void
	copy(IndexType n, const X *x, IndexType incX, const Y *y, IndexType incY);

#endif	// CXXBLAS_LEVEL1_COPY_H 1