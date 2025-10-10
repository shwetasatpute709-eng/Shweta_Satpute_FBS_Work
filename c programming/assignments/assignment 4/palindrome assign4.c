void main()
{
	int num,temp,rev=0,rem;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==num)
	{
		printf("%d is palindrome",num);
		
	}
	else
	{
		printf("%d is not palindrome",num);
	}
}