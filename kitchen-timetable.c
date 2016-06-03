#include <stdio.h>

int main()
{
    long arraydiff[10000];
    int test;
    scanf("%d",&test);
    // printf("%d\n", test);
    int number;
    long temp;
    int ans;
    while(test--)
    {
        ans = temp = 0;
        scanf("%d",&number);
        // printf("%d", number);
        for(int counter = 0; counter < number; counter++)
        {
            scanf("%ld", &arraydiff[counter]);
            // printf("%d",arraydiff[counter]);
            arraydiff[counter]-=temp;
            temp+=arraydiff[counter];
            // printf("%ld\n",arraydiff[counter]);
        }

        for(int increment = 0; increment < number; increment++)
        {
            scanf("%ld", &temp);
            // printf("&ld ", temp);
            if(temp > arraydiff[increment])
                ans++;
            // printf("%d\n",ans);
        }
        printf("%d\n", number - ans);
    }
    return 0;
}
