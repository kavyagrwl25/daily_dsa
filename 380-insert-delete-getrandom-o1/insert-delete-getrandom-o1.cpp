class RandomizedSet {
   private:
    unordered_set<int> s;

   public:
    RandomizedSet() {
    }

    bool insert(int val) {
        auto it = s.find(val);
        if (it == s.end()) {
            s.insert(val);
            return true;
        } else {
            return false;
        }
    }

    bool remove(int val) {
        auto it = s.find(val);
        if (it == s.end()) {
            return false;
        } else {
            s.erase(it);
            return true;
        }
    }

    int getRandom() {
        int idx = rand() % static_cast<int>(s.size());
        auto it = s.begin();
        advance(it, idx);
        return *it;
    }
};