
#include<bits/stdc++.h>
using namespace std;

int Palindrome(string arr, int len){
  int start = 0;
  int end = len - 1;
  int flag = 0;
  while (start < end)
  {
    if(arr[start] == arr[end]){
       flag = 1;
    }else{
      flag = 0;
      break;
    }
    start++;
    end--;
  }

  return flag;

}

int main(){
  string s;
  cin >> s;


  int i = 0;
  while (s[i] != NULL)
  {
    i++;
  }

  int res = Palindrome(s, i);
  cout << res;
}
