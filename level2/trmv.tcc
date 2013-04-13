#ifndef CXXBLAS_LEVEL2_TRMV_TCC
#define CXXBLAS_LEVEL2_TRMV_TCC 1

template <typename IndexType, typename A, typename X>
void
trmv(char uplo, char trans, char diag, IndexType n,
		const A *a, IndexType lda,
		X *x, IndexType incX)
{
	
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;
	
	if (diag == 'U' || diag == 'u') {								//### Unit triangular ###
	
		if (uplo == 'U' || uplo == 'u') {								//### Upper triangular ###
	
			if (trans == 'N' || trans == 'n') {								//### No transpose ###
	
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(lda-i+1)) {

					for (IndexType j=0, jX=firstInxX; j<i; ++j, ++iA, jX+=incX) {
						
						x[jX] += x[iX];
						
					}	
			
				}
			}
			else if (trans == 'T' || trans == 't') {						//### Transpose A ###
	
				
	
			}
			else if (trans == 'C' || trans == 'c') {						//### Conjugate transpose of A ###
	
				
	
			}

		}
		else if (uplo == 'L' || uplo == 'l') {							//### Lower triangular ###
		
		
		
		}
	
	}
	else if (diag == 'N' || diag == 'n') {							//### Not unit triangular ###																
	
		if (uplo == 'U' || uplo == 'u') {								//### Upper triangular ###
	
			if (trans == 'N' || trans == 'n') {								//### No transpose ###
	
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(lda-i+1)) {

					for (IndexType j=0, jX=firstInxX; j<i; ++j, ++iA, jX+=incX) {
						
						x[jX] += a[iA]*x[iX];
						
					}	
			
					x[iX] *= a[iA];
			
				}
			}
			else if (trans == 'T' || trans == 't') {						//### Transpose A ###
	
				
	
			}
			else if (trans == 'C' || trans == 'c') {						//### Conjugate transpose of A ###
	
				
	
			}

		}
	
	}
	

}

#endif	// CXXBLAS_LEVEL2_TRMV_TCC 1
