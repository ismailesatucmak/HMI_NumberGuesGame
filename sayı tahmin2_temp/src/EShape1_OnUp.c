#include "stk.h"
#include "stdio.h"


int dataint;
VarGet("EVar1" ,&dataint);
int dataint2;
VarGet("EVar2" ,&dataint2);
char data1[100];
VarGet("EVar3",data1);



    
if(dataint2 < dataint)
{
    LabelSet("ELabel1","Visible","1");
}


else if(dataint2 > dataint)
{
    LabelSet("ELabel2","Visible","1");
}

else
{
    LabelSet("ELabel3","Visible","1");
}

