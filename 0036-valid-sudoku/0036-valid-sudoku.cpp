class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<vector<int>, char> mpp;
        for(int rows = 0; rows<9; rows++){
            for(int cols = 0; cols < 9; cols++){
                vector<int> i;
                i.push_back(rows);
                i.push_back(cols);
                mpp[i] = board[rows][cols];
            }
        }
        map<char, bool> checkRows;
        for(int rows = 0; rows<9; rows++){
            for(int cols = 0; cols<9; cols++){
                vector<int> i;
                i.push_back(rows);
                i.push_back(cols);
                if(mpp[i] == '.'){
                    continue;
                }
                if(checkRows[mpp[i]] == true){
                    return false;
                }
                else{
                    checkRows[mpp[i]] = true;
                }
            }
            checkRows.clear();
        }
        map<char, bool> checkCols;
        for(int cols = 0; cols<9; cols++){
            for(int rows = 0; rows<9; rows++){
                vector<int> i;
                i.push_back(rows);
                i.push_back(cols);
                if(mpp[i] == '.'){
                    continue;
                }
                if(checkRows[mpp[i]] == true){
                    return false;
                }
                else{
                    checkRows[mpp[i]] = true;
                }
            }
            checkRows.clear();
        }
        map<char, bool> check3x3grid;
        int i = 0; int j = 0;
        while(j != 9){
            for(int rows = i; rows<i+3; rows++){
                for(int cols = j; cols<j+3; cols++){
                    vector<int> p;
                    p.push_back(rows);
                    p.push_back(cols);
                    cout << mpp[p] << " " << endl;
                    if(mpp[p] == '.'){
                        continue;
                    }
                    if(check3x3grid[mpp[p]] == false){
                        check3x3grid[mpp[p]] = true;
                    }
                    else{
                        return false;
                    }
                }
            }
            check3x3grid.clear();
            i+=3;
            if(i == 9){
                j += 3;
                i = 0;
            }
        }
        return true;
    }
};