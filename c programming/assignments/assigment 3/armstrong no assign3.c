void main()
{
	int num=153;
	int temp=num;
	int sum=0,digit;
	while(temp>0)
	{
		digit=temp %10;
		sum=sum+(digit*digit*digit);
		temp=temp /10;
	}
	if(sum==num)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}