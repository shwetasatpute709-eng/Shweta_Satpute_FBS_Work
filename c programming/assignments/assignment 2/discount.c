void main()
{
	int price =745;
	char student='n';
	if(student=='y')
	{
		if(price>500)
		{
			printf("discount 20%%");
		}
		else {
			printf("discount 10%%");
		}
	}
	else{
		if(price>600)
		{
			printf("discount 15%%");
		}
		else {
			printf("no discount");
		}
	}
}