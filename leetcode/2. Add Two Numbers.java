/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode a = l1;
        ListNode b = l2;
        ListNode ans = new ListNode();
        ListNode now = ans;
        int carry = 0;
        
        while(a != null || b != null || carry != 0){
            int x = 0, y = 0;
            if(a != null) {
                x = a.val;
                a = a.next;
            }
            if(b != null) {
                y = b.val;
                b = b.next;
            }
            int num = x + y + carry;
            
            now.next = new ListNode();
            now = now.next;
            now.val = num % 10;
            carry = num / 10;
            
            
        }
        return ans.next;
    }
}
