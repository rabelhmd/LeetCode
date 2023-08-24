class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ret;
        const int len = words.size();
        
        for (int begin = 0, moreWords = 0; begin < len; begin = moreWords) {
            string block(maxWidth, ' ');
            
            block.replace(0, words[begin].size(), words[begin]);
            int remainingSpace = maxWidth - words[begin].size();
            
            for (moreWords = begin + 1; moreWords < len && words[moreWords].size() < remainingSpace; moreWords++) {
                remainingSpace -= words[moreWords].size() + 1;
            }
            
            int wordJoints = moreWords - begin - 1;
            if (wordJoints) {
                int evenlyDistributedSpace = 1, unEvenSpace = 0;
                if (moreWords < len) {
                    evenlyDistributedSpace += remainingSpace / wordJoints;
                    unEvenSpace = remainingSpace % wordJoints;
                }
                for (int i = begin + 1, index = words[begin].size(); i < moreWords; i++) {
                    index += evenlyDistributedSpace + (unEvenSpace-- > 0);
                    block.replace(index, words[i].size(), words[i]);
                    index += words[i].size();
                }
            }
            ret.push_back(block);
        }
        return ret;
    }
};
