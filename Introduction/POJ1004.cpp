#include <iostream>
using namespace std;

int main() {
	double sum = 0;
	for(int i = 0; i<12;i++){
		double a;
		scanf("%lf",&a);
		sum+=a;
	}
	
	printf("$%.2lf\n",(sum/12.0));
	return 0;
}