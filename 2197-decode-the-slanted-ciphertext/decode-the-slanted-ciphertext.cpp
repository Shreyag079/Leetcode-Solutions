class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) 
    {
        if(rows==0)
          return "";
         int n=encodedText.size();
         int col=n/rows;

         vector<vector<char>> mat(rows, vector<char>(col));
         int idx = 0;
         for(int i=0;i<rows;i++)
         {
            for(int j=0;j<col;j++)
            {
                mat[i][j]=encodedText[idx++];
            }
         }

         string result;
         for (int start=0; start<col; start++) 
         {
            int i = 0;
            int j = start;
            while (i < rows && j < col) 
            {
                result += mat[i][j];
                i++;
                j++;
            }
         }

        while (!result.empty() && result.back() == ' ') 
        {
            result.pop_back();
        }

        return result;
    }
};