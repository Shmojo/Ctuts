#include <iostream>

using namespace std;

int main()
{
  int k; //delcare a variable 'k' that holds integer values
  int ages[5]={15,24,54,33,120};

	for (k=0; k<5; k++) { //set 'k' to 0 execute while 'k' is less than 5
		cout << ages[k] << endl;
	}

  return 0;
}
