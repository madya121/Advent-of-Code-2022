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

int num(char c) {
  if ('a' <= c && c <= 'z')
    return c - 'a' + 1;
  return c - 'A' + 27;
}

int main() {
  freopen("input.txt", "r", stdin);
  string str;
  int sum = 0;
  while (cin >> str) {
    string a;
    string b;
    for (int i = 0; i < str.size() / 2; i++) {
      a.push_back(str[i]);
      b.push_back(str[i + (str.size() / 2)]);
    }
    
    cout << a << " " << b << endl;
    
    bool flag[1000];
    memset(flag, false, sizeof flag);
    
    for (int i = 0; i < a.size(); i++) {
      if (flag[a[i]] == true)
        continue;
      for (int j = 0; j < b.size(); j++) {
        if (a[i] == b[j]) {
          sum += num(b[j]);
          flag[b[j]] = true;
          break;
        }
      }
    }
  }
  
  cout << sum << endl;
  return 0;
}

