#include "myalgorithm.h"
using namespace std;

void example_myalgorithm() {
	MyAlgorithm<int, 10> algorithm1;

	array<int, 10> a = { 10,5,15,20,25,18,1,100,90,18 };
	cout << "\nArry values before sorting..." << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;

	algorithm1.sort(a);

	cout << "\nArry values after sorting..." << endl;
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
	cout << endl;

	MyAlgorithm<double, 6> algorithm2;
	double d[] = { 100.0,20.5,200.5,399.8,186.78,1.1 };

	cout << "\nArray values before sorting..." << endl;
	copy(d, d + 6, ostream_iterator<double>(cout, "\t"));
	cout << endl;

	algorithm2.sort(d);// has issue. don't know why

	cout << "\nArry values after sorting..." << endl;
	copy(d, d + 6, ostream_iterator<double>(cout, "\t"));
	cout << endl;
}