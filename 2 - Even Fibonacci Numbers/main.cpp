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

using namespace std;
// notice that the sum of

long fibonacci_even_sum(long n)
{
    long current_even = 2, previous_even = 0, next_even = 0, running_sum = 0, previous_sum = 0;
    while (1)
    {
        next_even = 4*current_even + previous_even;
        previous_sum += current_even;
        if (next_even > n)
        {
            return running_sum;
        }
        previous_even = current_even;
        current_even = next_even;
        running_sum = current_even + previous_sum;
    }
}
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        cout << fibonacci_even_sum(n) << '\n';
    }
    return 0;
}