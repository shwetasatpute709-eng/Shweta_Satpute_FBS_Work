void main()
{
	int num=11;
	if(num%3==0&&num%5==0)
	{
		printf("number is divisible by both 3 and 5");
	}
	else if(num%3==0)
	{
		printf("number is divisible by 3");
	}
	else if(num% 5==0)
	{
		printf("number is divisible by 5");
	}
	else
	{
		printf("number is not divisible by 3 or 5");
	}
}