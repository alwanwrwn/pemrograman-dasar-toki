#include <iostream>

using namespace std;
int n, flag = 0;

int record[1000], pernah[1000];

void permutasi(int depth){
	int i,j;
	if (depth >= n) {
		if (depth>=3) {
			int flag_num = 1;
			for (j=1; j<depth-1; j++) {	
				if ( record[j] < record[j-1] && record[j] < record[j+1] || record[j] > record[j-1] && record[j] > record[j+1]) {
					flag_num = 1;
				} else {
					flag_num = 0;
				}
			}

			if (flag_num == 1) {
				for (i =0; i<n; i++) {
					cout<<record[i];
				}
				cout<<"\n";
			}
		} else {
			for (i =0; i<n; i++) {
				cout<<record[i];
			}
			cout<<"\n";
		}	
	} else {
		for (i=1; i<=n; i++) {
			if (!pernah[i]) {
				pernah[i] = true;
				record[depth] = i;
				permutasi(depth+1);
				pernah[i] = false;
			}
		}
	}
}

int main(){
	cin>>n;

	permutasi(0);

	return 0;
}
