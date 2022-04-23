class Solution {
public:

    // Encodes a URL to a shortened URL.
    int c =0;
    unordered_map<string,string> umap;
    string encode(string longUrl) {
        string shorturl = "http://tinyurl.com/"+to_string(c);
        c++;
        umap[shorturl]=longUrl;
        return shorturl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return umap[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));