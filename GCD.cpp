#include <iostream>
using namespace std;

int main() {

	int m, n;

	cout << "enter 2 numbers : ";
	cin >> m >> n;

	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else if (n > m) {
			n = n - m;
		}
	}
	cout << "GCD is " << m << endl;
	

	return 0;

}

/*

while 9 != 6 [true]

if 9 > 6 [true]

9 = 9 - 6 == [3] 

//////////////////////////
while 3 != 6 [true]

if 3 > 6 (false)

else if 6 > 3 [true]

6 = 6-3 == [3]

/////////////////////////

while ( 3 != 3) [false]

output 
*/
