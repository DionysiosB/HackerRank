#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n; std::cin >> n;
    std::vector<int> arr(n);
    for(int p = 0; p < n; p++){std::cin >> arr[p];}
    std::vector<int> dep(n);
    for(int p = 0; p < n; p++){std::cin >> dep[p];}

    std::vector<std::pair<int, int> > events;
    for(int p = 0; p < n; p++){events.push_back(std::make_pair(arr[p], 1));}
    for(int p = 0; p < n; p++){events.push_back(std::make_pair(dep[p], -1));}
    sort(events.begin(), events.end());

    int count(0), maxCount(0);
    for(int p = 0; p < events.size(); p++){
        count += events[p].second;
        maxCount = (count > maxCount) ? count : maxCount;
    }

    std::cout << maxCount << std::endl;

    return 0;
}
