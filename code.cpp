#include <bits/stdc++.h>
using namespace std;

struct U {
    int id, bal;
};

bool cmp(const U& a, const U& b) {
    return a.bal == b.bal ? a.id < b.id : a.bal < b.bal;
}

int main() {
    int n;
    cin >> n;
    unordered_map<int, int>m;
    vector<U> u(n);

    for (int i = 0; i < n; ++i) {
        int id, bal;
        cin >> id >> bal;
        m[id] = bal;
        u[i] = {id, bal};
    }

    int t;
    cin >> t;

   for(int i=0;i<t;i++) {
        int from, to, amt;
        cin >> from >> to >> amt;
        if (m[from] >= amt) {
            m[from] -= amt;
            m[to] += amt;
            cout << "Success\n";
        } else {
            cout << "Failure\n";
        }
    }
cout<<"\n";
    for (int i = 0; i < n; ++i) {
        u[i].bal = m[u[i].id];
    }

    sort(u.begin(), u.end(), cmp);

    for (const auto& user : u) {
        cout << user.id << " " << user.bal << endl;
    }

    return 0;
}
