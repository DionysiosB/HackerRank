#include <iostream>
#include <deque> 

void printKMax(int arr[], int n, int k){
    std::deque<int> dq(k);
    int cur;
    for (cur = 0; cur < k; ++cur){
        while ( (!dq.empty()) && arr[cur] >= arr[dq.back()]) dq.pop_back();
        dq.push_back(cur);
    }
 
    for ( ; cur < n; ++cur){
        std::cout << arr[dq.front()] << " ";
        while ( (!dq.empty()) && dq.front() <= cur - k) dq.pop_front();
        while ( (!dq.empty()) && arr[cur] >= arr[dq.back()]) dq.pop_back();
        dq.push_back(cur);
    }
 
    std::cout << arr[dq.front()] << std::endl;
}


int main(){
  
   int t;
   std::cin >> t;
   while(t>0) {
      int n,k;
       std::cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++) std::cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
