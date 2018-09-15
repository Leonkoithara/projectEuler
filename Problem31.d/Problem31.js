const coinSums = (n) => {
  const getWays = (n, m=8, c=[1, 2, 5, 10, 20, 50, 100, 200]) => {
    if (n == 0)
      return 1;
    if (m == 0 || n < 0)
      return 0;
    return getWays(n - c[m - 1], m, c) + getWays(n, m - 1, c);
  };
  return getWays(n);
};

console.log(coinSums(50));
console.log(coinSums(100));
console.log(coinSums(150));
console.log(coinSums(200));