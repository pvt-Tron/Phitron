#include<bits/stdc++.h>
using namespace std;  // inpt : 3
                      //   name1 25 92
// Custom Compare Class // name2 12 85
class Student{          // name3  7 96
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp{
public:
    bool operator()(Student l, Student r){
        if(l.marks > r,marks) return true;
        else if(l.marks < r.marks) return false;
        else return l.roll > r.roll;
    }
};

vector<int> v;

int main(){
// priority_queue STL
    priority_queue<int> pq1;
    priority_queue<int, vector<int>, grater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(2);
    cout << pq.top() << endl;
    pq.pop(); // 2
    pq.pop(); // 5
    //pq.push(100);
    cout << pq.top() << endl;
    cout << pq.empty() << endl;

// Custom Compare Class
    priority_queue<Student, vector<Student>, cmp> pqc;
    int n;
    cin >> n;
    for(int i = 1; i < n; i += 1){
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        pqc.push(obj);
    }
    while(!pqc.empty()){
        cout << pqc.top().name << " " << pqc.top().roll << " " << pqc.top().marks << endl;
        pqc.pop();
    }

    /* Frequency Array Limitations:
        1. Only int
        2. index(0 - 10 ^6)
                        0 3 1000 1005
        3. Memory Waste 0_1_...0_1_
        Array index - val
               ^int
        Map    key  - val

    */
    // ------------ MAP ---------------

    map<int, string> mp1;
    int free[101];
    free[5] = 20;
    mp1["name1"] = 2;  // logN
    mp1["name2"] = 500;
    mp1["name10"] = 50;
    mp1["name4"] = 50;
    // cout << mp1["name2"] << endl; // map_name
    // cout << free[5] << endl;
    for(auto it = mp1.begin(); it != mp1.end(); it++){ // O(NlogN)
        cout << it->first << " " << it->second  << endl; // logN
    }
    if(mp1.count["name4"]){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
