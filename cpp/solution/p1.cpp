#include <bits/stdc++.h>
using namespace std;


int main(){
	int row,col;
	cin>>row>>col;

    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=col;j++){
            cout<<"X ";
        }
        cout<<endl;
    }
    cout<<endl;
	for(int i = 1;i<=row;i++){
		for(int j=1;j<=col;j++){
			if(i == 1 || i == row){
				cout<<"X ";
			}else if(j == 1 || j == col){
				cout<<"X ";
			}

			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

}

