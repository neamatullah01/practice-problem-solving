function calculate_total(
  cart: { item: string; price: number; quantity: number }[],
  tax_rate: number,
  discount_code: string,
): number {
  // Calculate subtotal
  let subtotal = cart.reduce((total, product) => {
    return total + product.price * product.quantity;
  }, 0);

  // Apply discount
  if (discount_code === "SAVE10") {
    subtotal = subtotal * 0.9;
  } else if (discount_code === "SAVE20") {
    subtotal = subtotal * 0.8;
  }

  // Apply tax
  const tax = subtotal * tax_rate;

  // Final total
  const total = subtotal + tax;

  // Round to 2 decimal places
  return Number(total.toFixed(2));
}
