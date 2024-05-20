#include<iostream>
void ans(int N)
{
    if(N>0) {
    ans(N-1);
    printf("%d",N);
}
}
int main()
{
    return 0;
}