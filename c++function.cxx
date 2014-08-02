#include <iostream>

using namespace std;

void fact(int x); //notice void, this means the function will not return a value

int main(){
  int f;
  cout << "Please input a number to be evaluated " << endl;
  cout << "WARNING this program can't compute a value greater than 12" << endl;
  cin >> f;
  cout << "The factorial of " << f << " is ";

  fact(f); //sends the value of 'f' to the function fact

  return 0;
}

void fact (int x){ //definition
//'x' now holds the value of 'f'
  int fact=1; //local variable fact must be assigned 1 to avoid garbabe

  if (x==0) { //by definition the factorial of 0 is 1
    cout<<"1"<<endl;
    system("pause"); //pause program to see output
    return; //returns control to main
  }

  else if (x > 12){ //if 'x' is greater than 12 return control to main
    return; //notice no value or variable just return, this is because of void
  }

  while (x>=1){ //while 'x' is greater than or equal to 1 continue loop
    fact=fact*x; //fact equals what is was times 'x'
    x--; //after every loop decrease 'x' by 1
  }

  cout << fact; //print fact and return control to main
  return;
}
