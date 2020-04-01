#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {

    stack<char> x;

    for(int i=0;i<s.size();i++){

            switch(s[i]){
                case '(':
                case '[':
                case '{': x.push(s[i]);
                            break;

                case ')':if(!x.empty()){
                            if(x.top()=='(')
                                 x.pop();
                            else
                                return "NO"; 
                        }   
                        else
                                return "NO"; 
                        break;  

                case ']': if(!x.empty()){
                            if(x.top()=='[')
                                 x.pop();
                            else
                                return "NO"; 
                                
                        }  
                        else
                                return "NO";
                        break; 

                case '}': if(!x.empty()){
                            if(x.top()=='{')
                                 x.pop();
                            else
                                return "NO"; 
                        }  
                        else
                                return "NO";
                        break;   
                                               
            }             
    }

    if(x.empty())
        return "YES";
    else
        return "NO";    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

