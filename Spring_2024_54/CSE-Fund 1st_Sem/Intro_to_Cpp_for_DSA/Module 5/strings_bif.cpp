#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int main()
{   
    // strcpy (C string.h) 
    // char *__cdecl strcpy(char *, const char *)
    char a[10] = "Hello";
    strcpy(a,"Gello");
    // strncpy(=)
    // char *__cdecl strncpy(char *, const char *, size_t)
    // cout << a << endl;
    // cout << strlen(a) << endl;
    string s1 = "Hld";
    string s2 = "Hld";
    //s1 = "Glh";
    // if(strcmp(s1,s2) == 0) // need:> const char* chPtr = myStr.c_str();  
    // reverse c char[] to C++ String Concesion 2 way:
    // const char* ch = "ex. ";
    // 1. string str(ch);
    // 2.
        // string str;
   
    // 24 is the size of ch
    // str.assign(ch, ch + 24);

    if(s1 == s2){
        cout << "Same" << endl;
    }
    else{
            cout << "Not Same" << endl;
    }
    cout << s1 << endl;
    
    return 0;
}