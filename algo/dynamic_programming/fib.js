const fub = (n,memo = {}) => {
	if(n in memo) return memo[n]; 
	if(n <= 2) return 1;
	memo[n] = (fub(n - 1,memo) + fub(n - 2,memo));
	return memo[n];
};

console.log(fub(5));
console.log(fub(10));
console.log(fub(49));
