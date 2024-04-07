#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	//Задача 1
	const int row = 5;
	const int col = 5;
	int arr[row][col];
	int num;
	cout << "Введите число: \n";
	cin >> num;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = num;
			}
			else
			{
				num *= 2;
				arr[i][j] = num;
			}
			
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n\n\n";
	//Задача 2
	cout << "Введите число: \n";
	cin >> num;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = num;
			}
			else
			{
				num += 1;
				arr[i][j] = num;
			}

		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}