class Student{
    
public:
    const int n = 5;
    int total;
    std::vector<int> scores;
    void input(){
        scores = std::vector<int>(n, 0);
        for(int p = 0; p < n; p++){scanf("%d", &scores[p]);}
    }
    
    int calculateTotalScore(){
        total = 0;
        for(int p = 0; p < n; p++){total += scores[p];}
        return total;
    }
};
