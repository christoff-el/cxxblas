#ifndef CXXBLAS_LEVEL2_GEMV_TCC
#define CXXBLAS_LEVEL2_GEMV_TCC 1

template <typename IndexType, typename ScalType, typename A, typename X, typename Y>
void
gemv(char trans, IndexType m, IndexType n, 
		const ScalType &alpha, 
   		const A *a, IndexType lda, 
		const X *x, IndexType incX, 
   		const ScalType &beta, 
   			  Y *y, IndexType incY)
{
	
	if (m<=0 || n<=0) {
		return;
	}
	
	if (trans == 'N' || trans == 'n') {						//No transpose
	
		for (IndexType i=0, iY=0; i<m; ++i, iY+=incY) {				//Rows
		
			y[iY] *= beta;
		
			for (IndexType j=0, jA=i,jX=0; j<n; ++j, jA+=lda, jX+=incX) {			//Column id
			
				y[iY] += alpha * a[jA] * x[jX];
				
			}	
		}
	}
	else if (trans == 'T' || trans == 't') {
	
	
	
	}
	
	
}

#endif	// CXXBLAS_LEVEL2_GEMV_TCC 1

// y <-- alpha A x + beta y