#include<iostream>
using namespace std;

int main(){
	
	int time;
	cout<<"What time is it? ";
	cin>>time;
	
	
	if(time>=00 && time<=11){
		cout << "Good Mornign.";
		}
	else if(time == 12){
		cout << "It's noon";
		}
	else if(time>=13 && time<=18){
		cout << "Good evenign.";
		}
	else if(time>=19 && time<=23){
		cout << "Good Night.";
		}
	else if(time == 24){
		cout << "Mid Night .";
		}
	return 0;	
	}
	
