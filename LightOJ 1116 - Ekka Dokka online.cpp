#include <stdio.h>
#include <math.h>
int main()
{
    long long int w; //n, m
    long long int i, j, odd, Valid, limit;
    //long long int tst; scanf("%lld", &tst);

    FILE *fp;
    fp = fopen("input.txt", "w");

    for(i=1; i<=100000; i++)
    {
        w = i;
        limit = w/2;
        Valid = 0;
        odd = 0;
        for(j=2; j <= limit;  j *= 2)
        {
            if(w%j == 0)
                odd = w/j;
            if(odd%2 == 1)
            {
                Valid = 1;
                break;
            }
        }
        if(Valid==1)
        {
            printf("%lld %lld %lld\n", w, odd, j);
            fprintf(fp, "%lld %lld %lld\n", w, odd, j);
        }
        else
        {
            printf("%lld Impossible\n", w);
            fprintf(fp, "%lld Impossible\n", w);
        }
    }
    fclose(fp);
    return 0;
}
