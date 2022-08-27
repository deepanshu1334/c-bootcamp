main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d and b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping value of a and b is %d and %d",a,b);
	getch();
}
