#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0;

    int i = 1;
    int NumSize = nums.size();

    for (int j = 1; j < NumSize; j++)
    {
        if (nums[j] != nums[i - 1])
        {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main()
{
    int n, k, temp;
    cin >> n;
    if (n > 30000)
    {
        return 0;
    }

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > 100 || temp < -100)
        {
            return 0;
        }
        nums[i] = temp;
    }

    k = removeDuplicates(nums);

    cout << k << endl;
    
    return 0;
}