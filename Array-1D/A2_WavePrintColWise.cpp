#include<iostream>
using namespace std;
int main() {
    int i, j, n, x, m;
    cin >> n >> m;
    int arr[n][m];
    for(i = 0; i < n; ++i)
        for(j = 0; j < m; ++j)
            cin >> arr[i][j];
    for(j = 0; j < m; ++j) {
        if(j%2 == 0)
            for(i = 0; i < n; ++i)
                cout << arr[i][j] << ", ";
        else
            for(i = n-1; i >= 0; --i)
                cout << arr[i][j] << ", ";
    }
    cout << "END";
	return 0;
}