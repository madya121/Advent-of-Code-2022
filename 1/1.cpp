#include <cstdio>
#include <bitset>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  freopen ("input.txt","r",stdin);
  char str[100];
  int sum = 0;
  int maks = 0;
  while(gets(str)) {
    if (strlen(str) == 0) {
      maks = max(maks, sum);
      sum = 0;
    } else {
      sum += atoi(str);
    }
  };
  
  cout << maks << endl;
  return 0;
}

