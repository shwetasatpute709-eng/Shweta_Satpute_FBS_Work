void main()
{
	int num=145,temp=num,sum=0,rem,i,fact;
	while(temp>0)
	rem=temp%10;
		fact=1;
		for(i=1;i<=rem;i++)
	{
	fact=fact*i;	
	}
	sum=sum+fact;
	temp=temp/10;
}
if(sum == num)

	printf("%d strong no",num);

else

	printf("%d is not strong number",num);
}