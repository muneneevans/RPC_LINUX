
struct pair{
    float a ;
    float b ;
};


program ADD_PROG{
    version ADD_VERS{
        float ADD(pair)=1;
    }=1;
}=0x23441111;

program SUB_PROG{
    version SUB_VERS{
        float SUB(pair)=1;
    }=1;
}=0x23451111;

program MULTIPLY_PROG{
    version MULTIPLY_VERS{
        float MULTIPLY(pair)=1;
    }=1;
}=0x23461111;

program DIVIDE_PROG{
    version DIVIDE_VERS{
        float DIVIDE(pair)=1;
    }=1;
}=0x23471111;