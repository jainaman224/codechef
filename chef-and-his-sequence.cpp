#include <iostream>

using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,f,count=0;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	    }
	    cin >> f;
	    int b[f];
	    for(int i=0;i<f;i++){
	        cin >> b[i];
	    }
	    
	    int j=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[j]){
                j++;
                if(j==f)
                	break;
            }
        }	    
	    
	    if(j==f)
	    	cout << "Yes \n";
	    else
	    	cout << "No \n";
	}
}