#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> a) {
    int i,j,sum,max;

    max=a[0][0]+a[0][1]+a[0][2]+a[1][1]+a[2][0]+a[2][1]+a[2][2];

    for(i=0;i<4;i++){
        sum=0;
        for(j=0;j<4;j++){
            sum=a[i][j]+a[i][j+1]+a[i][j+2]
                +a[i+1][j+1]
                +a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];

            if(sum>=max)
                max=sum;    
        }
    }

    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

