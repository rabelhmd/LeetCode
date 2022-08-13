class Solution {
    func countKDifference(_ nums: [Int], _ k: Int) -> Int {
        var hashSet = [Int : Int]()
        var ans = 0;
        for item in nums {
            ans += (hashSet[item + k] ?? 0)
            ans += (hashSet[item - k] ?? 0)
            hashSet[item] = (hashSet[item] ?? 0) + 1
        }
        return ans
    }
}