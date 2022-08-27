main()
{
	int i,n;
	int sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	getch();
}
