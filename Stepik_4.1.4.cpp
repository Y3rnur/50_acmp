int ans = 0;
int *max = a[0];
int *min = a[0];
for(int i = 0; i < n; i++){
    if(a[i] < min){
        min = a[i];
    }
    if(a[i] > max){
        max = a[i];
    }
}
ans = max - min + 1;
