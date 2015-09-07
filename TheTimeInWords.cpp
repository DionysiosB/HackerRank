#include <cstdio>
#include <iostream>
#include <string>
#include <map>

int main(){

    std::map<int, std::string> words;
    words.insert(std::pair<int, std::string>(1, "one"));
    words.insert(std::pair<int, std::string>(2, "two"));
    words.insert(std::pair<int, std::string>(3, "three"));
    words.insert(std::pair<int, std::string>(4, "four"));
    words.insert(std::pair<int, std::string>(5, "five"));
    words.insert(std::pair<int, std::string>(6, "six"));
    words.insert(std::pair<int, std::string>(7, "seven"));
    words.insert(std::pair<int, std::string>(8, "eight"));
    words.insert(std::pair<int, std::string>(9, "nine"));
    words.insert(std::pair<int, std::string>(10, "ten"));
    words.insert(std::pair<int, std::string>(11, "eleven"));
    words.insert(std::pair<int, std::string>(12, "twelve"));
    words.insert(std::pair<int, std::string>(13, "thirteen"));
    words.insert(std::pair<int, std::string>(14, "fourteen"));
    words.insert(std::pair<int, std::string>(15, "fifteen"));
    words.insert(std::pair<int, std::string>(16, "sixteen"));
    words.insert(std::pair<int, std::string>(17, "seventeen"));
    words.insert(std::pair<int, std::string>(18, "eighteen"));
    words.insert(std::pair<int, std::string>(19, "nineteen"));
    words.insert(std::pair<int, std::string>(20, "twenty"));
    words.insert(std::pair<int, std::string>(21, "twenty one"));
    words.insert(std::pair<int, std::string>(22, "twenty two"));
    words.insert(std::pair<int, std::string>(23, "twenty three"));
    words.insert(std::pair<int, std::string>(24, "twenty four"));
    words.insert(std::pair<int, std::string>(25, "twenty five"));
    words.insert(std::pair<int, std::string>(26, "twenty six"));
    words.insert(std::pair<int, std::string>(27, "twenty seven"));
    words.insert(std::pair<int, std::string>(28, "twenty eight"));
    words.insert(std::pair<int, std::string>(29, "twenty nine"));
    words.insert(std::pair<int, std::string>(30, "thirty"));
    words.insert(std::pair<int, std::string>(31, "thirty one"));
    words.insert(std::pair<int, std::string>(32, "thirty two"));
    words.insert(std::pair<int, std::string>(33, "thirty three"));
    words.insert(std::pair<int, std::string>(34, "thirty four"));
    words.insert(std::pair<int, std::string>(35, "thirty five"));
    words.insert(std::pair<int, std::string>(36, "thirty six"));
    words.insert(std::pair<int, std::string>(37, "thirty seven"));
    words.insert(std::pair<int, std::string>(38, "thirty eight"));
    words.insert(std::pair<int, std::string>(39, "thirty nine"));
    words.insert(std::pair<int, std::string>(40, "forty"));
    words.insert(std::pair<int, std::string>(41, "forty one"));
    words.insert(std::pair<int, std::string>(42, "forty two"));
    words.insert(std::pair<int, std::string>(43, "forty three"));
    words.insert(std::pair<int, std::string>(44, "forty four"));
    words.insert(std::pair<int, std::string>(45, "forty five"));
    words.insert(std::pair<int, std::string>(46, "forty six"));
    words.insert(std::pair<int, std::string>(47, "forty seven"));
    words.insert(std::pair<int, std::string>(48, "forty eight"));
    words.insert(std::pair<int, std::string>(49, "forty nine"));
    words.insert(std::pair<int, std::string>(50, "fifty"));
    words.insert(std::pair<int, std::string>(51, "fifty one"));
    words.insert(std::pair<int, std::string>(52, "fifty two"));
    words.insert(std::pair<int, std::string>(53, "fifty three"));
    words.insert(std::pair<int, std::string>(54, "fifty four"));
    words.insert(std::pair<int, std::string>(55, "fifty five"));
    words.insert(std::pair<int, std::string>(56, "fifty six"));
    words.insert(std::pair<int, std::string>(57, "fifty seven"));
    words.insert(std::pair<int, std::string>(58, "fifty eight"));
    words.insert(std::pair<int, std::string>(59, "fifty nine"));

    const int N = 12;
    const int M = 60;

    int h, m; scanf("%d\n%d\n", &h, &m);
    if(m == 0){std::cout << words[h] << " o' clock" << std::endl;}
    else if(m == 1){std::cout << "one minute past " << words[h] << std::endl;}
    else if(m == 15){std::cout << "quarter past " << words[h] << std::endl;}
    else if(m == 30){std::cout << "half past " << words[h] << std::endl;}
    else if(m == 45){++h; if(h == 13){h = 1;}; std::cout << "quarter to " << words[h] << std::endl;}
    else if(m > 0 && m < 30){std::cout << words[m] << " minutes past " << words[h] << std::endl;}
    else if(m > 30 && m < 60){++h; if(h == 13){h = 1;}; std::cout << words[M - m] << " minutes to " << words[h] << std::endl;}

    return 0;
}
