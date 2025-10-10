void main()
{
	int num=12;
	int sum=0;
	int i;
	for(i=1;i<num;i++)
	{
		if(num% i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("%d is perfect no",num);
	}
	else
	{
		printf("%d is not a perfect no",num);
	}
}