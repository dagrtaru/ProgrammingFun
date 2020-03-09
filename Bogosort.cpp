#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    vector<pair<int, int>> diff;
	    diff.push_back({0 - a[0], 0});
	    for(int i = 1; i < n; i++){
	        int d = i - a[i];
	        bool ok = false;
	        for(int j = 0; j < diff.size(); j++){
	            if(diff[j].first == d){
	                ok = true;
    	            pair<int, int> temp = {i - a[diff[j].second], diff[j].second};
    	            diff[j] = {j - a[i], i};
    	            diff.push_back(temp);
    	            int t = a[i];
    	            a[i] = a[diff[j].second];
    	            a[diff[j].second] = t;
	            }
	        }
	        if(!ok) diff.push_back({d, i});
	    }
	    for(int i = 0; i < n; i++){
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
