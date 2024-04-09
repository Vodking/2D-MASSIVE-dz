#include<iostream>
#include<cstdlib>
/*
void FillDynArr(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}
void PrDynArr(int*& arr, int size);
void CrDynArr(int*& arr, int &size);
void DelDynArr(int*& arr);
void AddToEnd(int*& arr, int& size, int element);
void DelElToInd(int*& arr, int& size, int index);

void AddElToInd(int*& arr, int &size, int element, int index);
int main()
{
	
	setlocale(LC_ALL, "ru");
	srand(time(NULL)); 
	//Динамические массивы

	int size = 10;
	int* arr;
	int element = 20;
	int index = 4;

	CrDynArr(arr, size);
	FillDynArr(arr, size);
	PrDynArr(arr, size);
	AddToEnd(arr, size, element);
	element = 87;
	PrDynArr(arr, size);
	AddElToInd(arr, size, element, index);
	PrDynArr(arr, size);
	DelElToInd(arr, size, 4);
	PrDynArr(arr, size);
	DelDynArr(arr);
	return 0;
}

void PrDynArr(int*& arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

void CrDynArr(int*& arr, int &size)
{
	arr = new int[size];
}

void DelDynArr(int*& arr)
{
	delete[] arr;
}

void AddToEnd(int*& arr, int& size, int element)
{
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	DelDynArr(arr);
	size++;
	CrDynArr(arr, size);
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = temp[i];
	}
	arr[size - 1] = element;
	DelDynArr(temp);
}

void DelElToInd(int*& arr, int& size,int index)
{
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	DelDynArr(arr);
	size--;
	CrDynArr(arr, size);

	for (int i = 0, j = 0; i < size, j < size; i++, j++)
	{
		if(index - 1 == i) 
		{
			i++;
			arr[j] = temp[i];
		}
		else
		{
			arr[j] = temp[i];
		}
	}
	DelDynArr(temp);
}

void AddElToInd(int*& arr, int &size, int element, int index)
{
	int* temp = new int[size];
	bool help = false;
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	DelDynArr(arr);
	size++;
	CrDynArr(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (index-1 == i && !help)
		{
			arr[i] = element;
			i--;
			help = true;
		}
		else
		{
			if (help)
			{
				arr[i+1] = temp[i];
			}
			else
			{
				arr[i] = temp[i];
			}
			

		}
	}
	DelDynArr(temp);
}

*/
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	//Çàäà÷à 1
	const int row = 5;
	const int col = 5;
	int arr[row][col];
	int num;
	cout << "Ââåäèòå ÷èñëî: \n";
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
	//Çàäà÷à 2
	cout << "Ââåäèòå ÷èñëî: \n";
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
