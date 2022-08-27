main()
{
	int i=1,n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("sum is %d",sum);
	getch();
}
