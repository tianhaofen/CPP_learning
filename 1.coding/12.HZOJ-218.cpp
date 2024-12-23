/*************************************************************************
	> File Name: 12.HZOJ-218.cpp
	> Author:YYF 
	> Mail: 
	> Created Time: Mon 23 Dec 2024 02:28:07 PM CST
 ************************************************************************/

#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
    map<int, vector<int>> arr;
    int n;
    cin >> n;
    for (int i = 1, h; i <= n; i++) {
        cin >> h;
        arr[h].push_back(i);
    }
    int flag = 0;
    for (auto x : arr) {
        for (auto y : x.second){
            if (flag) cout << " ";
            cout << y;
            flag = 1;
        }
    }
    cout << endl;

    return 0;
}
