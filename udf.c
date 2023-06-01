#include<stdio.h>
calc()
{
	int n,a,b;
	do
	{   printf("enter your choice =");
		scanf("%d",&n);
		if(n==6)
		{
			printf("exit\n");
		}
		else if(n>6)
		{
			printf("plz enter proper ualue\n");
		}
		else if(n>0 && n<=6)
		{
		 switch(n)
		  {
			case 1:printf("enter ualue A =");
		           scanf("%d",&a);
	               printf("enter ualue B =");
		           scanf("%d",&b);
				   printf("addition of A+B=%d\n",a+b);
				   break;
				   
			case 2:printf("enter ualue A =");
		           scanf("%d",&a);
		           printf("enter ualue B =");
		           scanf("%d",&b);
				   printf("subtraction of A-B=%d\n",a-b);
				   break;
				   	   
			case 3:printf("enter ualue A =");
		           scanf("%d",&a);
		           printf("enter ualue B =");
		           scanf("%d",&b);
				   printf("multiplication of A*B=%d\n",a*b);
				   break;
				   
			case 4:printf("enter ualue A =");
				   scanf("%d",&a);
				   printf("enter ualue B =");
				   scanf("%d",&b);
				   printf("division of A/B=%d\n",a/b);
				   break;
				   
			case 5:printf("enter ualue A =");
				   scanf("%d",&a);
			       printf("enter ualue B =");
				   scanf("%d",&b);
				   printf("module of A%B=%d\n",a%b);
				   break;
				   
			case 6:
				   printf("exit");
				   break;
				   
			default:
			        printf("plz enter proper choice");	   
		  }
	    }
	}while(n!=6);
}
main()
{	    
        printf("press 1 to addition\n");
		printf("press 2 to subtraction\n");
		printf("press 3 to multiplication\n");
		printf("press 4 to division\n");
		printf("press 5 to module\n");
		printf("press 6 to exit\n");
	calc();
}
