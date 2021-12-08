
#include <vector>
#include <map>

using namespace std;

class Leetcode {
//1. 两数之和
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> result;
        map<int, int> mMap;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int numberToFind = target - nums[i];
            if (mMap.find(numberToFind) != mMap.end()) {
                result.push_back(mMap[numberToFind]);
                result.push_back(i);
                return result;
            }
            mMap[nums[i]] = i;
        }
        return result;
    }

//    2. 两数相加
    struct ListNode {
        int val;
        ListNode *next;

        ListNode() : val(0), next(nullptr) {}

        ListNode(int x) : val(x), next(nullptr) {}

        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *h = new ListNode(0);
        ListNode *p = h;
        int temp = 0;
        while(l1 != NULL && l2 != NULL) {
            p->next = new ListNode((temp + l1->val + l2->val) % 10);
            temp = (temp + l1->val + l2->val) / 10;
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1 != NULL) {
            p->next = new ListNode((temp + l1->val) % 10);
            temp = (temp + l1->val) / 10;
            p = p->next;
            l1 = l1->next;
        }
        while(l2 != NULL) {
            p->next = new ListNode((temp + l2->val) % 10);
            temp = (temp + l2->val) / 10;
            p = p->next;
            l2 = l2->next;
        }
        if(temp) {
            p->next = new ListNode(1);
        }
        return h->next;
    }
};
