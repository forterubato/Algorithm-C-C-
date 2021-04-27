#include<iostream>
#include<ctime>
using namespace std;

void selectSort(int arr[], int len) {
	for (int i = 0; i < len; ++i) 
	{
		int min_index = i;
		for (int j = i + 1; j < len; ++j)
		{   
			if (arr[min_index] > arr[j])
			{
				min_index = j;
			}
		}
		if (min_index != i) 
		{
			int temp = arr[min_index];
			arr[min_index] = arr[i];
			arr[i] = temp;
		}
	}
}
int* creatArray(int len) {
	srand((unsigned int)time(NULL)); //随机数种子
	int * arr = new int[len]; //动态数组，可以将arr看作数组首地址
	for (int i = 0; i < len; ++i)
	{
		int m = rand() % 100 + 1;
		arr[i] = m;
	}
	return arr;
}
void printArray(int arr[], int len) {
	
	cout << "[";
	for (int i = 0; i < len; ++i)
	{
		if (i != len - 1)
		{
			cout << arr[i] << ",";
		}
		else
		{
			cout << arr[i] << "]" << endl;
		}
	}

}
void test() {
	int len = 10;
	int* arr = creatArray(len);
	cout << "before:" << endl;
	printArray(arr, len);
	cout << endl;
	selectSort(arr, len);
	cout << "after:" << endl;
	printArray(arr, len);
	delete[] arr;
}
int main() {
	test();
	system("pause");
	return 0;
}
