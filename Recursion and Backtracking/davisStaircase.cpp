#include <bits/stdc++.h>

using namespace std;
#define mod 10000000007;

vector<int> W(37,0);

// Complete the stepPerms function below.
int stepPerms(int n) {
    if(W[n]!=0)
        return W[n];
    else{
        if(n>=3)
            W[n]=stepPerms(n-3)+stepPerms(n-2)+stepPerms(n-1);
        else if(n==1 or n==2)
            W[n]=n;
        else 
            W[n]=1;
    }
    return W[n]%mod;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}

