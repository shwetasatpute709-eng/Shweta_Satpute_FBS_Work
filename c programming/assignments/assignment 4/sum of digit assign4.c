void main()
{
	int num,sum=0,rem,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	printf("sum of digit of %d %d ",num,sum);
}