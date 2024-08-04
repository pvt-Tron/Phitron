// 20
// class Solution {
// public:
//     // int bR3(string s, int topst, int cn){
//     //     if(s.back() != topst || s.back() != topst - 2) return 1;
//     //     return 0;
//     // }
//     int bR23(string s, int topst, int cn){
//         if(s.back() != topst + 2 || s.back() != topst - 2){
//             s.back() == topst return 2;
//             else return 1;
//         }
//         return 0;
//     }
//     int bR1st(string s, int topst, int cn){
//         if(s.back() != topst + 1){
//             s.back() == s.back() return 2;
//             else return 1;
//         }
//         return 0;
//     }
//     bool isValid(string s) {
//         stack<char> st;
//         int cnt = 0;

//         while(s.size()){
//             st.push(s.back());
//             s.pop_back();
//             cnt++;
//             if(st.top() > 122){
//             // if(st.top() == '{' || st.top() == '}'){
//                 int rtn = bR23(s, st.top(), cnt);
//                 if(rtn) return false;
//             }
//             else if(st.top() > 91){
//             // if(st.top() == '[' || st.top() == ']'){
//                 int rtn = bR23(s, st.top(), cnt);
//                 if(rtn) return false;
//             }
//             else if(st.top() > 27){
//             // if(st.top() == '(' || st.top() == ')'){
//                 int rtn = bR1st(s, st.top(), cnt);
//                 if(rtn) return false;
//             }
//         }
//         return true;
//     }
//             // if(cnt > 3 || st.size() > 3) return false;
//         //     while(((st.top() == '(') && (s.back() == ')')) || ((st.top() == '[') && (s.back() == ']')) || ((st.top() == '{') && (s.back() == '}'))){
//         //         s.pop_back();
//         //         st.pop();
//         //         cnt--;
//         //     }
//         // }
//         // return true;
    
// };

// 844
    // bool backspaceCompare(string s, string t){
    //     stack<char> sts;
    //     stack<char> stt;
    //     while(s.size() != 0){
    //         if(s.back() != '#'){
    //             sts.push(s.back());
    //             s.pop_back();
    //         }
    //         else{
    //             while(s.back() == '#'){
    //                 s.pop_back();
    //                 if(s.size() == 1){
    //                     if(s.back() == '#') s.pop_back();
    //                     break;
    //                 }
    //                 if(s.empty()) break;
    //                 s.pop_back();
    //             }
    //         }
    //         //     while(s.back() == '#' && s.size() > 1){
    //         //         s.pop_back();
    //         //     }
    //         //     s.pop_back();
    //         // }
    //     }
    //     while(t.size() != 0){
    //         if(t.back() != '#'){
    //             stt.push(t.back());
    //             t.pop_back();
    //         }
    //         else{
    //             while(t.back() == '#'){
    //                 t.pop_back();
    //                 if(t.size() == 1){
    //                     if(t.back() == '#') t.pop_back();
    //                     break;
    //                 }
    //                 if(s.empty()) break;
    //                 t.pop_back();
    //             }
    //             // if(t.back() == '#') t.pop_back();
    //         }
    //         cout << ".";
    //     }
    //     while(!(stt.empty() || sts.empty())){
    //         cout << stt.top() << " " << sts.top() << " ";
    //         if(stt.top() != sts.top()) return false;
    //         stt.pop();
    //         sts.pop();
    //     }
    //     return true;
    // }