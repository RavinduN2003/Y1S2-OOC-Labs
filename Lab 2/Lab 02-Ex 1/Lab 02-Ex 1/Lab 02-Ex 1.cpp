
#include <iostream>

using namespace std;

int searchKey(int num,int numbers[]);
int findMax(int num,int numbers[]);

int main()
{
	int numbers[10] = { 0 };

	int i,n;

	cout << "Enter 10 Numbers : "<<endl;

	for (i = 0; i < 10; ++i) {

		cin >> numbers[i];
	}
	cout << endl << "Enter the desired number : ";
	cin >> n;

	int answer = searchKey(n,numbers);
	int maximum = findMax(n, numbers);

	cout << "The Index is : " << answer << endl;
	cout << "The Maximum Value is : " << maximum;

	return 0;
}
int searchKey(int num, int numbers[]) {

	int i;

	for (i = 0; i < 10; ++i) {

		if (num == numbers[i]) {

			return i;
		}

	}
	cout << "Value not Found!";

	return 1;

}
int findMax(int num, int numbers[]) {

	int max = 0, i;

	for (i = 0; i < 10; ++i) {

		if (numbers[i] > max)

			max = numbers[i];
	}
	return max;
}