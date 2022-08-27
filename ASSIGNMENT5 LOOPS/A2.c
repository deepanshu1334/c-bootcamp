main()
{
	int i=1,sum=0,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i*i*i;
		i++;
	}
	printf("%d\n",sum);
	getch();
}
