void main()
{
	int a=15;
	int b=15;
	int c=5;
	if(a==b && b==c)
	{
		printf(" equilateral triangle");
	}
	else if (a==b || b==c || a==c)
	{
		printf("isosceles triangles");
	}
	else 
	{
        printf("scalene triangles");
		}
}