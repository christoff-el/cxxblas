#ifndef CXXBLAS_LEVEL2_GEMV_TCC
#define CXXBLAS_LEVEL2_GEMV_TCC 1

#include <cmath>

template <typename IndexType, typename ScalType, typename A, typename X, typename Y>
void
gemv(char trans, IndexType m, IndexType n, 
		const ScalType &alpha, 
   		const A *a, IndexType lda, 
		const X *x, IndexType incX, 
   		const ScalType &beta, 
   			  Y *y, IndexType incY)
{ 
	
	if (m<=0 || n<=0) {					//Nothing to do (required so that we don't accidentally change y when we shouldn't)
		return;							//			e.g. m>0, n=0.		
	}
	
	if (trans == 'N' || trans == 'n') {						//No transpose
	
		IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;		//*
		IndexType firstInxY = (copysign(1,incY) < 0) ? (m-1)*(-incY) : 0;
	
		for (IndexType i=0, iY=firstInxY; i<m; ++i, iY+=incY) {
		
			y[iY] *= beta;
		
			for (IndexType j=0, jA=i,jX=firstInxX; j<n; ++j, jA+=lda, jX+=incX) {
				y[iY] += alpha * a[jA] * x[jX];
			}	
		}
	}
	else if (trans == 'T' || trans == 't') {				//Transpose A
	
		IndexType firstInxX = (copysign(1,incX) < 0) ? (m-1)*(-incX) : 0;		//*
		IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
	
		for (IndexType i=0, iY=firstInxY; i<n; ++i, iY+=incY) {
		
			y[iY] *= beta;
		
			for (IndexType j=0, jA=(i*lda),jX=firstInxX; j<m; ++j, ++jA, jX+=incX) {
				y[iY] += alpha * a[jA] * x[jX];
			}	
		}
	
	}
	else if (trans == 'C' || trans == 'c') {				//Conjugate transpose of A
	
		IndexType firstInxX = (copysign(1,incX) < 0) ? (m-1)*(-incX) : 0;		//*
		IndexType firstInxY = (copysign(1,incY) < 0) ? (n-1)*(-incY) : 0;
	
		for (IndexType i=0, iY=firstInxY; i<n; ++i, iY+=incY) {
		
			y[iY] *= beta;
		
			for (IndexType j=0, jA=(i*lda),jX=firstInxX; j<m; ++j, ++jA, jX+=incX) {
				y[iY] += alpha * a[jA] * x[jX];				// <-- ! no conjugate ! (not a problem for real implementations)
			}	
		}
	
	}
	
}

#endif	// CXXBLAS_LEVEL2_GEMV_TCC 1

//*: If increments are negative, then we assume the first element is X((n-1)*|incx|). Otherwise 0.
