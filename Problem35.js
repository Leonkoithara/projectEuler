const circularPrimes = (n) => {
  const primeCheck = (num) => {
    if (num === 1) {
      return false;
    }
    for (let i = 2; i <= Math.floor(Math.sqrt(num)); i++) {
      if (num % i === 0) {
        return false;
      }
    }
    return true;
  };
  let count = 1;
  for (let i = 1; i < n; i += 2) {
    if (primeCheck(i)) {
      let flag = true;
      let circularNum = i.toString();
      for (let j = 1; j < i.toString().length; j++) {
        circularNum = circularNum.substring(1) + circularNum.substring(0, 1);
        if (primeCheck(Number(circularNum)) === false) {
          flag = false;
          break;
        }
      }
      if (flag) {
        count++;
      }
    }
  }
  return count;
};