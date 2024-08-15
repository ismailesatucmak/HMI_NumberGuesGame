#include "stk.h"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"


//srand(time(null));

int rastgelesayi = rand()%1000+1;

VarSet("EVar1" , &rastgelesayi);

char yaz[100];
char labelyaz[100];
Convert_IntToString(rastgelesayi,yaz);
LabelGet( "ELabel19","text" ,labelyaz );
LabelSets( "ELabel19",yaz );

LabelSet("ELabel20","Visible","1");
