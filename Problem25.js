const digitFibonacci = (n) => {
  const digits = (num) => {
    return num.toString().length;
  };
  let f1 = 1;
  let f2 = 1;
  let index = 3;

  while (true) {
    let fn = f1 + f2;
    if (digits(fn) === n) {
      return index;
    } else {
      [f1, f2] = [f2, fn];
      index++;
    }
  }
};
/*
console.log(digitFibonacci(3));
console.log(digitFibonacci(5));
console.log(digitFibonacci(10));
console.log(digitFibonacci(15));
console.log(digitFibonacci(20));
console.log(digitFibonacci(1000));
*/