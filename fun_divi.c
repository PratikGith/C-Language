#include<stdio.h>
float div(float,float);
void main()
{
	float ret,n1,n2;
	printf("Enter the First number :");
	scanf("%f",&n1);
	printf("Enter the Second number :");
	scanf("%f",&n2);

	ret = div(n1,n2);
	printf("Division = %.2f\n",ret);

}
float div (float num1, float num2)
{
	float a;
	a = num2 / num1;
	return a;
}
