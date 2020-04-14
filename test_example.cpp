extern "C" {
    void* memset(void*, int, size_t);
    int memcmp(const void*, const void*, size_t);
    void* malloc(size_t);
}

struct T1 {
    T1 *t1pt1;
};

void foo() {
    T1 t1, *pt1 = &t1;
    memset(&t1, 0, sizeof(t1)); // correct usage
    memset(&t1, 0, sizeof(*t1)); // recommend: sizeof(struct T1) or sizeof(t1)
}

int main() {
    T1 t1, *pt1 = &t1;
    memset(&t1, 0, sizeof(*t1)); // recommend: sizeof(struct T1)
    foo();
}
