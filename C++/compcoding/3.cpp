temp = a[n-1][0][0];
a[n-1][0][0] = a[0][n-1][n-1];
for(int i = 0; i < n; i++){
    for(int j = n-1, k = 0; j >= 0; j--, k++){
        if(j == n-1 && j == 0 && k == 0) continue;
        temp2 = a[j][i][k];
        a[j][i][k] = temp;
        temp = temp2;
    }
    i++;
    if(i >= n) continue;
    for(int j = 0, k = n - 1; j < n; j++, k--){
        temp2 = a[j][i][k];
        a[j][i][k] = temp;
        temp = temp2;
    }
}