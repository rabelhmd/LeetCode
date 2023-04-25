class SmallestInfiniteSet {
public:
    bool St[1001];
    SmallestInfiniteSet() {
        for(int i = 1; i <= 1000; i++) St[i] = true;
    }
    
    int popSmallest() {
        int i = 1; while(!St[i]) i++;
        St[i] = false;
        return i;
    }
    
    void addBack(int num) {
        St[num] = true;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */