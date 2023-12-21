int s;
void swap(int* x, int* y) {
    int t = s;
    s = *x;
    *x = *y;
    *y = s;
    s = t;
}

int s;
void swap(int* x, int* y) {
    lock(&s);
    s = *x;
    *x = *y;
    *y = s;
    unlock(&s);
}