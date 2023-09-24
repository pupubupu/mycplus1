#include <iostream>
#include "sort.h"

using namespace std;

int main()
{
	int arr[] = { 45, 21, 64, 88, 43, 66, 17, 37 };
	cout << "ÅÅÐòÇ°£º" << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "ÅÅÐòºó£º" << endl;
	sort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << " ";
	}
}