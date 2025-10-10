void main()
{
	int num,rev=0,rem,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	printf("reverse of %d %d",num,rev);
}