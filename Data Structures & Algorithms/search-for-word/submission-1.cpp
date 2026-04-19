class Solution {
public:
    int n,m;
    vector<vector<bool>>check;

    bool backtrack(vector<vector<char>>& board, string word, int x, int y, int index ) {
        if(index == word.length()) {
            return true;
        }

        if(x < 0 || y < 0 || x >= n || y >= m || board[x][y] != word[index] || check[x][y]) {
            return false;
        }

        check[x][y] = true;

        bool res = backtrack(board, word, x + 1 , y, index + 1) ||
                    backtrack(board, word, x - 1  , y , index + 1) ||
                    backtrack(board, word, x  , y + 1, index + 1) || 
                    backtrack(board, word, x  , y - 1, index + 1);
        
        check[x][y] = false;

        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        check = vector<vector<bool>>(n,vector<bool>(m,false));

        for(int i = 0; i < n ; i++) {
            for( int j = 0 ; j < m ; j++) {
                if(backtrack(board, word, i, j, 0)) {
                    return true;
                }
            }
        }

        return false;
    }
};
