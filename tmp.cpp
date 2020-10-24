// #define _GLIBCXX_DEBUG

#include <algorithm>
#include <bitset>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
void dump_func()
{
    cerr << endl;
}
template <class Head, class... Tail>
void dump_func(Head &&h, Tail &&... t)
{
    cerr << h << (sizeof...(Tail) == 0 ? "" : ", "), dump_func(forward<Tail>(t)...);
}
#define dump(...)                                                                                                     \
    cerr << "/* " << #__VA_ARGS__ << " :[" << __LINE__ << ":" << __FUNCTION__ << "]" << endl, dump_func(__VA_ARGS__), \
        cerr << "*/\n\n";
typedef long long ll;
int main()
{
    return 0;
}
