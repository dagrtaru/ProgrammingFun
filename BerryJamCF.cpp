#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int left[n], right[n];
	    int r1 = 0, b1 = 0, r2 = 0, b2 = 0;
	    for(int i = 0; i < 2 * n; i++){
	        int x;
	        cin >> x;
	        if(i < n){
	            if(x == 1){
	                r1++;
	            }
	            else b1++;
	            left[i] = x;
	        }
	        else{
	            if(x == 1){
	                r2++;
	            }
	            else b2++;
	            right[i - n] = x;
	        }
	    }
	    int l = n - 1, r = 0;
	    int count = 0;
	    while(r1 + r2 != b1 + b2 && (l >= 0 || r < n)){
	        if(l >= 0 && r < n){
    	        if(r1 + r2 < b1 + b2){
    	            if(left[l] > right[r]){
    	                left[l--] = 0;
    	                b1--;
    	            }
    	            else if(right[r] > left[l]){
    	                right[r++] = 0;
    	                b2--;
    	            }
    	            else{
    	                if(left[l] == 2){
    	                    left[l--] = 0;
    	                    b1--;
    	                }
    	                else{
    	                    right[r++] = 0;
    	                    r2--;
    	                }
    	            }
    	        }
    	        else{
    	            if(left[l] > right[r]){
    	                right[r++] = 0;
    	                r2--;
    	            }
    	            else if(right[r] > left[l]){
    	                left[l--] = 0;
    	                r1--;
    	            }
    	            else{
    	                if(left[l] == 1){
    	                    left[l--] = 0;
    	                    r1--;
    	                }
    	                else{
    	                    right[r++] = 0;
    	                    b2--;
    	                }
    	            }
    	        }
	        }
	        else if(r >= n){
	            if(left[l] == 1) r1--;
	            else b1--;
    	        left[l--] = 0;
	        }
	        else{
	            if(right[r] == 1) r2--;
	            else b2--;
	            right[r++] = 0;
	        }
	        count++;
	    }
	    cout << count << endl;
	}
	return 0;
}
