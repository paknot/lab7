#include <iostream>
using namespace std;
void reverse(char s[], int size) {
int start = 0;
int end = size - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
	
        start++;
        end--;
}
}
int main(){
  char MyArr[10];
  int numer;
  cout<<"Enter an  array: "<<endl;
  cin>>MyArr;
  cout<<"Enter a size: "<<endl;
  cin>>numer;
  reverse(MyArr, numer);
  cout<<"Reversed char is: "<<MyArr;
 
  return 0;
  
}
