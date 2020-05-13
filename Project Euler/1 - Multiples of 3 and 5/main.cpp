#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

// completed Wednesday, 13 May 2020 - Crispin Corpuz
using namespace std;

long sum_threes(int n)
{
    long preprocess = n/3;
    long sum = 3*(preprocess*(preprocess+1))/2;
    if (n%3)
    {
        return sum;
    } else {
        return sum - n;
    }
}

long sum_fives(int n)
{
    long preprocess = n/5;
    long sum = 5*(preprocess*(preprocess+1))/2;
    if (n%5)
    {
        return sum;
    } else {
        return sum - n;
    }
}

long overlap(int n)
{
    long preprocess = n/15;
    long sum = 15*(preprocess*(preprocess+1))/2;
    if (n%15)
    {
        return sum;
    } else {
        return sum - n;
    }
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout << sum_threes(n) + sum_fives(n) - overlap(n) << '\n';
    }

    return 0;
}

