function get_eligible_users(users) {
  const result = users.filter(
    (user) => user.is_active == true && user.account_age_days >= 30,
  );

  return result.map((user) => user.email);
}

const users = [
  {
    name: "Alice",
    email: "alice@example.com",
    is_active: true,
    account_age_days: 45,
  },
  {
    name: "Bob",
    email: "bob@example.com",
    is_active: false,
    account_age_days: 60,
  },
  {
    name: "Charlie",
    email: "charlie@example.com",
    is_active: true,
    account_age_days: 10,
  },
];

console.log(get_eligible_users(users));
