/*
<순열>
Q1. 포커 카드 N장 중 2장을 골라 두 장의 합이 M에 최대한 가까운 합을 구해라.
 N장 중 2장 고르기 -> nC2 (2중 for문)

 int n, m;
 cin >> n >> m;
 int sum, ans = 0;

for (int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
        sum = arr[i] + arr[j];

        if(abs(m - ans) > abs(m - sum))
            ans = sum;
    }
}

Q2. N개의 정수로 이루어진 순열 중 사전순으로 M 번째 위치한 순열을 구해라.
모든 순열의 가짓수 -> N!

int n, m;
cin >> n >> m;
int count = 0;
vector<int> v(n);
for(int i = 0; i < n; i++){
    cin >> v[i];
}
do{
    if(count == m){
        for(int i = 0; i < n; i++){
            cout << v[i] << ' ';
        }
        cout << "\n";
        break;
    }
    count++;
}while (next_permutation(v.begin(), v.end()));

---> <algorithm> 의 next_permutation 활용(순열 오름차순)

Q3. 9개의 정수가 주어졌을 떄, 합이 100이 되는 7개의 정수를 찾는 문제

Q4. N자리 순열을 사전순으로 순서대로 출력
 

*/
