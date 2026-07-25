class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        c = head

        while c and c.next:
            if c.val == c.next.val:
                c.next = c.next.next
            else:
                c = c.next

        return head
