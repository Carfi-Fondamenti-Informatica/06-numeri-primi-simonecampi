#include <iostream>
	#include "lib.h"
	

	using namespace std;
	

	int main(){
	   int n = 0, i=2;
	        cin>>n;
	if (primo(n,i)==true)
	{
	    cout<<"numero primo"<<endl;
	}
	if (primo(n,i)==false)
	{
	    cout<<"numero non primo"<<endl;
	}
	  
	  return 0;
	}
