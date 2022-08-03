const canSum = (n,numbers) => {
	if(n === 0) return true;
	if(n < 0) return false;
	for(let i of numbers)
	{
		const remainder = n - i;
		if(canSum(remainder,numbers) === true)
		{
			return true;
		}
	}
	return false;
}

console.log(canSum(7,[1,2]));
console.log(canSum(7,[4,10]));
console.log(canSum(8,[3,5,11]));
