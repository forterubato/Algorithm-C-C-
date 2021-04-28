#include<iostream>
using namespace std;
void insertionSort(int arr[], int len) {
	for (int i = 1; i < len; ++i)
	{
		int temp = arr[i];
		for (int j = i-1; j >-1; --j)
		{
			if (arr[i] >= arr[j])
			{
				for (int k = i - 1; k > j; --k)
				{
					arr[k + 1] = arr[k];
				}
				arr[j + 1] = temp;
				break;
			}
			else if(j==0)
			{
				for (int m = i - 1; m > -1; --m)
				{
					arr[m + 1] = arr[m];
				}
				arr[0] = temp;
			}
		}
	}
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
	int arr[] = { 18,25,3,25,43,13,363,100,87,2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "before:" << endl;
	printArray(arr, len);
	cout << endl;
	insertionSort(arr, len);
	cout << "after:" << endl;
	printArray(arr, len);
}
int main() {
	test();
	system("pause");
	return 0;
}
