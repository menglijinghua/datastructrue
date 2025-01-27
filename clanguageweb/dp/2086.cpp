#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int dp[5000][5000];
int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int len1 = str1.size();
    int len2 = str2.size();
    for (int i = 1; i <= len1; ++i)
    {
        for (int j = 1; j <= len2; ++j)
        {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[len1][len2] << endl;
    system("pause");
    return 0;
}