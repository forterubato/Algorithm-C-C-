#include<iostream>
using namespace std;

void bubbleSort(int arr[],int len) { //��������Ϊ�����βΣ�����©��[]��֮ǰ����
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
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
	int arr[] = { 0,12,323,53,63,24,64,84,23,34 };
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "����ǰ" << endl;
	printArray(arr, len);
	cout << endl;
	bubbleSort(arr, len);
	cout << "�����" << endl;
	printArray(arr, len);
}
int main() {
	cout << "BubbleSort:" << endl;
	cout << endl;
	test();
	system("pause");
	return 0;
}