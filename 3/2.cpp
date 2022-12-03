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
  string a, b, c;
  int sum = 0;
  while (cin >> a) {
    cin >> b;
    cin >> c;
    
    map<char, bool> A, B, C;
    for (int i = 0; i < a.size(); i++) A[a[i]] = true;
    for (int i = 0; i < b.size(); i++) B[b[i]] = true;
    for (int i = 0; i < c.size(); i++) C[c[i]] = true;
    
    for (int i = 'a'; i <= 'z'; i++) {
      if (A[i] && B[i] && C[i])
        sum += num(i);
    }
    
    for (int i = 'A'; i <= 'Z'; i++) {
      if (A[i] && B[i] && C[i])
        sum += num(i);
    }
  }
  
  cout << sum << endl;
  return 0;
}

