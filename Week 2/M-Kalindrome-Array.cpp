#include<bits/stdc++.h>
using namespace std;

bool palindrome(vector<int> arr){
    int n = arr.size();
    int i=0;
    int j=n-1;

    while(i<j){
        if(arr[i] != arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int i=0;
        int j=n-1;
        
        bool flag = false;

        int left, right;

        while(i<j){
            if(arr[i] != arr[j]){
                left = arr[i];
                right = arr[j];
                flag = true;
                break;
            }
            i++;
            j--;
        }

        if(!flag){
            cout << "YES" << endl;
        }

        else{
            vector<int> b, c;
            
            for(int i=0; i<n; i++){
                if(arr[i] == left){
                    continue;
                }
                b.push_back(arr[i]);
            }

            for(int i=0 ; i<n ; i++){
                if(arr[i] == right){
                    continue;
                }
                c.push_back(arr[i]);
            }

            int ans1 = palindrome(b);
            int ans2 = palindrome(c);

            if(ans1 || ans2){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}