#ifndef CXXBLAS_LEVEL1_ROTM_TCC
#define CXXBLAS_LEVEL1_ROTM_TCC 1

template <typename IndexType, typename X, typename Y, typename PARAMTYPE>
void
rotm(IndexType n, X *x, IndexType incX, Y *y, IndexType incY, PARAMTYPE &param)
{
	
	switch ((int)param[0]) {
		case 0:
			param[1] = 1.;
			param[4] = 1.;
			break;
		case 1:
			param[2] = -1.;
			param[3] = 1.;
			break;
		case -2:
			param[1] = 1.;
			param[2] = 0.;
			param[3] = 0.;
			param[4] = 1.;
			break;
		default:
			//assumes param[0] = -1. --> uses supplied param values.
			break;
	}
	
	X tmpX;
	for (IndexType i=0, iX=0, iY=0; i<n; ++i, iX+=incX, iY+=incY) {
		tmpX = x[iX];
		x[iX] = param[1]*tmpX + param[3]*y[iY];
		y[iY] = param[2]*tmpX + param[4]*y[iY];
	}
	
}

#endif	// CXXBLAS_LEVEL1_ROTM_TCC 1


/*Based on param(1) as parameter flag:

param(1):	|	h11			h21			h12			h22
-1.0	-->	|	param(2)	param(3)	param(4)	param(5)
0.0		-->	|	1.0			param(3)	param(4)	1.0
1.0		-->	|	param(2)	-1.0		1.0			param(5)
-2.0	-->	|	1.0			0.0			0.0			1.0

*/