#include <stdio.h>

int main() 
{
	int numberA, numberB, maxNumber;
	printf("����A�Է� : ");
	scanf("%d", &numberA);
	printf("����B�Է� : ");
	scanf("%d", &numberB);
	
	if(numberA > numberB) 
	{
		maxNumber = numberA;
	} 
	else 
	{
		maxNumber = numberB;
	}
	printf("ū ���ڴ� %d �Դϴ�.", maxNumber);
	
	return 0;
}
