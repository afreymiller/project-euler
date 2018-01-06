#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int generate_fibonacci_terms_lt(int n)
{
    int sum_even_terms, term_1, term_2, curr_term_2, i;

    term_1 = 1;
    term_2 = 2;
    sum_even_terms = 0;

    for(i = 0; term_1 < n; i++)
    {
        if(i % 2 == 1)
        {
            sum_even_terms += term_2;
        }

        curr_term_2 = term_2;
        term_2 = term_1 + term_2;
        term_1 = curr_term_2;
    }

    return sum_even_terms;
}

int main()
{
    int j = even_term_fibonacci_lt(4000000);
    printf("%d\n", j);
    return 0;
}