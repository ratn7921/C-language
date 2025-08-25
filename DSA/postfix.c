#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define BLANK ' '
#define TAB '/t'
#define MAX 50
void pus (long int symbol);
long int pop ();
void infix_to_postfix ();
long int eval_post ();
long priority(char symbol);
int isEmpty ();
int white_space ();
char infix [MAX],postfix[MAX];
long int stack [MAX];
int top;
main ()
{
long int value;
top =1;
printf("Enter infix : ");
gets(infix);
ingix_to_postfix();
printf("postfix : %s/n",postfix);
value =eval_post ();
 printf("")


}