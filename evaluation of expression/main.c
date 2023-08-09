#include <stdio.h>
#include <stdlib.h>

int top=-1,stack[100];
main()
{
    char x[100],op;
    int i,ch1,ch2,res,a;
    void push(int);
    int pop();
    int eval(char,int,int);
    printf("Enter a postfix expression:");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        op=x[i];
        if(op>='0'&&op<='x')
            push('0');
        else
            ch2=pop();
            ch1=pop();
            res=eval(op,ch1,ch2);
            push(res);
    }
}
void push(int n)
{
    top++;
    stack[top]=n;
}
int pop()
{
    int res;
    res=stack[top];
    top--;
    return res;
}
int eval(char op,int ch1,int ch2)
{
    switch(op)
    {
        case'+':
        return(ch1+ch2);
        case'-':
        return (ch1-ch2);
        case'*':
        return(ch1*ch2);
        case'/':
        return(ch1/ch2);
    }
}
