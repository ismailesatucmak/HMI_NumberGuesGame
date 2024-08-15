#include "stk.h"
#include "stdio.h"

int no;

VarGet("EVar4",&no);



char noch[200];
Convert_IntToString(no,noch);
LabelSet("ELabel16","Text",noch);

