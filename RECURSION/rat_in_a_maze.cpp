#include <bits/stdc++.h>
using namespace std;



class Solution{
    
    
    private:
        //create a function who check the path is safe or not
        bool isSafe(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m) {
            if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1) {
                return true;
            }
            else{
                return false;
            }
        }
        
        
        void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path) {
             //we have reached x,y here
            //base case
            if(x == n-1 && y == n-1) {
                ans.push_back(path);
                return;
            }
            
            visited[x][y] = 1;
            
            //4 choice - D , L , R , U
            
            
            // D - down
            int newx = x+1;
            int newy = y;
            if(isSafe(newx, newy, n, visited, m)) {
                path.push_back('D');
                //call the recursive function
                solve(m,n,ans,newx,newy,visited,path);
                path.pop_back();
            }
            
            // U - up
             newx = x-1;
             newy = y;
            if(isSafe(newx, newy, n, visited, m)) {
                path.push_back('U');
                //call the recursive function
                solve(m,n,ans,newx,newy,visited,path);
                path.pop_back();
            }            
            
            // R - right
             newx = x;
             newy = y+1;
            if(isSafe(newx, newy, n, visited, m)) {
                path.push_back('R');
                //call the recursive function
                solve(m,n,ans,newx,newy,visited,path);
                path.pop_back();
            }
            
            // L-left
             newx = x;
             newy = y-1;
            if(isSafe(newx, newy, n, visited, m)) {
                path.push_back('L');
                //call the recursive function
                solve(m,n,ans,newx,newy,visited,path);
                path.pop_back();
            }            
            
          visited[x][y] = 0;  
            
        }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {

        
        vector<string>ans;
        
        if(m[0][0] == 0){
            return ans;
        }
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = m;
        //initialise with 0
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                visited[i][j] = 0;
            }
        }
        string path = "";
        solve(m,n,ans,srcx,srcy,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
