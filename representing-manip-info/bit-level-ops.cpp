

/** inplace swapp: funtion that uses the same variables and the principles of xor ring to swap
 * two elements.
 */
void inplace_swap(int *x, int *y) {
  *y = *x ^ *y;
  *x = *y ^ *x;
  *y = *x ^ *y;
}

/** reverse_array: the primal function to reverse any set of bytes. It could be molded to any type. */
void reverse_array(int *a, int size) {
  for (int first{}, last{ size - 1}; first < last; ++first, --last) { inplace_bswap(&a[first], &a[last]); }
}
