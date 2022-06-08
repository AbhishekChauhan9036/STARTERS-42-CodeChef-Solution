#include<bits/stdc++.h>
using namespace std;
// #define int long long 
int32_t main(){
	int Bhosdike;
	cin>>Bhosdike;
	while(Bhosdike--){
        int ___OOOO,_PPPP,____KKKK,_,_One__=0,_two__=0;
        cin>>___OOOO;
        int _________Carboncopy[___OOOO];
        for(int ___LLLp=0;___LLLp<___OOOO;___LLLp++){
            cin>>_________Carboncopy[___LLLp];

            if(_________Carboncopy[___LLLp]==1){
                _One__++;
            }else{
                _two__++;
            }
        }


        if(___OOOO%2!=0){
            cout<<-1<<"\n";
        }else{
            if(_One__>_two__){
                cout<<(_One__-_two__)/2<<"\n";
            }else{
                cout<<(_two__-_One__)/2<<"\n";
            }
        }


        
	}
	return 0;
}