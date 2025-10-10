void main()
{
	int n=1000;
	int num,temp,rem,sum;
	for(num=1;num<=n;num++)
	{
		temp=num;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(sum==num)
		{
			printf(" %d",num);
		}
	}
}