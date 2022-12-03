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
  vector<int> v;
  while(gets(str)) {
    if (strlen(str) == 0) {
      v.push_back(sum);
      sum = 0;
    } else {
      sum += atoi(str);
    }
  };
  
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  cout << v[0] + v[1] + v[2] << endl;
  return 0;
}

