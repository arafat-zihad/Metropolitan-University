//    Vector – Dynamic Array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // empty vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Size: " << v.size() << endl;
    // Iterate
    for (int x : v)
        cout << x << " ";
    cout << endl;
    // Access element
    cout << "v[1] = " << v[1] << endl;
    // Sort
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}

/*
same code user input
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << v.size() << endl; // print size

    for (int x : v)
        cout << x << " ";
    cout << endl;

    if (n > 1)
        cout << v[3] << endl; // print 2nd element

    sort(v.begin(), v.end(), greater<int>());
    for (int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}





2️. Set – Unique & Sorted

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10); // duplicates ignored
    cout << "Size: " << s.size() << endl;
    for (int x : s) cout << x << " "; // prints sorted
    cout << endl;
    // Check if exists
    if (s.count(20)) cout << "20 exists" << endl;
    return 0;
}

same code user input

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // number of elements
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x); // duplicates ignored
    }
    cout << s.size() << endl; // size of set
    for (int x : s)
        cout << x << " "; // sorted elements
    cout << endl;

    // Now check multiple numbers
    int q; // number of queries
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int check;
        cin >> check;
        if (s.count(check))
            cout << check << " exists" << endl;
        else
            cout << check << " does not exist" << endl;
    }
    return 0;
}





3. Map / Unordered Map – Key-Value Storage

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp["apple"] = 3;
    mp["banana"] = 5;
    mp["orange"] = 2;

    // Iterate
    for (auto &p : mp)
    {
        cout << p.first << " -> " << p.second << endl;
    }
    // Check key
    if (mp.count("banana")) cout << "Banana exists" << endl;

    // Unordered map (faster, not sorted)
    unordered_map<string,int> ump;
    ump["cat"] = 1;
    ump["dog"] = 2;

    return 0;
}

same but user input

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    vector<string> order; // to remember insertion order

    for (int i = 0; i < n; i++) {
        string key;
        int value;
        cin >> key >> value;
        if (!mp.count(key)) order.push_back(key); // store first time only
        mp[key] = value;
    }
    // Print in insertion order
    for (string key : order)
        cout << key << " -> " << mp[key] << endl;
    // Check multiple keys
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string check;
        cin >> check;
        if (mp.count(check)) cout << check << " exists" << endl;
        else cout << check << " does not exist" << endl;
    }
    return 0;
}





4️. Stack & Queue

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"stack"<<endl;
    stack<int> st;
    st.push(10);
    st.push(20);
    cout << st.top() << endl; // 20
    st.pop();
    cout << st.top() << endl; // 10

    cout<<"queue"<<endl;
    queue<int> q;
    q.push(10);
    q.push(20);
    cout << q.front() << endl; // 10
    q.pop();
    cout << q.front() << endl; // 20

    return 0;
}

same but user input

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    // Stack input
    cin >> n; // number of elements for stack
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    // Queue input
    cin >> m; // number of elements for queue
    queue<int> q;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    // Print stack
    cout << "stack:" << endl;
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    // Print queue
    cout << "queue:" << endl;
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}





5️. Priority Queue (Heap)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // max heap
    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top() << endl; // 30
    pq.pop();
    cout << pq.top() << endl; // 20

    // Min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(10);
    pq_min.push(30);
    pq_min.push(20);
    cout << pq_min.top() << endl; // 10

    return 0;
}

same but user input

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    // Max Heap input
    cout << "Enter number of elements for max heap:" << endl;
    cin >> n;
    priority_queue<int> pq; // max heap
    cout << "Enter elements for max heap:" << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    cout << "Max Heap:" << endl;
    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    // Min Heap input
    cout << "Enter number of elements for min heap:" << endl;
    cin >> m;
    priority_queue<int, vector<int>, greater<int>> pq_min; // min heap
    cout << "Enter elements for min heap:" << endl;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        pq_min.push(x);
    }

    cout << "Min Heap:" << endl;
    while (!pq_min.empty()) {
        cout << pq_min.top() << endl;
        pq_min.pop();
    }

    return 0;
}





6️. Algorithm Functions
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 9, 1, 5};

    sort(v.begin(), v.end());           // sort ascending
    auto it = max_element(v.begin(), v.end()); // get max
    cout << *it << endl;

    int x = 5;
    cout << binary_search(v.begin(), v.end(), x) << endl; // 1 = exists

    return 0;
}

same but user input

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Max element
    auto it = max_element(v.begin(), v.end());
    cout << *it << endl; // max element on its own line

    // Check if an element exists
    int x;
    cin >> x;
    if (find(v.begin(), v.end(), x) != v.end())
        cout << 1 << endl; // 1 = exists
    else
        cout << 0 << endl; // 0 = does not exist

    return 0;
}





7. STL Strings
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Labz";

    s.push_back('!');
    cout << s << endl; // Labz!

    cout << s.size() << endl;

    sort(s.begin(), s.end());
    cout << s << endl; // !Labz sorted lexicographically

    return 0;
}

same but user input

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; // user inputs a string

    char ch;
    cin >> ch; // user inputs a character to push back

    s.push_back(ch); // add character at the end
    cout << s << endl; // print updated string

    cout << s.size() << endl; // print string size

    sort(s.begin(), s.end()); // sort lexicographically
    cout << s << endl; // print sorted string

    return 0;
}





8. Basic Pair
#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {10, 20};

    cout << "First: " << p.first << endl;   // 10
    cout << "Second: " << p.second << endl; // 20

    // Modify values
    p.first = 30;
    p.second = 40;

    cout << p.first << " " << p.second << endl; // 30 40
}

same but user input

#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p;
    
    // Input pair values from user
    cin >> p.first >> p.second;

    cout << "First: " << p.first << endl;
    cout << "Second: " << p.second << endl;

    // Input new values to modify the pair
    cin >> p.first >> p.second;

    cout << p.first << " " << p.second << endl;

    return 0;
}

*/