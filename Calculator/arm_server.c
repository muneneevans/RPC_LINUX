/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "arm.h"

float *
add_1_svc(pair *argp, struct svc_req *rqstp)
{
	static float  result;

	printf("add function called\n");	
	printf("inputs %f, %f\n",argp->a , argp->b );


	result = argp->a + argp->b ;
	
	return &result;
}

float *
sub_1_svc(pair *argp, struct svc_req *rqstp)
{
	static float  result;

	printf("subtract function called\n");
	printf("inputs %f, %f\n",argp->a , argp->b );


	result = argp->a - argp->b ;

	return &result;
}

float *
multiply_1_svc(pair *argp, struct svc_req *rqstp)
{
	static float  result;

	printf("multiply function called\n");
	printf("inputs %f, %f\n",argp->a , argp->b );

	result = argp->a * argp->b ;
	return &result;
}

float *
divide_1_svc(pair *argp, struct svc_req *rqstp)
{
	static float  result;

	printf("divide function called\n");
	printf("inputs %f, %f\n",argp->a , argp->b );

	result = argp->a / argp->b ;

	return &result;
}
