const substringDivisibility = (n, A) => {
  const checkProperty = (A) => {
    let d2_4 = Number(A.join('').substring(1, 4));
    let d3_5 = Number(A.join('').substring(2, 5));
    let d4_6 = Number(A.join('').substring(3, 6));
    let d5_7 = Number(A.join('').substring(4, 7));
    let d6_8 = Number(A.join('').substring(5, 8));
    let d7_9 = Number(A.join('').substring(6, 9));
    let d8_10 = Number(A.join('').substring(7, 10));
    if (d2_4 % 2 === 0 &&
      d3_5 % 3 === 0 &&
      d4_6 % 5 === 0 &&
      d5_7 % 7 === 0 &&
      d6_8 % 11 === 0 &&
      d7_9 % 13 === 0 &&
      d8_10 % 17 === 0)
      return true;
    return false;
  };
  const generate = (n, A) => {
    let c = [];
    for (let i = 0; i < n; i++) c[i] = 0;

    if (checkProperty(A)) console.log(A);

    i = 0;
    while (i < n) {
      if (c[i] < i) {
        if (i % 2 === 0)[A[0], A[i]] = [A[i], A[0]];
        else [A[c[i]], A[i]] = [A[i], A[c[i]]];
        if (checkProperty(A)) console.log(A);
        c[i]++;
        i = 0;
      } else {
        c[i] = 0;
        i++;
      }
    }
  };
  generate(n, A);
};

substringDivisibility(9, [1,4,0,6,3,5,7,2,8,9]);
