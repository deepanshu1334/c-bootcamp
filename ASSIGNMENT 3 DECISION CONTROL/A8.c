main()
{
	int a,b,c;
	printf("enter the number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("a is greatest ");
		else 
		printf("c is greatest");
	}
	else
	{
		if(b>c)
		printf(" b is greartest");
		else
		printf("c is greatest");
	}
}
