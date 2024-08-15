#include "stk.h"
#include "stdio.h"

int q;
VarGet("EVar4",&q);
q++;
VarSeti("EVar4",q);
char data4[20];
int i;
char data[100];
char LabelData[100];

LabelGet("ELabel15" , "text", LabelData );
KeypadNumExt("",data,30000,3);
LabelSets("ELabel15" ,data );
Convert_StringToInt(data,&i);
VarSet("EVar2" , &i);
VarSet("EVar3" ,data);



sprintf(data4,"%d^%s",q,data);
LabelSets("ELabel18",data4);
ListViewSet("List1","insert",data4);

LabelSet("ELabel1" ,"Visible" ,"0" );

LabelSet("ELabel2" ,"Visible" ,"0" );

LabelSet("ELabel3" ,"Visible" ,"0" );


