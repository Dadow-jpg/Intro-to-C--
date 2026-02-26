#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> swimmingRoster;
   int numTime;
   int inputNum;
   unsigned int i;

   cin >> numTime;

   for (i = 0; i < numTime; ++i) {
      cin >> inputNum;
      swimmingRoster.push_back(inputNum);
   }

   

   return 0;
}