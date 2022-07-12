void merge(vector<int>&arr, int low, int mid, int high) {
	//int ans[] = new int[high - low + 1];
	vector<int>ans(high - low + 1);
	int i1 = low;
	int i2 = mid + 1;
	int x = 0;
	while (i1 <= mid && i2 <= high) {
		if (arr[i1] <= arr[i2]) {
			ans[x++] = arr[i1++];
		}
		else {
			ans[x++] = arr[i2++];
		}
	}
	while (i1 <= mid) {
		ans[x++] = arr[i1++];
	}
	while (i2 <= high) {
		ans[x++] = arr[i2++];
	}
	for (int i = 0, j = low; i < ans.size(); i++, j++) {
		arr[j] = ans[i];
	}
}
void divide(vector<int>&arr, int low, int high) {
	if (low >= high) {
		return;
	}
	int mid = low + (high - low) / 2;
	divide(arr, low, mid);
	divide(arr, mid + 1, high);
	merge(arr, low, mid, high);
}
void findsol() {
	isPrime(1);
	ll n;
	cin >> n;
	vector<int>arr(n);
	lf(i, 0, n) {
		cin >> arr[i];
	}
	divide(arr, 0, n - 1);
	for (auto &it : arr) {
		cout << it << " ";
	}
	cout << endl;
