/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MULTIPLICATION_H_RPCGEN
#define _MULTIPLICATION_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct triple {
	int num1;
	int num2;
	int num3;
};
typedef struct triple triple;

#define MULTIPLY_PROG 0x23451111
#define MULTIPLY_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define multiply 1
extern  int * multiply_1(triple *, CLIENT *);
extern  int * multiply_1_svc(triple *, struct svc_req *);
extern int multiply_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define multiply 1
extern  int * multiply_1();
extern  int * multiply_1_svc();
extern int multiply_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_triple (XDR *, triple*);

#else /* K&R C */
extern bool_t xdr_triple ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MULTIPLICATION_H_RPCGEN */
