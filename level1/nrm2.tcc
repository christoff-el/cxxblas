#ifndef CXXBLAS_LEVEL1_NRM2_TCC
#define CXXBLAS_LEVEL1_NRM2_TCC 1

template <typename IndexType, typename X, typename Num>
void
nrm2(IndexType n, const X x, IndexType incX, Num &value)
{
	value=0;
	for(IndexType i=0, iX=0; i<n; i++, iX+=incX){
		value+= x[iX] * x[iX];
	}
}
#endif	// CXXBLASS_LEVEL1_NRM2_TCC 1	
