typedef string mystring<255>;

struct pair{
  int a ;
  int b ;
};

struct triple {
  int num1 ;
  int num2 ;
  int num3 ;
};


program ADD_PROG{
	version ADD_VERS{
		int ADD(pair)=1;
	}=1;
}=0x23441111;


program STRING_PROG{
	version STRING_VERS{
	   mystring DISPLAY(mystring) = 1;
	} = 1;
} = 0x23451111;


program MULTIPLY_PROG{
  version MULTIPLY_VERS{
    int multiply(triple)=1;
  }=1;
}=0x23461111;
