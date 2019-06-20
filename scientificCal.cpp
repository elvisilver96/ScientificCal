#include<stdio.h>
#include<math.h>
#define PI 3.142

float add (float no1, float no2)

{

	float result;
	result=no1+no2;
	return result;
}
float sub (float no1, float no2)
{

	float result;
	result=no1-no2;
	return result;
}
float mul (float no1, float no2)
{
	float result;
	result=no1*no2;
	return result;
}
float div (float no1, float no2)
{
	float result;
	result=no1/no2;
}
float sin (float no, float val)
{
	float result;
	val=PI/180;
	result=sin(no*val);
	return result;
}
float cos (float no, float val)
{
	float result;
	val=PI/180;
	result=cos(no*val);
	return result;
}
float tan (float no, float val)
{
	float result;
	val=PI/180;
	result=tan(no*val);
	return result;
}


int main()
{

	float result;
	int opt;
	menu:
		
	printf("=======================================================\n");
	printf("         1. Basic Math Operation of n number(+,-,*,/,) \n");
	printf("         2. Trigonometry      			  \n");
	printf("         3. Logarithm laws      		  \n");
	printf("         4. Explonential Laws     	      \n");
	printf("         5. Power Of n      			  \n");
	printf("         6. Square Root Of n     		  \n");
	printf("         7. Exit             			  \n");
	printf("======================================================\n");
	
	printf("\nPlease enter your selection: ");
	scanf("%d",&opt);
	
	
	if(opt==1)
	{
		float no1,no2,val;
		int opt;
		printf("\n       1. Addition			          \n");
		printf("         2. Substraction     			  \n");
		printf("         3. Multiplication     			  \n");
		printf("         4. Divide             			  \n");	
		
		printf("\nPlease enter your selection: ");
		scanf("%d",&opt);

		if(opt==1)
		{
			printf("Enter no1 : ");
			scanf("%f",&no1);
			printf("Enter no2 : ");
			scanf("%f",&no2);
			result=add(no1,no2);
			printf("Answer is %.2f\n\n",result);
			goto menu;
		}
		if(opt==2)
		{
			printf("Enter no1 : ");
			scanf("%f",&no1);
			printf("Enter no2 : ");
			scanf("%f",&no2);
			result=sub(no1,no2);
			printf("Answer is %.2f\n\n",result);
			goto menu;
		}
		if(opt==3)
		{
			printf("Enter no1 : ");
			scanf("%f",&no1);
			printf("Enter no2 : ");
			scanf("%f",&no2);
			result=mul(no1,no2);
			printf("Answer is %.2f\n\n",result);
			goto menu;
		}
		if(opt==4)
		{
			printf("Enter no1 : ");
			scanf("%f",&no1);
			printf("Enter no2 : ");
			scanf("%f",&no2);
			result=div(no1,no2);
			printf("Answer is %.2f\n\n",result);
			goto menu;
		}
	}
	
	if(opt==2)
	{
		float no,val;
		int opt;
		printf("==============================================\n");
		printf("\n        1. Sin			          		  \n");
		printf("          2. Cos    			 			  \n");
		printf("          3. Tan     					      \n");	
		printf("==============================================\n");
		printf("\nPlease enter your selection: ");
		scanf("%d",&opt);

		if(opt==1)
		{
			printf("Enter number : ");
			scanf("%f",&no);
			val=PI/180;
			result=sin(no,val);
			printf("Answer is %.2f\n\n",result);
			goto menu;
		}
		if(opt==2)
		{
			printf("Enter number : ");
			scanf("%f",&no);
			val=PI/180;
			result=cos(no,val);
			printf("Answer is %.2f\n\n",result);
			goto menu;
		}
		if(opt==3)
		{
			printf("Enter number : ");
			scanf("%f",&no);
			val=PI/180;
			result=tan(no,val);
			printf("Answer is %.2f\n\n",result);
			goto menu;
		}
	} 
	
	if(opt==3)
	{
		printf("\n       1. prodcut rule	          \n");
		printf("         2. quotient rule    		  \n");
		printf("         3. power rule     			  \n");		
		printf("         4. change of base rule       \n");	
		printf("		 5. return to menu program    \n");
		printf("\nPlease enter your selection: ");
		scanf("%d",&opt);
		
		if(opt==1)
		{
			float result,no1,no2;
			printf("Please enter a number from keyboard to find it's log value(where the base is a) \n");
			scanf("log %f",&no1);
			printf("Please enter a number from keyboard to find it's log value(where the base is b) \n");
			scanf("%f", &no2);
			result = log10(no1)+log10(no2);
			printf("answer is %.2f\n", result);
			goto menu;
		}
		if(opt==2)
		{
			float result,no1,no2;
			printf("Please enter a number from keyboard to find it's log value(where the base is a) \n");
			scanf("log %f",&no1);
			printf("Please enter a number from keyboard to find it's log value(where the base is b) \n");
			scanf("%f", &no2);
			result = log10(no1)-log10(no2);
			printf("answer is %.2f\n", result);
			goto menu;
		}
		if(opt==3)
		{
		}
		if(opt==4)
		{
		}
		if(opt==5)
		{
			goto menu;
		}
	}
	
	if(opt==4)
	{
		
	}
	if(opt==5)
	{
		int exponent;
   		float base, result = 1;

    	cout << "Enter base and exponent respectively:  ";
    	cin >> base >> exponent;

    	cout << base << "^" << exponent << " = ";

    	while (exponent != 0) 
		{
    	    result *= base;
        	--exponent;
    	}
		cout << result;
    	return 0;
	}
	
	if(opt==6)
	{	
		float sq,n;
		cout<<"Enter any number:";
		cin>>n;
		sq=sqrt(n);
		cout<<"Square root of "<<n<<" is "<<sq;
		return 0
	}
	
	if(opt==7)
	{
		return 0;
	}
		return 0;
	}
}
