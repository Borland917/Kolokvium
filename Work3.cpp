#include <stdio.h>
#include <Windows.h>

int main(void)
{
	SetConsoleOutputCP(1251);
	int day;
	printf("day:");
	scanf("%d", &day);

	if (day = 1)
	{
		printf("Погано");
	}
	else if (day = 2)
	{
		printf("Незадовільно");
	}
	else if (day = 3)
	{
		printf("Задовівльно");
	}
	else if (day = 4)
	{
		printf("Добре");
	}
	else if (day = 5)
	{
		printf("Відмінно");
	}
	else
	{
		printf("Помилка");
	}
}
