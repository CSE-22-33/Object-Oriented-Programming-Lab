#include<iostream>
using namespace std;
int main(){
	for(int i=1; i<=15; i++){
		for(int j=15; j>=i; j--){
			cout << " ";
		}
		for(int k=1; k<2*i; k++){
			cout << "*";
		}
		for(int l=15; l>=i; l--){
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}