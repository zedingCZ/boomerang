int main(int argc, char *argv[]);
__size32 fib(int param1);


/** address: 0x100004fc */
int main(int argc, char *argv[])
{
    int g3; 		// r3
    int local0; 		// m[g1 - 24]

    printf("Input number: ");
    %g6 = scanf("%d", &local0); /* Warning: also results in %g7, %g8, %g9, %g10, %g12 */
    g3 = fib(local0);
    printf("fibonacci(%d) = %d\n", local0, g3);
    return 0;
}

/** address: 0x10000440 */
__size32 fib(int param1)
{
    int g3; 		// r3
    int g3_2; 		// r3{4}
    int local5; 		// m[g1 - 32]

    if (param1 <= 1) {
        if (param1 != 1) {
            local5 = param1;
        }
        else {
            local5 = 1;
        }
    }
    else {
        g3_2 = fib(param1 - 1);
        g3 = fib(g3_2 - 1);
        printf("%d", g3_2 + g3);
        local5 = g3_2;
    }
    return local5;
}

