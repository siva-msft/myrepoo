/* For reference, the test repo on GitHub: https://github.com/siva-msft/p-test */

int init1(long *ptr) {
    return 0;
}

struct T1 {};

int init2(T1 *ptr){
    return 0;
}

template<typename T> void use(T) {}

void cuv_1() {
    long var1;
    T1 var2;
    long var3 = 0L;
    long var4;
    long var5;
    long var6;
    init1(&var1);
    init2(&var2);
    use(var1);
    use(var2);
    init1(&var3);
    if (0 == init1(&var4)) {
        use(var4);
    }
    long statuscode = init1(&var5);
    use(init1(&var6));
}

int main() {
    cuv_1();
}