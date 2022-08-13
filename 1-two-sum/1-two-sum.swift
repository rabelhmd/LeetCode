class Solution {
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] {
        var hashSet = [Int: Int]()
        for(index, item) in nums.enumerated() {
            let x = target - item
            if let val = hashSet[x] {
                return [val, index]
            }
            hashSet[item] = index
        }
        return []
    }
}