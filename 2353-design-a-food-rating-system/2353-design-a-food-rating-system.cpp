class FoodRatings {
public:
    unordered_map<string, set<pair<int, string>>> cuisine_ratings;
    unordered_map<string, string> cuisine;
    unordered_map<string, int> rating;
    
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); ++i) {
            cuisine_ratings[cuisines[i]].insert({ -ratings[i], foods[i] });
            cuisine[foods[i]] = cuisines[i];
            rating[foods[i]] = ratings[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        auto &c = cuisine.find(food)->second;
        cuisine_ratings[c].erase({ -rating[food], food });
        cuisine_ratings[c].insert({ -newRating, food });
        rating[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        return begin(cuisine_ratings[cuisine])->second;
    }
};