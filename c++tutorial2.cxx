#include <iostream>

using namespace std;
int main()
{
int x,y,z;

cin>>x;
cin>>y;
  
  if(x>y)
		{
		  z=x+y;
		  cout<<z;
		}

  else if (x<y)
		{
		  z=x-y;
		  cout<<z;
		}

  else
		{
		  cout<<"x is nor greater or less than y so they must be equal"<<endl;
		}

return 0;
}