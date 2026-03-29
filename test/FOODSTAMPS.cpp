/*
You want to buy food from a store. You have a
scoring system that uses a unit called taste points
.
Each time you buy a type of food, you can measure
its tastiness by the number of taste points you get
from that food.
You have N types of food. You can buy any type
any number of times, as long as the total number
of meals does not exceed M.
However, you don't want to grow tired of a food if
you buy it too often. Therefore, you will get v[i] −
d[i] × (ti − 1) taste points when you buy the i-th
type of food for the ti-th time.
Find the maximum number of taste points you can
achieve.
Sample Test Cases
Case 1
Input:
1
1
5
2
Output:
5
Explanation:
You can only buy the first food once and get 5 taste
points.
Case 2
Input:
2
2
5
7
2
4
Output:
12
*/
#include <iostream>
#include <vector>
using namespace std;

long long n, m;
vector<long long> v, d;

long long countMeals(long long x) {
    long long total = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= x) {
            total = total + (v[i] - x) / d[i] + 1;
            if (total > m){
                return total;
            }         
        }
    }
    return total;
}

long long solveFood() {
    long long low = 0, high = 1e9;

    while (low < high) {
        long long mid = (low + high + 1) / 2;
        if (countMeals(mid) >= m) low = mid;
        else high = mid - 1;
    }

    long long threshold = low;
    long long total = 0, ans = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] >= threshold) {
            long long t = (v[i] - threshold) / d[i] + 1;
            total = total + t;

            long long last = v[i] - (t - 1) * d[i];
            ans = ans + t * (v[i] + last) / 2;
        }
    }

    if (total > m) ans = ans - (total - m) * threshold;

    return ans;
}
int main(){
    cin >> n >> m;

    v.resize(n);
    d.resize(n);

    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> d[i];

    cout << solveFood() << endl;

    return 0;
}