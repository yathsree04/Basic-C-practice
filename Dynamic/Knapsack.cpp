#include <iostream>
#include<vector>
#include<cstring>
using namespace std;
int t[1002][1002];
int knapsack(vector<int> wt , vector<int> val, int n, int w){
   
    memset(t, -1, sizeof(t));
    if(n==0 || w==0) return 0;
    if(t[n][w] != -1) return t[n][w];
    else if(wt[n-1] <= w){
        t[n][w] = max(val[n-1]+knapsack(wt, val, n-1, w-wt[n-1]), knapsack(wt, val, n-1, w));
    }
    else t[n][w] = knapsack(wt, val, n-1, w);
}

int main() {
	int n , w , t , temp;
	vector<int> wt,val;
	cin >> t;
	for(int i=0 ; i< t ; i++){
	    cin >> n;
	    cin >> w;
	    for(int j=0 ; j<n ; j++){
	        cin >> temp;
	        val[j] =temp;
	    }
	    for(int j=0 ; j<n ; j++){
	        cin >> temp;
	        wt[j] = temp;
	    }
	        cout << knapsack(wt,val,n,w) << endl;
	        wt.clear();
	        val.clear();
	}
	return 0;
}
