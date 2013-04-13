#ifndef CXXBLAS_LEVEL2_TRMV_TCC
#define CXXBLAS_LEVEL2_TRMV_TCC 1

template <typename IndexType, typename A, typename X>
void
trmv(char uplo, char trans, char diag, IndexType n,
		const A *a, IndexType lda,
		X *x, IndexType incX)
{
	
	IndexType firstInxX = (copysign(1,incX) < 0) ? (n-1)*(-incX) : 0;
	
	if (diag == 'U' || diag == 'u') {								//### Unit triangular ###		//these are wrong!
	
		if (uplo == 'U' || uplo == 'u') {								//### Upper triangular ###
	
			if (trans == 'N' || trans == 'n') {								//### No transpose ###
	
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(lda-i+1)) {

					for (IndexType j=0, jX=firstInxX; j<i; ++j, ++iA, jX+=incX) {
						
						x[jX] += a[iA]*x[iX];
						
					}
			
				}
				
			}
			else if (trans == 'T' || trans == 't') {						//### Transpose A ###
	
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(lda-i+2)) {


					for (IndexType j=1, jX=firstInxX+incX; j<i+1; ++j, ++iA, jX+=incX) {
						
						x[iX] += a[iA]*x[jX];
						
					}
			
				}
	
			}
			else if (trans == 'C' || trans == 'c') {						//### Conjugate transpose of A ###
	
				
	
			}

		}
		else if (uplo == 'L' || uplo == 'l') {							//### Lower triangular ###
		
			if (trans == 'N' || trans == 'n') {								//### No transpose ###
	
			
				
			}
			else if (trans == 'T' || trans == 't') {						//### Transpose A ###
	
	
			}
			else if (trans == 'C' || trans == 'c') {						//### Conjugate transpose of A ###
	
				
	
			}
		
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
	
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(lda-i+1)) {

					x[iX] *= a[iA];
					++iA;

					for (IndexType j=1, jX=firstInxX+incX; j<i+1; ++j, ++iA, jX+=incX) {
						
						x[iX] += a[iA]*x[jX];
						
					}
			
				}
	
			}
			else if (trans == 'C' || trans == 'c') {						//### Conjugate transpose of A ###
	
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(lda-i+1)) {

					x[iX] *= a[iA];
					++iA;

					for (IndexType j=1, jX=firstInxX+incX; j<i+1; ++j, ++iA, jX+=incX) {
						
						x[iX] += a[iA]*x[jX];				//!! no conjugate operation (so only works for real numbers)
						
					}
			
				}
	
			}

		}
		else if (uplo == 'L' || uplo == 'l') {							//### Lower triangular ###
		
			if (trans == 'N' || trans == 'n') {								//### No transpose ###
	
				X xTmp;
				IndexType InxRemA = lda-n+1;
				
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(InxRemA+i)) {
				
					xTmp = a[iA]*x[iX];				//Use temporary variable to allow sequential reading of A.
					++iA;
					
					for (IndexType j=i+1, jX=firstInxX+(i+1)*incX; j<n; ++j, ++iA, jX+=incX) {
					
						x[jX] += a[iA]*x[iX];
					
					}
					
					x[iX] = xTmp;
				
				}
				
			}
			else if (trans == 'T' || trans == 't') {						//### Transpose A ###
	
				IndexType InxRemA = lda-n+1;
				
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(InxRemA+i)) {
				
					x[iX] *= a[iA];
					++iA;
					
					for (IndexType j=i+1, jX=firstInxX+(i+1)*incX; j<n; ++j, ++iA, jX+=incX) {
					
						x[iX] += a[iA]*x[jX];
					
					}
					
				}
	
			}
			else if (trans == 'C' || trans == 'c') {						//### Conjugate transpose of A ###
	
				IndexType InxRemA = lda-n+1;
				
				for (IndexType i=0, iX=firstInxX, iA=0; i<n; ++i, iX+=incX, iA+=(InxRemA+i)) {
				
					x[iX] *= a[iA];
					++iA;
					
					for (IndexType j=i+1, jX=firstInxX+(i+1)*incX; j<n; ++j, ++iA, jX+=incX) {
					
						x[iX] += a[iA]*x[jX];				//!! no conjugate operation (so only works for real numbers)
					
					}
					
				}
	
			}
		
		}
	
	}
	

}

#endif	// CXXBLAS_LEVEL2_TRMV_TCC 1
