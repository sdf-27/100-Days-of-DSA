int missingNum(int arr[], int n) {
    long long expectedSum = (long long)(n + 1) * (n + 2) / 2;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (int)(expectedSum - sum);
}
