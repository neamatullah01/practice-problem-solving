function is_rate_limited(logs: string[], target_ip: string): boolean {
  let failedAttempts = 0;

  for (const log of logs) {
    const parts = log.split(" - ");

    //     [
    //   "2023-10-01 10:05:00",
    //   "10.0.0.5",
    //   "FAILED"
    // ]

    const ip = parts[1];
    const status = parts[2];

    if (ip === target_ip && status === "FAILED") {
      failedAttempts++;
    }
  }

  return failedAttempts >= 3;
}
