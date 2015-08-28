#include <iostream>

using namespace std;

int main(){
	
	int A;
	cin >> A;

	for (int j=0; j<A; j++){

		long long N, H;
		cin >> N >> H;
		int arr[N+1]={0};

		for(int k=0;k<N;k++){
			int a, b;
			cin >> a >> b;
			arr[a]+=1;
			arr[b+1]-=1;
		}

		for(int i=1;i<N;i++){
			arr[i]+=arr[i-1];
		}

		long long arrr=0;
		for (int i=0;i<H;i++){
			arrr+=N-arr[i];
		}
		long long ar=arrr;

		for (int k=0;k<N-H;k++){
			arrr=arrr-arr[k+H]+arr[k];
			if (arrr<ar){
				ar=arrr;
			}
		}

		cout << ar << endl;

	}
}