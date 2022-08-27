main()
{
	int i=1,n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+(2*i-1);
		i++;
	}
	printf("sum is %d",sum);
	getch();
}
