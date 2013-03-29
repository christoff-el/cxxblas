//#include <iostream>

#include "../level1/asum.tcc"
#include "../level1/axpy.tcc"
#include "../level1/copy.tcc"
#include "../level1/dot.tcc"
#include "../level1/nrm2.tcc"
#include "../level1/rot.tcc"
#include "../level1/rotg.tcc"
#include "../level1/scal.tcc"
#include "../level1/swap.tcc"
#include "../level1/iamax.tcc"



extern "C" {

//asum
float
(sasum_)(int 			*N,
		 const float 	*X,
         int			*INCX)
{
    return asum<float>(*N,X,*INCX);
}

//axpy
void
(saxpy_)(int 			*N,
		 const float 	*ALPHA,
         const float	*X,
         int 			*INCX,
         float			*Y,
         int			*INCY)
{
    axpy(*N,*ALPHA,X,*INCX,Y,*INCY);
}

//copy
void
(scopy_)(int 			*N,
         const float	*X,
         int 			*INCX,
         float			*Y,
         int			*INCY)
{
    copy(*N,X,*INCX,Y,*INCY);
}

//dot
float
(sdot_)(int 			*N,
        const float		*X,
        int 			*INCX,
        const float		*Y,
        int				*INCY)
{
    return dot<float>(*N,X,*INCX,Y,*INCY);
}

//nrm2
float
(snrm2_)(int 			*N,
         const float	*X,
         int 			*INCX)
{
    return nrm2<float>(*N,X,*INCX);
}

//rot
void
(srot_)(int 			*N,
        float			*X,
    	int 			*INCX,
        float			*Y,
        int				*INCY,
        float			*C,
        float			*S)
{
    rot(*N,X,*INCX,Y,*INCY,*C,*S);
}

//rotg
void
(srotg_)(float *A,
		 float *B,
		 float *C,
		 float *S)
{
    rotg(*A,*B,*C,*S);
}

//scal
void
(sscal_)(int 			*N,
		 float 			*ALPHA,
         float			*X,
    	 int 			*INCX)
{
    scal(*N,*ALPHA,X,*INCX);
}

//swap
void
(sswap_)(int 			*N,
        float			*X,
    	int 			*INCX,
        float			*Y,
        int				*INCY)
{
    swap(*N,X,*INCX,Y,*INCY);
}

//i_amax
int
(isamax_)(int 			*N,
          float			*X,
    	  int 			*INCX)
{
    return iamax(*N,X,*INCX);
}

}