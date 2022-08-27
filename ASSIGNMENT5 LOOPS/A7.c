main()
{
	int i,m,n,r=0;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		m=n%10;
		r=r*10+m;
		n=n/10;
	}
	printf("reverse of a number is %d",r);
	getch();
}
