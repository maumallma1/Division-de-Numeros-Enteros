#include<iostream>
#include<bitset >
#include<math.h>
using namespace std;
int main(){
	
	int32_t A = 0;
	int32_t Q ; cout<<"\nIngresa Dividendo: "; cin>>Q; 
	int32_t M ; cout<<"\nIngresa Divisor: "; cin>>M; 
	int n = 4;
	double d = 2;
	double z = pow(d,n);
	
	while(Q>=z){
		n = n+1;
		z = pow(d,n);
	}

	for (n ;n>0; n--){
		
		A = (A<<1);
	
		if(Q>(z/2)-1){
			A = A + 1;
		}
		
		if(Q>=(z/2)){
			Q = Q - (z/2);
		}

		Q = (Q<<1);
		
		A = A + (~M+1);
		
		if (A<0){
			A = A - (~M+1);
		}
		
		else {
			Q = Q+1;
		}
		
	}
	
	cout<<"\nEl cociente es: "<<Q<<endl;
	cout<<"\nEl residuo es: "<<A<<endl;
}