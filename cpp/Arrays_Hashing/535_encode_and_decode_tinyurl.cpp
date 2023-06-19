#include "stdc++.h"
using namespace std;

// class Solution {
//     unordered_map<string, string> encodeMap;
//     unordered_map<string, string> decodeMap;
//     string baseUrl = "http://tinyurl.com/";

//    public:
//     // Encodes a URL to a shortened URL.
//     string encode(string longUrl) {
//         if (encodeMap.find(longUrl) == encodeMap.end()) {
//             string shortUrl = baseUrl + to_string(encodeMap.size() + 1);
//             encodeMap[longUrl] = shortUrl;
//             decodeMap[shortUrl] = longUrl;
//         }
//         return encodeMap[longUrl];
//     }

//     // Decodes a shortened URL to its original URL.
//     string decode(string shortUrl) { return decodeMap[shortUrl]; }
// };

class Solution {
    unordered_map<string, string> url_db, code_db;
    const string chars =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string getCode() {
        string code{};
        for (int i = 0; i < 6; i++) code += chars[rand() % 62];
        return "http://tinyurl.com/" + code;
    }

   public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        if (url_db.find(longUrl) != url_db.end()) return url_db[longUrl];
        string code = getCode();
        while (code_db.find(code) != code_db.end()) code = getCode();
        code_db[code] = longUrl;
        url_db[longUrl] = code;
        return code;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) { return code_db[shortUrl]; }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));