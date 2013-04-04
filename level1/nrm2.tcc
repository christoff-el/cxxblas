#ifndef CXXBLAS_LEVEL1_NRM2_TCC
#define CXXBLAS_LEVEL1_NRM2_TCC 1

#include <cmath>

template <typename Num, typename IndexType, typename X>
Num
nrm2(IndexType n, const X x, IndexType incX)
{
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;		//*
	
	Num value=0;
	for(IndexType i=0, iX=firstInxX; i<n; ++i, iX+=incX){
		value+= x[iX] * x[iX];
	}
	
	return sqrt(value);
}
#endif	// CXXBLASS_LEVEL1_NRM2_TCC 1	

//*: If increments are negative, then we assume the first element is X((n-1)*|incx|). Otherwise 0.
