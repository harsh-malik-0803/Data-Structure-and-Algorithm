// numd-size of array , d- given array of coins , n- sum we have to find
// output= we store ans int his array

int coin_change(int n,int *d,int numd,int **output){
    if(n=0)
    return 1;

    if(n<=-1)
    return 0;

    if(numd==0)
    return 0;

    // initialise output(size=n+1,numd+1) array with -1 
    if(output[n][numd]>-1){
        return output[n][numd];
    }
    // including that coin 
    int first=coin_change(n-d[0] , d, numd,output);
    // left that coin
    int second=coin_change(n,d+1,numd-1,output);

    output[n][numd]=first +second;
    return first+second;
}