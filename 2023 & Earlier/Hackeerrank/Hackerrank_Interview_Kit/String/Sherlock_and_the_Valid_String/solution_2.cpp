#include <cstdio>
using namespace std;

int n;
char tab[1000007];
int ile[570];

int licz;
int czy;

int main()
{
    scanf("%s", tab);
    for (int i=0; 1; i++)
    {
        if (!tab[i])
        break;
        ile[tab[i]]++;
    }
    czy=1;
    for (char i='a'; i<='z'; i++)
    {
        if (!ile[i])
        continue;
        if (!licz)
        {
            licz=ile[i];
            continue;
        }
        if (licz!=ile[i])
        {
            czy=0;
            break;
        }
    }
    if (czy)
    {
        printf("YES");
        return 0;
    }
    for (char i='a'; i<='z'; i++)
    {
        if (!ile[i])
        continue;
        ile[i]--;
        licz=0;
        czy=1;
        for (char j='a'; j<='z'; j++)
        {
            if (!ile[j])
            continue;
            if (!licz)
            {
                licz=ile[j];
                continue;
            }
            if (licz!=ile[j])
            {
                czy=0;
                break;
            }
        }
        if (czy)
        {
            printf("YES");
            return 0;
        }
        ile[i]++;
    }
    printf("NO");
    return 0;
}
