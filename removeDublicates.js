function removeDuplicates(arr) {
  let result = [];
  for (const e of arr) {
    if (!result.includes(e)) {
      result.push(e);
    }
  }
  return result;
}

// function removeDuplicates(arr){
//     return [...new Set(arr)];
// }
