#include <iostream>
using namespace std;
int main() {
int L,R,K,count=0;
cin >> L>>R>>K;
	for(int i =L;i<=R;i++){
		if(L%K==0){
		count++;
		}
	}
	cout<<count;
	}