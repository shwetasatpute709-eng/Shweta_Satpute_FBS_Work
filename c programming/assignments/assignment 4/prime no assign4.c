void main()
{
	int n=100;
	int num,i,count;
	for(num=1;num<=n;num++)
	{
		count=0;
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf(" %d",num);
		}
	}
}