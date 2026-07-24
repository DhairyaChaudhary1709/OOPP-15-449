#include <bits/stdc++.h>
using namespace std;

int main() {
	int bal=10000;
	int ch;
	cin>>ch;
	switch(ch){
	    case 1:
	    cout<<"Balance "<<bal;
	    break;
	    
	    case 2:
	    int wid;
	    cin>>wid;
	    if(wid<=bal)
	{ 
		bal=bal-wid;
	    cout<<"Withdrawl amt "<<wid<<" balance "<<bal;
	}
	    else
	    cout<<"insufficient bal";
	    break;
	    
	    case 3:
	    int dep;
	    cin>>dep;
	    bal=bal+dep;
	    cout<<"balance is "<<bal;
	    break;
	}
	    
	return 0;    

}
