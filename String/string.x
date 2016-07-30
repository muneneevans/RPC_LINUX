struct mystring{
	char a[100] ;
};

program DISPLAY_PROG{
	version DISPLAY_VERS{
	   mystring DISPLAY(mystring) = 1;
	} = 1;
} = 0x23441111;
