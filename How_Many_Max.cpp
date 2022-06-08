#include<bits/stdc++.h>
using namespace std;
// #define ll long long 
int32_t main(){
	int Bhosdike;
	cin>>Bhosdike;
	while(Bhosdike--){
        int ___OOOO,_PPPP,____KKKK=0,_,_One__=0,_two__=0;
        cin>>___OOOO;
        vector<char> __sohan(___OOOO - 1);
          for (char &kkkkkkkk :__sohan){
              cin >> kkkkkkkk;
          }

        
        int __Solution___ = 0;
        if(__sohan.size() == 1)
        {
            cout<<1<<"\n";
            continue;
        }

        for (int i = 1; i < __sohan.size(); i++)
         {
            if (__sohan[i] =='1' and __sohan[i - 1]=='0')
            {
                __Solution___++;
            }
         }
  
  if (__sohan[0]=='1'){
     __Solution___++;
  }
  if (__sohan[__sohan.size()- 1]=='0')
   {
     __Solution___++;
   }

  cout<<__Solution___<<"\n";
 }
 return 0;
}