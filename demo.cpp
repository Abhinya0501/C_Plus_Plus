#include<iostream>
using namespace std;

void fun(int i,int n){
   if(i<1)
   return;
   cout<<i<<endl;
   fun(i-1,n);
}


int main(){
int i, n=5;
  fun(n,n);

}