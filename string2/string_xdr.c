/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "string.h"

bool_t
xdr_mystring (XDR *xdrs, mystring *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, 255))
		 return FALSE;
	return TRUE;
}
