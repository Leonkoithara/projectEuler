var numReverse = function(num) {
	return Number(num.toString().split('').reverse().join(''));
};

var isPalin = function(num) {
	if (numReverse(num) === num)
		return true;
	return false;
};

var countLychrel = function(size) {
  let result = 0;

  for (let i = 1; i < size; i++) {
    let loopCount = 1;
    let sum = i;
    while (loopCount < 50) {
      sum = sum + numReverse(sum);
      if (isPalin(sum)) {
        break;
      } else {
        loopCount++;
      }
    }
    if (loopCount === 50) {
      result++;
    }
  }
  
  return result;
}

console.log(countLychrel(10000));