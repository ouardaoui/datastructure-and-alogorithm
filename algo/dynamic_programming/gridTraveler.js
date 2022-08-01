const gridTraver = (n,m) => {
	if(n === 1 && m === 1)
		return 1; 
	if(n === 0 || m === 0)
		return 0; 
	return (gridTraver(n - 1, m) + gridTraver(n,m -1));
}

console.log(gridTraver(3,3))
