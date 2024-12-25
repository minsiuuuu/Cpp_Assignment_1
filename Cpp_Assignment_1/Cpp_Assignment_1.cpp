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

// 도전과제
vector<int> sort(vector<int> arr, int n)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            bool condition = false;
            if (n == 1) // 오름차순
            {
                condition = arr[j] > arr[j + 1];
            }
            else if (n == 2) // 내림차순
            {
                condition = arr[j] < arr[j + 1];
            }
            if (condition)
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
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

    // 도전과제
    int s;
    cout << "정렬 순서를 입력하세요 (오름차순: 1, 내림차순: 2): ";
    cin >> s;

    while (s != 1 && s != 2)
    {
        cout << "잘못된 입력입니다. 다시 입력하세요(오름차순: 1, 내림차순: 2): ";
        cin >> s;
    }

    vector<int> sortedArr = sort(arr, s);

    if (s == 1)
    {
        cout << "오름차순 정렬: ";
    }
    else if (s == 2)
    {
        cout << "내림차순 정렬: ";
    }

    for (int num : sortedArr)
    {
        cout << num << " ";
    }
    cout << endl;
}
