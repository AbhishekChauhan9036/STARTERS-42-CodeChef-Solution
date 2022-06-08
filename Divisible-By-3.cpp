#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int32_t main(){
	int Bhosdike;
	cin>>Bhosdike;
	while(Bhosdike--){
        int ___OOOO,_PPPP,____KKKK=0,_,_One__=0,_two__=0;
        cin>>___OOOO>>_PPPP;

        if(___OOOO%3==0 or _PPPP%3==0){
            ____KKKK=0;
        }else if((abs(___OOOO-_PPPP)%3==0)){
            ____KKKK=1;
        }else{
            ____KKKK=2;
        }
        cout<<____KKKK<<"\n";  
	}
	return 0;
}