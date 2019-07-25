#include "templates.h"

using namespace std;
void mytest() {
	int a[10] = { 100,10,40,20,60,80,5,50,30,25 };
	cout << "\nValue in the int array before sorting ..." << endl;
	copy(a, a + 10, ostream_iterator<int>(cout, "\t"));

	::sort<int,10>(a);

	cout << "\nValue in the int array after sorting ..." << endl;
	copy(a, a + 10, ostream_iterator<int>(cout, "\t"));

	double b[5] = {85.6, 76.13, 0.012, 2.56};
	cout << "\nValue in the double array before sorting ..." << endl;
	copy(b, b + 5, ostream_iterator<double>(cout, "\t"));

	::sort<double, 5>(b);

	cout << "\nValue in the double array after sorting ..." << endl;
	copy(b, b + 5, ostream_iterator<double>(cout, "\t"));

}
