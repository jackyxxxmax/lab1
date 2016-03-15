#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Please enter an int number:"<<endl;
    cin>>x;
    cout<<x<<" ";
    if(x==1){
        cout<<1;
    }
    while(x!=1){
        if((x%2)!=0){
	    x=3*x+1;
	    cout<<x<<" ";
	}
	else{
	    x=x/2;
	    cout<<x<<" ";
	}
    }
    cout<<endl;
    return 0;
}
