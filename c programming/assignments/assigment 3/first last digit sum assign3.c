void main()
{
	int num=7532;
	int first,last;
	last=num%10;
	first=num;
	while(first>=10)
	{
		first=first/10;
	}
	printf("sum of first and last digit of %d is %d",num,first+last);
}