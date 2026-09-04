function countFrequency(arr) {
  const map = new Map();

  for (const num of arr) {
    if (map.has(num)) {
      const chk = map.set(num, map.get(num) + 1);
      console.log(chk);
    } else {
      map.set(num, 1);
    }
  }
  return map;
}

const numbers = [1, 2, 2, 3, 1, 2, 4];
console.log(countFrequency(numbers));
