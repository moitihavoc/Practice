def find_diff(nums1: list[int], nums2: list[int]):
    # first list is num in 1 but not in 2
    # second is reverse 
    ans: list[list[int]] = []
    nums1 = set(nums1)
    nums2 = set(nums2)

    diff1 = nums1 - nums2
    diff2 = nums2 - nums1

    ans.append(list(diff1))
    ans.append(list(diff2))

    return ans


nums1 = [1,2,3]
nums2 = [2,4,6]

print(find_diff(nums1, nums2))
