

/** inplace swapp: funtion that uses the same variables and the principles of xor ring to swap
 * two elements.
 */
void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *y ^ *x;
  *y = *x ^ *y;
}
