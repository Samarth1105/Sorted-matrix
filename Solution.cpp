class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
       vector<int>flatMat;
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
              flatMat.push_back(Mat[i][j]);
           }
       }
       sort(flatMat.begin(), flatMat.end());
       vector<vector<int>>ans;
       int k=0;
       for(int i=0;i<N;i++){
            vector<int>row;
            for(int j=0;j<N;j++){
                row.push_back(flatMat[k]);
                k++;
            }
            ans.push_back(row);
       }
       return ans;
    }
};
