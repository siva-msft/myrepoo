/* For reference, the test repo on GitHub: https://github.com/siva-msft/p-test */

// Wondering if the following can be moved to a header file?
// Also better to split issues per file

extern "C" {
    void* memset(void*, int, size_t);
    int memcmp(const void*, const void*, size_t);
    void* malloc(size_t);
}

struct T1 {
    T1 *t1pt1;
};

// Test cases begin

void ptr_1() {
    T1 t1, *pt1 = &t1;
    memset(&t1, 0, sizeof(t1)); // correct usage
    memset(&t1, 0, sizeof(*t1)); // recommend: sizeof(struct T1) or sizeof(t1)
}

void ptr_2() {
    T1 t1, *pt2 = &t1;
    memcmp(&t1,pt2,sizeof(*t1)); // recommend: sizeof(struct T1)
}

int main() {
    // to test dedup across enclosing functions
    ptr_1();
    ptr_2();
}