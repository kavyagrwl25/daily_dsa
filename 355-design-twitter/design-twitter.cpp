
class Twitter {
private:
    int time = 0;

    // userId -> list of {timestamp, tweetId}
    unordered_map<int, vector<pair<int, int>>> tweets;

    // followerId -> users they follow
    unordered_map<int, unordered_set<int>> following;

public:
    Twitter() {}

    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<tuple<int, int, int>> pq;

        // Add the user's own tweets
        auto& own = tweets[userId];
        for (int i = (int)own.size() - 1; i >= 0 && i >= (int)own.size() - 10; i--) {
            pq.push({own[i].first, own[i].second, userId});
        }

        // Add recent tweets from followed users
        for (int followee : following[userId]) {
            auto& list = tweets[followee];

            for (int i = (int)list.size() - 1;
                 i >= 0 && i >= (int)list.size() - 10; i--) {
                pq.push({list[i].first, list[i].second, followee});
            }
        }

        vector<int> feed;

        while (!pq.empty() && feed.size() < 10) {
            auto [timestamp, tweetId, author] = pq.top();
            pq.pop();
            feed.push_back(tweetId);
        }

        return feed;
    }

    void follow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            following[followerId].insert(followeeId);
        }
    }

    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};
