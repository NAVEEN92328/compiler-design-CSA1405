%{
#include<stdio.h>
%}

%%
[6-9][0-9]{9} {printf("%s, is a mobile number", yytext);}
.+ {printf("The Mobile Number is Invalid");}
%%
int main()
{
printf("\n Enter the mobile number:");	
yylex();
}
int yywrap()
{
return 1;
}
