#include <stdio.h>
#include <stdlib.h>

void convertArabicToRoman(int num)
{
	while (num > 0)
	{
		if (num >= 90) 
		{
			printf("XC");
			num = num - 90;
			continue;
		}
		if (num >= 50) 
		{
			printf("L");
			num = num - 50;
			continue;
		}
		if (num >= 40) 
		{
			printf("XL");
			num = num - 40;
			continue;
		}
		if (num >= 10) 
		{
			printf("X");
			num = num - 10;
			continue;
		}
		if (num >= 9) 
		{
			printf("IX");
			num = num - 9;
			continue;
		}
		if (num >= 5) 
		{
			printf("V");
			num = num - 5;
			continue;
		}
		if (num >= 4) 
		{
			printf("IV");
			num = num - 4;
			continue;
		}
		if (num >= 1) 
		{
			printf("I");
			num = num - 1;
			continue;
		}
	}
}

int main()
{
	int inputNum;
	printf_s("Arabic to Roman Numeral Converter\n\n");
	printf_s("Please specify number:\n\n");
	scanf_s("%d", &inputNum);

	if (inputNum > 99)
	{
		printf("Number exceeds program limitations, conversion only possible up to 99.");
	}
	else
	{
		convertArabicToRoman(inputNum);
	}

	return 0;
}