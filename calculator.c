#include <stdio.h>
#include <math.h>

int main()
{
	
	while(1)
	{
	printf("Menu:\n");

	printf("1.Add\n");
	
	printf("2.Subtract\n");
	
	printf("3.Multiply\n");
	
	printf("4.Divide\n");
	
	printf("5.Square Root\n");

	printf("0.Exit\n");

	int input;
	
	printf("Select An Option: ");

	scanf("%d",&input);

	if(input==1)
	{
		printf("You've Chosen Add\n");
		
		double num1,num2,sum;
		
		printf("Enter 1st Number: ");
		
		scanf("%lf",&num1);
		
		printf("Enter 2nd Number: ");
		
		scanf("%lf",&num2);
		
		sum=num1+num2;
		
		printf("The Sum Of Two Numbers Entered Is:%f\n",sum);

	}else if(input==2)
	{
		printf("You've Chosen Subtract(Enter The Larger Number as 1st Number for non negative results)\n");

		double num1,num2,difference;

		printf("Enter 1st Number: ");

		scanf("%lf",&num1);

		printf("Enter 2nd Number: ");

		scanf("%lf",&num2);

		difference=num1-num2;

		printf("The Difference Between Two Numbers Entered Is:%f\n",difference);

	}else if(input==3)
	{

		printf("You've Chosen Multiplication\n");

		double num1,num2,multiply;

		printf("Enter 1st Number: ");

		scanf("%lf",&num1);

		printf("Enter 2nd Number: ");

		scanf("%lf",&num2);

		multiply=num1*num2;

		printf("The Product Of Two Numbers Entered Is:%f\n",multiply);
	}else if(input==4)
	{
	
		printf("You've Chosen Division\n");

		double num1,num2,divide;

		printf("Enter Numerator: ");

		scanf("%lf",&num1);

		printf("Enter Denominator: ");

		scanf("%lf",&num2);

		divide=num1/num2;
		
		if(num2!=0)
		{
			printf("%f divided by %f is %f \n",num1,num2,divide);
		}
		
		if(num2==0)
		{
			printf("Cannot Divide By Zero\n");
		}
	}else if(input==5)
	{

		printf("You've Chosen Square Root\n");

		double num,squareRoot;
		
		printf("Enter A Number: ");

		scanf("%lf",&num);

		squareRoot=sqrt(num);

		printf("Square Root Of %f Is %f\n",num,squareRoot);
	}else if(input==0)
	{
		printf("Exiting The Calculator....\n");
		break;
	}


	else{
		printf("Invalid Input");
}
}

	return 0;
}
