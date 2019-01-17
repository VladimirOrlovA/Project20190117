#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

#define size 10

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson 2019 01 17


void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	printf("Двоичный поиск в массиве\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int N = 10;
	int A[N], i, j, c;
	int L = 0, R = N - 1, m, A[N], x, flag = 0;

	for (i = 0; i < N; i++)
	{
		A[i] = 1 + rand() % 15;
	}

	// сортировка методом пузырка

	for (i = 0; i < N - 1; i++)
		for (j = N - 2; j >= i; j--)
			if (A[j] > A[j + 1])
			{
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;
			}


	printf("Введите искомый элемент \n");
	scanf_s("%d", &x);

	while (L <= R)
	{
		m = (L + R) / 2;
		if (A[m] == x)
		{
			flag = 1;
			break;
		}

		if (x < A[m]) R = m - 1;
		else L = m + 1;

	}

	if (flag) printf("Нашли: A[%d]=%d", m, A[m]);
	else printf("Такого элемента нет");
}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	printf("Метод выбора\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int N = 10;
	int i, j, A[N], nMin, c;

	for (i = 0; i < N; i++)
	{
		A[i] = 1 + rand() % 15;
	}

	// сортировка методом пузырка

	for (i = 0; i < N - 1; i++)
		for (j = N - 2; j >= i; j--)
			if (A[j] > A[j + 1])
			{
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;
			}


	for (i = 0; i < N - 1; i++)
	{
		nMin = i;
		for (j = i + 1; j < N; j++)
			if (A[j] > A[nMin]) nMin = j;
		if (nMin != i)
		{
			c = A[i];
			A[i] = A[nMin];
			A[nMin] = c;
		}

		printf("\n  : \n\n");

		for (i = 0; i < N; i++) printf("A[%d]=%d \n", i, A[i]);

	}
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	printf("\n Стандартный ввод и вывод --- Ввод с клавиатуры \n\n");
	SetConsoleTextAttribute(hConsole, 7);

	const int M = 5;
	const int N = 4;
	int i, j, A[M][N];
	

	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
		{
			printf("A[%d][%d]=%d \n", i, j);
			scanf_s("%d", &A[i][j]);
		}

	printf("Матрица A \n");

	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
		{
			printf("4%d \n", A[i][j]);
			printf("\n");
		}

}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);



}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task11()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task12()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (12) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;
		case 11: {Task11(); } break;
		case 12: {Task12(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}