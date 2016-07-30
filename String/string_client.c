/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "string.h"


void
display_prog_1(char *host , char n[])
{
	CLIENT *clnt;
	mystring  *result_1;
	mystring  display_1_arg;



#ifndef	DEBUG
	clnt = clnt_create (host, DISPLAY_PROG, DISPLAY_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = display_1(&display_1_arg, clnt);

	strcpy(display_1_arg.a, n);
	printf("arg is %s\n",display_1_arg.a  );
	if (result_1 == (mystring *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	char name[100];

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];

	printf("please enter your name\n");
	scanf("%s",name );


	display_prog_1 (host , name );
exit (0);
}