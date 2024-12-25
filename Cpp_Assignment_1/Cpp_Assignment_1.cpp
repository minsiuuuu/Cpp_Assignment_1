#include <iostream>
#include <vector>

using namespace std;

// 필수과제
vector<int> input(int size)
{
    vector<int> arr(size);
    cout << "숫자 " << size << "개를 입력해주세요." << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int getSum(vector<int> num)
{
    int sum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        sum += num[i];
    }
    return sum;
}

double getAvg(int sum, int size)
{
    return double(sum) / size;
}

int main()
{
    // 필수과제
    int n;
    cout << "원하는 배열의 크기를 입력해주세요: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "유효한 배열의 크기를 입력해주세요." << endl;
        return 1;
    }

    vector<int> arr = input(n);
    int sum = getSum(arr);

    cout << "합: " << sum << endl;
    cout << "평균: " << getAvg(sum, n) << endl;
}
