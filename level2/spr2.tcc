#ifndef CXXBLAS_LEVEL2_SPR2_TCC
#define CXXBLAS_LEVEL2_SPR2_TCC 1

template <typename IndexType, typename ScalType, typename X, typename Y, typename AP>
void
spr2(char uplo, IndexType n, const ScalType &alpha, 
		const X *x, IndexType incX, 
		const Y *y, IndexType incY,
		      AP *ap)
{

	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;
	IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
	
	if (uplo == 'U' || uplo == 'u') {
		
		for (IndexType i=0, iX=firstInxX, iY=firstInxY, iA=0; i<n; ++i, iX+=incX, iY+=incY) {

			for (IndexType j=0, jX=firstInxX, jY=firstInxY; j<i+1; ++j, ++iA, jX+=incX, jY+=incY) {
				ap[iA] += alpha * (x[iX] * y[jY] + y[iY] * x[jX]);
			}	
		}
	
	}
	else if (uplo == 'L' || uplo == 'l') {
	
		for (IndexType i=0, iX=firstInxX, iY=firstInxY, iA=0; i<n; ++i, iX+=incX, iY+=incY) {

			for (IndexType j=0, jX=firstInxX+i*incX, jY=firstInxY+i*incY; j<n-i; ++j, ++iA, jX+=incX, jY+=incY) {
				ap[iA] += alpha * (x[iX] * y[jY] + y[iY] * x[jX]);
			}	
		}
	
	}

}

#endif	// CXXBLAS_LEVEL2_SPR2_TCC 1
