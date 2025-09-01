/*Given someones age, tell whether they are a child
Adult or a senior

0 - 17: Child
18 - 64: Adult
65+: Senior 

*/

#include <iostream>
using namespace std;

int main() {
  int age;
  cin >> age;

  if(age > 0 && age <= 17) {
    cout << 'child' << endl;
  } else if ( age >=18 && age <=64) {
    cout << 'adult' << endl;
  } else {
    cout << 'Senior' << endl;
  }
  return 0;
}