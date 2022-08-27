main()
{
	int a,b,c;
	
	printf("enter the number");
	scanf("%d%d%d",&a,&b,&c);
	if (b*b-4*a*c>0)
	printf("roots are real and unequal");
	else if(b*b-4*a*c==0)
	printf("roots are real and equal");
	else 
	printf("roots are inmaginary");
	getch();
}
