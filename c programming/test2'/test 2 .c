void main()
{
	int unit=45;
	int bill;
	if(unit<=50)
	{
		bill=30*unit;
		printf("electricity bill is %d",bill);
		}else if(unit<=150)
		{
			bill=40*unit;
			printf("electric bill is %d",bill);
		}
		else
		{
			bill=50*unit;
			printf("electricity bill is %d",bill);
		}
	}