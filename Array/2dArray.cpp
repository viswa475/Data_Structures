#include <bits/stdc++.h>

using namespace std;
const int R=6;
const int C=6;
// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

if(R<2 || C<2)
    return -1;
    int maxsum=-9999;
    for(int i=0;i<R-2;i++)
    {
        for(int j=0;j<C-2;j++)
        {
            int sum = ((arr[i][j]+arr[i][j+1]+arr[i][j+2]) + (arr[i+1][j+1]) + (arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]));
            maxsum=max(maxsum,sum);
        }
    }
    return maxsum;
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

