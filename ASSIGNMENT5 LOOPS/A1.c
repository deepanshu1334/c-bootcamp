main()
{
	int i,n,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i*i;
		i++;
	}
	printf("sum of square of first %d",sum);
	getch();
	
}
