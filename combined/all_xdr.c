/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "all.h"

bool_t
xdr_mystring (XDR *xdrs, mystring *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, 255))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pair (XDR *xdrs, pair *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->b))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_triple (XDR *xdrs, triple *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->num1))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->num2))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->num3))
		 return FALSE;
	return TRUE;
}
