const sumFactorialDigits = (num) => {
  var f = [];

  function factorial(n) {
    if (n == 0 || n == 1)
      return 1;
    if (f[n] > 0)
      return f[n];
    return f[n] = factorial(n - 1) * n;
  }

  let fact = factorial(num);

  return fact;
};

console.log(sumFactorialDigits(10));
console.log(sumFactorialDigits(15));
console.log(sumFactorialDigits(50));
console.log(sumFactorialDigits(75));
console.log(sumFactorialDigits(100));