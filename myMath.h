//function for sterling numbers of the second kind
int Sterling(int n, int r){
	if(r == 1)
		return 1;
	else if(r == n)
		return 1;
	else	
		return(Sterling(n - 1, r - 1) + (r * Sterling(n - 1, r)));
}

int Ackermann(int m, int n){
	if(m == 0){
		return n + 1;
	}
	else if(m > 0 && n == 0){
		return Ackermann(m - 1, 1);
	}
	else{
		Ackermann(m - 1, Ackermann(m, n - 1));
	}
}