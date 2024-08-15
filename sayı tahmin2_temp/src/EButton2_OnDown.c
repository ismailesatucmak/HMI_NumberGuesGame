#include "stk.h"
#include "stdio.h"

LabelSet("ELabel1" ,"Visible" ,"0" );

LabelSet("ELabel2" ,"Visible" ,"0" );

LabelSet("ELabel3" ,"Visible" ,"0" );

LabelSet("ELabel19","Visible","0");

LabelSet("ELabel7","Visible","0");

LabelSet("ELabel15","Text","0");

LabelSet("ELabel18","Text","0");

VarSet("ReturnPage","Screen1");
ChangeScreenSet("correct");

int att = 0;
char noch[200];
Convert_IntToString(att,noch);
LabelSet("ELabel16","Text",noch);

ListViewSet("List1","Row0",noch);
ListViewSet("List1","Row1",noch);

