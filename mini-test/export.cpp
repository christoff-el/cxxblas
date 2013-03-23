//#include <iostream>

#include "../level1/asum.tcc"
#include "../level1/axpy.tcc"
#include "../level1/copy.tcc"
#include "../level1/dot.tcc"
#include "../level1/nrm2.tcc"		
#include "../level1/rot.tcc"
//#include "../level1/rotg.tcc"		<-- NA
#include "../level1/scal.tcc"
#include "../level1/swap.tcc"
#include "../level1/iamax.tcc"



extern "C" {

//asum
void
(sasum_)(int 			*N,
		 const float 	*X,
         int			*INCX,
         float 			*RES)
{
    asum(*N,X,*INCX, *RES);
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
void
(sdot_)(int 			*N,
        const float		*X,
        int 			*INCX,
        float			*Y,
        int				*INCY,
        float			*RES)
{
    dot(*N,X,*INCX,Y,*INCY,*RES);
}

//nrm2
void
(snrm2_)(int 			*N,
         const float	*X,
         int 			*INCX
         float			*RES)
{
    nrm2(*N,X,*INCX, *RES);
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

//rotg	<-- NOT IMPLEMENTED
void
(srotg_)(float *A,
		 float *B,
		 float *C,
		 float *S)
{
    //rotg(*A,*B,*C,*S);
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
void
(isamax_)(int 			*N,
          float			*X,
    	  int 			*INCX)
{
    iamax(*N,X,*INCX);
}

}