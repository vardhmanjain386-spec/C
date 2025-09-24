#include<stdio.h>
int main()
{
    int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int fr = 0 , fc = 0, lr = 3 , lc = 3;

    while(fr<=lr && fc<=lc)
    {
    // printfing first row
    if(lc<fc || lr<fr) break;
    for(int i = fc ; i<=lc ; i++)
    printf("%d ",a[fr][i]);
    fr++;
    
    // printing last column
   if(lc<fc || lr<fr) break;
    for(int i = fr;i<=lr;i++)
    printf("%d ",a[i][lc]);
    lc--;
    
    // printing last row
   if(lc<fc || lr<fr) break;
    for(int i=lc;i>=fc;i--)
    printf("%d ",a[lr][i]);
    lr--;
    
    // printing first coulumn
    if(lc<fc || lr<fr) break;
    for(int i=lr;i>=fr;i--)
    printf("%d ",a[i][fc]);
    fc++;
    
    }
   
    return 0;

}