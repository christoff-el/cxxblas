#ifndef CXXBLAS_LEVEL2_SPMV_TCC
#define CXXBLAS_LEVEL2_SPMV_TCC 1

template <typename IndexType, typename ScalType, typename AP, typename X, typename Y>
void
spmv(char uplo, IndexType n, const ScalType &alpha, 
		const AP *ap,
		const X *x, IndexType incX, 
		const ScalType &beta, 
		      Y *y, IndexType incY)
{
	
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;
	IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
		
	if (uplo == 'U' || uplo == 'u') {
	
		for (IndexType i=0, iX=firstInxX,iY=firstInxY, iA=0; i<n; ++i, iX+=incX, iY+=incY, ++iA) {
		
			y[iY] *= beta;
		
			for (IndexType j=0, jX=firstInxX,jY=firstInxY; j<i; ++j, ++iA, jX+=incX, jY+=incY) {
				y[jY] += alpha * ap[iA] * x[iX];		//Upper
				y[iY] += alpha * ap[iA] * x[jX];		//Lower
			}	
			
			y[iY] += alpha * ap[iA] * x[iX];			//Diagonal
			
		}
		
	}
	else if (uplo == 'L' || uplo == 'l') {

		//Backwards loops mean we need to do this first. Possibly exists a neater solution..
		for (IndexType i=0, iY=firstInxY; i<n; ++i, iY+=incY) {
			y[iY] *= beta;
		}
		
		for (IndexType i=0, iX=firstInxX,iY=firstInxY, iA=0; i<n; ++i, iX+=incX, iY+=incY) {
		
			y[iY] += alpha * ap[iA] * x[iX];			//Diagonal
			++iA;
		
			for (IndexType j=1, jX=firstInxX+(i+1)*incX,jY=firstInxY+(i+1)*incY; j<n-i; ++j, ++iA, jX+=incX, jY+=incY) {
				y[jY] += alpha * ap[iA] * x[iX];		//Upper
				y[iY] += alpha * ap[iA] * x[jX];		//Lower
			}	
			
		}
	
	}

}

#endif	// CXXBLAS_LEVEL2_SPMV_TCC 1
