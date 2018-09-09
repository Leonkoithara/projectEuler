const spiralDiagonals = (n) => {
  const Sn2 = (n) => {
    return n*(n+1)*(2*n+1)/6;
  }
  const Sn = (n) => {
    return n*(n+1)/2;
  }
  let sum = (Sn2(n-1) + Sn(n-1) + n-1) + (Math.floor(n/2) + Sn2(n));
  return sum;
};

console.log(spiralDiagonals(101));
console.log(spiralDiagonals(303));
console.log(spiralDiagonals(505));
console.log(spiralDiagonals(1001));