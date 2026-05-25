function reverseString(s) {
  let ans = "";
  for (let i = s.length - 1; i >= 0; i--) {
    ans += s[i];
  }
  return ans;
}
console.log(reverseString("hello"));
