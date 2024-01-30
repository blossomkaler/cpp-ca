// C++ program to Find the missing element
#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int N)
{
	int i;
	int temp[N + 1]={0};

	for(i = 0; i < N; i++){
	    temp[arr[i] - 1] = 1;
	}

	int ans;
	for (i = 0; i <= N ; i++) {
		if (temp[i] == 0)
			ans = i + 1;
	}
	cout << ans;
}
int main()
{
	int arr[] = { 1,4,2,5,6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findMissing(arr, n);
}
