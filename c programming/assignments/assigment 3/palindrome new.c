void main()
{
	int num=221;
	int rev=0;
	int temp;
	temp=num;
	rev =rev*10+(temp% 10);
	temp=temp/10;
	rev=rev*10+(temp%10);
	temp=temp/10;
	rev=rev*10+(temp%10);
	if(num==rev)
	{
		printf("palindrome");
	}
	else {
		printf("not palindrome");
	}
}