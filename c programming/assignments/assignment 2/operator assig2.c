void main()
{
	int a=20;
	int b=5;
	char op='+';
	if(op=='+')
	{
		printf("addition %d",a+b);
	}
	else if (op=='-')
	{
		printf("substraction %d",a-b);
	}
	else if(op=='/')
	{
	printf("division %d",a/b);
    }
    else if(op=='%')
    {
    	printf("module %d",a%b);
	}
	else if(op=='*')
	{
		printf("multiplication %d",a*b);
	}
	else 
	{
		printf("invalid operator");
	}
}