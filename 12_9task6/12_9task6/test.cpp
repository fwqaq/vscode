int fblq(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	return fblq(n - 1) + fblq(n - 2);
}
