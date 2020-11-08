#include <iostream>
//#include <>

using namespace std;

struct num {
	long int Num[2] = { 0,0 };
	long int sum[2] = { 0,0 };


};

void check(long int, long int, long int, long int);

int main() {

	num num;

	check(num.sum[0], num.Num[0], num.Num[1], num.Num[1]);

}
void check(long int x, long int y, long int z, long int sum) {
	int diff[2] = { 0,0 };
	int k = 0;
	int NUM[2] = { 0,0 };

	while (x != 1) {
		cout << "ENTER NUMBER 1 : ";
		cin >> y;
		cout << "ENTER NUMBER 2 : ";
		cin >> z;
		NUM[0] = z;
		NUM[1] = y;
		for (int i = 0; i < 2; ) {

			diff[i] = NUM[0] + NUM[1];
			if (NUM[0] > NUM[1]) {

				NUM[1] = NUM[1] * -1;
			}
			if (NUM[1] > NUM[0]) {
				NUM[0] = NUM[0] * -1;
			}
			++i;

		}
		
		if ((y > 0 && z > 0) && ((y - z) != 0)) {
			x = 1;
		}
		else if ((y < 0 || z < 0) || z == y|| (z*y)==0) {
			cout << endl;
			cout << "!! Please try again !! \n";
			cout << endl;

		}


	}
	
	while (diff[0] != 0)
	{
		
		
		diff[0] = diff[0] / 10;
		k = k + 1;
		

	}
	
	if (z > y)
	{
		sum = ((2 * y * (diff[1])) + ((diff[1]-1)*diff[1] * k)) / 2;
		cout << "Summary : " << sum;
	}
	else if (y > z)
	{
		sum = ((2 * z * (diff[1])) + ((diff[1]-1)*diff[1] * k)) / 2;
		cout << "Summary : " << sum;
	}
	else {}

}
