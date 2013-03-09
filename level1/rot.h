#ifndef CXXBLAS_LEVEL1_ROT_H
#define CXXBLAS_LEVEL1_ROT_H 1

template <typename IndexType, typename X, typename Y, typename ParamType>
	void
	rot(IndexType n, X *x, IndexType incX, Y *y, IndexType incY, ParamType c, ParamType s);

#endif	// CXXBLAS_LEVEL1_ROT_H 1