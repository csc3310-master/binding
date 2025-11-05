#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main(int argc, char* argv[]){
	int input;
	double data[] = {1.1, 3.4, -0.5, 3};
	cout << "Number: ";
	cin >> input;

	const int CONST1 = input;
	constexpr int CONST2 = input;

	constexpr int SIZE = sizeof(data) / sizeof(data[0]);

	for (auto i = 0; i < SIZE; i++)
		cout << data[i] << ", ";
	cout << endl; 
	// --------

	vector<int> v = {1,4,3,9};
//	vector<double> v = {1.1,4.2,3.9,9.01};
//	vector<char*> v = {"hi", "bye", "Yo!", "Jam"};
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;
}
