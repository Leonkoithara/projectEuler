const distinctPowers = (n) => {
  let list = [];
  for(let a=2; a<=n; a++) {
    for(let b=2; b<=n; b++) {
      let term = Math.pow(a, b);
      if (list.indexOf(term)===-1) list.push(term);
    }
  }
  return list.length;
};

console.log(distinctPowers(15));
console.log(distinctPowers(20));
console.log(distinctPowers(25));
console.log(distinctPowers(30));
