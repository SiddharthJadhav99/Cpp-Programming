#include<iostream>
using namespace std;
int main () {
  int x, count=0, earning=0, flag=0;
  while(cin>>x) {
    if(x<=0 || x>120) {
    	flag=1;
		break;	
	}
	count++;
	if(x<17) {
        earning = earning+200;
    }
    else if(x>=17 && x<40) {
        earning = earning + 400;
    }
    else if(x>=40) {
      earning = earning+300;
    }
  }
  if(count>20 && flag!=1)
    cout<<"\nInvalid Input";
  else
    cout<<"\nTotal earning: "<<earning<<" INR";
}