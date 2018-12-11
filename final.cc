//line counter
//character counter

#include <iostream>
#include <string>

using namespace std;
int main(){

char ch;
int charcount = 0, linecount = 0;
while (cin >> ch){
  if (ch == '\n'){
    linecount ++;
  }
  else if (ch == 'q'){
    break;
  }
  else {
    charcount ++;
  }
}
cout << "characters: " << charcount;
cout << "lines: " << linecount;

return 0;
}
