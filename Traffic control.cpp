#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	start:
	for(int i=10; i>=0; i--){
		system("cls");
		cout<<" ---------"<<endl;
		cout<<" | Stop! |"<<endl;
		cout<<" ---------"<<endl;
		cout<<"     "<<i;
		
		if(i==3){
			system("cls");
			cout<<" --------------"<<endl;
			cout<<" | Get Ready! |"<<endl;
			cout<<" --------------"<<endl;
			i--;
		}
		
		Sleep(1600);
	}
	
	for(int i=10; i>=0; i--){
		system("cls");
		cout<<" -------"<<endl;
		cout<<" | Go! |"<<endl;
		cout<<" -------"<<endl;
		cout<<"    "<<i;
		
		Sleep(1600);
	}
	goto start;
}