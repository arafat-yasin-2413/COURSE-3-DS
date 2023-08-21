#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        int parent = (cur_idx - 1) / 2;
        if (v[parent] < v[cur_idx])
        {
            swap(v[parent], v[cur_idx]);
        }

        else
            break;
        cur_idx = parent;
    }
}

void delete_from_maxHeap(vector<int> &v)
{
    // 1. 0-th index a last element rakhi
    v[0] = v[v.size() - 1];
    // 2. pop back korbo
    v.pop_back();

    // 3. ami check korbo amar left, right 2 tai ache kina?

    // 4. shudhu left ache kina

    // 5. shudhu right ache kina

    // 6. na thakle break

    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;

        if (left_idx <= last_idx and right_idx <= last_idx)
        {
            // left, right 2 tai ache
            if (v[left_idx] >= v[right_idx] and v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }

            else if (v[right_idx] >= v[left_idx] and v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }

            else
                break;
        }

        else if (left_idx <= last_idx)
        {
            // left ache
            if (v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }

            else
                break;
        }

        else if (right_idx <= last_idx)
        {
            // right ache
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }

            else
                break;
        }

        else
        {
            // kew nai
            break;
        }
    }
}

void printHeap(vector<int> v)
{
    for (int val : v)
    {
        cout << val << " ";
    }

    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    cout << "Before Deletion : ";
    printHeap(v);

    delete_from_maxHeap(v);

    cout << "After Deletioin : ";
    printHeap(v);

    
    
    
    // cout << "Before Deletion : ";
    // printHeap(v);

    // delete_from_maxHeap(v);

    // cout << "After Deletioin : ";
    // printHeap(v);

    return 0;
}