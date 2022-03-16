#include <stdio.h>

int main() 
{
	int numberA, numberB, maxNumber;
	printf("숫자A입력 : ");
	scanf("%d", &numberA);
	printf("숫자B입력 : ");
	scanf("%d", &numberB);
	
	if(numberA > numberB) 
	{
		maxNumber = numberA;
	} 
	else 
	{
		maxNumber = numberB;
	}
	printf("큰 숫자는 %d 입니다.", maxNumber);
	
	return 0;
}
