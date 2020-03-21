#include<bits/stdc++.h>
using namespace std;

int LCSlength(string str1,int i,int m, string str2, int j,int n){
   static int count_;
   count_++;
   cout<<count_<<" ";
   if(i == m || j == n)
      return 0;

   if(str1[i] == str2[j])
     return 1+LCSlength(str1,i+1,m,str2,j+1,n);
   else
    return max(LCSlength(str1,i+1,m,str2,j,n), LCSlength(str1,i,m,str2,j+1,n));


}

bool isSorted(int A[],int n){

      if(n == 1)
        return true;

     if(A[n-1] < A[n-2])
        return false;


     isSorted(A,n-1);




}
int main(){

string str1 = "ABCCDDE";
string str2 = "ABCCDDE";

cout<<LCSlength(str1,0,7,str2,0,7);




}
