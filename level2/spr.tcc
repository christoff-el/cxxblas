#ifndef CXXBLAS_LEVEL2_SPR_TCC
#define CXXBLAS_LEVEL2_SPR_TCC 1

template <typename IndexType, typename ScalType, typename X, typename AP>
void
spr(char uplo, IndexType n, const ScalType &alpha, 
		const X *x, IndexType incX, AP *ap)
{

	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;
	
	if (uplo == 'U' || uplo == 'u') {
		
		for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX) {

			for (IndexType j=0, jX=firstInxX; j<i+1; ++j, ++iA, jX+=incX) {
				ap[iA] += alpha * x[iX] * x[jX];
			}	
		}
	
	}
	else if (uplo == 'L' || uplo == 'l') {
	
		for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX) {

			for (IndexType j=0, jX=firstInxX+i*incX; j<n-i; ++j, ++iA, jX+=incX) {
				ap[iA] += alpha * x[iX] * x[jX];
			}	
		}
	
	}

}

#endif	// CXXBLAS_LEVEL2_SPR_TCC 1
