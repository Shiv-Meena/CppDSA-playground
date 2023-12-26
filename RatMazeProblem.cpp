
class Solution{
    private:
    bool isafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>>& m){
        if(m[x][y]==1&& visited[x][y]==0 &&(x>=0&&x<n)&&(y>=0&&y<n)){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>>& m,int x,int y,int n,vector<vector<int>> visited,vector<string>& ans,string path){
        if(x==n-1&& y==n-1){
            ans.push_back(path);
            return ;
        }
        visited[x][y]=1;
        // 4 choices -D,R,L,U
        // DOWN
        int newx=x+1;
        int newy=y;
        if(isafe(newx,newy,n,visited,m)){
            path.push_back('D');
            solve(m,newx,newy,n,visited,ans ,path);
            path.pop_back();
        }
         // left
         newx=x;
         newy=y-1;
        if(isafe(newx,newy,n,visited,m)){
            path.push_back('L');
            solve(m,newx,newy,n,visited,ans ,path);
            path.pop_back();
        }
         // DUP
         newx=x-1;
         newy=y;
        if(isafe(newx,newy,n,visited,m)){
            path.push_back('U');
            solve(m,newx,newy,n,visited,ans ,path);
            path.pop_back();
        }
         // RIGHT
         newx=x;
        newy=y+1;
        if(isafe(newx,newy,n,visited,m)){
            path.push_back('R');
            solve(m,newx,newy,n,visited,ans ,path);
            path.pop_back();
        }
        visited[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0){
            return ans;
        }
        vector<vector<int>> visited=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        
        string path="";
        int srcx=0;
        int srcy=0;
        solve( m,srcx,srcy,n,visited,ans,path);
         sort(ans.begin(),ans.end());
        return ans;
    }
};

    
