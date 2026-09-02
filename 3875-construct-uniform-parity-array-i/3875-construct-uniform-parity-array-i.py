class Solution(object):
    def uniformArray(self, nums1):
        """
        :type nums1: List[int]
        :rtype: bool
        """
        if len(nums1) == 1:
            return True
        even = 0
        odd = 0
        for i in range(len(nums1)):
            if nums1[i] %2 == 0:
                even+=1
            else:
                odd+=1
        if odd == len(nums1) or even == len(nums1):
            return True
        elif odd>0 and even>0:
            return True
        return False