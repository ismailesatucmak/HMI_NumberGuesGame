#include "stk.h"
#include "stdio.h"


int att = 0;
VarSeti("EVar5",att);



char noch[200];
Convert_IntToString(att,noch);
LabelSet("ELabel16","Text",noch);

ListViewSet("List1","Row0",noch);
ListViewSet("List1","Row1",noch);