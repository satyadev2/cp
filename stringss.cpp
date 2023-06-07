// Examples
// Input
// Copy

// WUBWUBABCWUB

// Output
// Copy

// ABC 

// Input
// Copy

// WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB

// Output
// Copy

WE ARE THE CHAMPIONS MY FRIEND     
#include <bits/stdc++.h>
    using namespace std;
    int main(){
    string s;
    cin>>s;
    cout<<regex_replace(s, regex("WUB"), " ");  // replacing some letters with other one
    }

