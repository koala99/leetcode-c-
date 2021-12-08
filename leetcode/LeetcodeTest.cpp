
#include <vector>
#include <map>
#include <iostream>
#include "Leetcode.cpp"

using namespace std;

class LeetcodeTest {
public:
    void twoSumTest() {
        vector<int> tmpVector = {1, 2, 3, 4, 5, 6, 7, 8};
        int target = 14;
        tmpVector = Leetcode().twoSum(tmpVector, target);
        for_each(tmpVector.cbegin(), tmpVector.cend(), [](const int &c) { cout << c << " "; });

    }

public:
    void addTwoNumbersTest() {
        Leetcode::ListNode *node1 = new Leetcode::ListNode(2);
        node1->next = new Leetcode::ListNode(4);
        node1->next->next = new Leetcode::ListNode(3);
        Leetcode::ListNode *node2 = new Leetcode::ListNode(5);
        node2->next = new Leetcode::ListNode(6);
        node2->next->next = new Leetcode::ListNode(4);
        Leetcode::ListNode *resultNode = Leetcode().addTwoNumbers(node1, node2);
        while (NULL != resultNode) {
            cout << resultNode->val << " ";
            resultNode = resultNode->next;
        }
    }
};
