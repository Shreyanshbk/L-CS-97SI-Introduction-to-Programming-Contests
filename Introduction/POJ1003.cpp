#include <iostream>
using namespace std;

int main() {
	while(1){
		float a;
		scanf("%f", &a);
		if(!a) break;
		float sum = 0;
		int i = 0;
		for(i = 2;sum<a;i++ ){
			sum+=(1.0/i);
		}
		printf("%d card(s)\n",i-2);
	}
	return 0;
}