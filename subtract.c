#include<stdio.h>
#include<math.h>

int main()
{
        float num1=30;
        float num2=13;
        float diff=0;
        diff=subtract(num1,num2);
        printf("the difference is:%.2f",&diff);
        return 0;

}
int subtract(float num1,float num2)
{
	float c=0;
	c=num1-num2;
	return(c);
}

