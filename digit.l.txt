%{
#include<stdio.h>
%}

%%
[0-9]+ {printf("%s, is a digit", yytext);}
.+ {printf("it is not a digit");}
%%
int main()
{
printf("\n Enter the digit :");	
yylex();
}
int yywrap()
{
return 1;
}
