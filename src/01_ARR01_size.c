enum {ARR_LEN = 100};

void clear(int a[ARR_LEN]) {
  memset(a, 0, sizeof(a)); /* 間違い */
}

int main(void) {
  int b[ARR_LEN];
  clear(b);
  assert(b[ARR_LEN / 2]==0); /* おそらく失敗 */
  return 0;
}
