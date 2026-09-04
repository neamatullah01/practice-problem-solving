const users = [
  { name: "Rahim", role: "admin" },
  { name: "Karim", role: "user" },
  { name: "Abir", role: "admin" },
  { name: "Hasan", role: "user" },
];

function groupUsersByRole(users) {
  const result = {};

  for (const user of users) {
    if (!result[user.role]) {
      result[user.role] = [];
    }
    result[user.role].push(user);
  }
  return result;
}

console.log(groupUsersByRole(users));
