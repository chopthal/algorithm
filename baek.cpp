// #1000
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout  << a+b << endl;
//     return 0;
// }

// #10869
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, sum, diff, mul, div, rem;
//     cin >> a >> b;
//     sum = a+b;
//     diff = a-b;
//     mul = a*b;
//     div = a/b;
//     rem = a%b;

//     cout << sum << endl;
//     cout << diff << endl;
//     cout << mul << endl;
//     cout << div << endl;
//     cout << rem << endl;

//     return 0;
// }

// #10926
// #include <iostream>
// using namespace std;

// int main() {
//     string id;

//     cin >> id;
//     cout << id + "??!" << endl;

//     return 0;
// }

// #10172
// #include <iostream>
// using namespace std;

// int main() {
//     // string dog_shape = R"(|\\_/|
//     // |q p|   /}
//     // ( 0 )\"\"\"\\
//     // |\"^\"`    |
//     // ||_/=\\\\__|)";

//     // cout << dog_shape << endl;

//     cout << "|\\_/|" << endl;
//     cout << "|q p|   /}" << endl;
//     cout << "( 0 )\"\"\"\\" << endl;
//     cout << "|\"^\"`    |" << endl;
//     cout << "||_/=\\\\__|" << endl;
//     return 0;
// }

// #1330
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     string result;
//     cin >> a >> b;

//     if (a>b)
//     {
//         result = ">";
//     }
//     else if (a<b)
//     {
//         result = "<";
//     }
//     else
//     {
//         result = "==";
//     }
//     cout << result << endl;
// }

// #2753
// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     bool leap = false;
    
//     cin >> year;
//     if(year%4 == 0){
//         if(year%100 == 0){
//             if(year%400 == 0){
//                 leap = true;
//             }
//         }
//         else {
//             leap = true;
//         }
//     }
//     cout << leap << endl;
// }

// #2480
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int a, b, c, prize;
//     cin >> a >> b >> c;
    
//     if(a == b)
//     {
//         if(a == c){
//             prize = 10000 + 1000*a;
//         }
//         else{
//             prize = 1000 + 100*a;
//         }
//     }
//     else if (b == c)
//     {
//         prize = 1000 + 100*b;
//     }
//     else if (a == c)
//     {
//         prize = 1000 + 100*a;
//     }
//     else
//     {
//         int max_value = max(a, b);
//         max_value = max(max_value, c);
//         prize = max_value * 100;
//     }

//     cout << prize << endl;
//     return 0;
// }

// #2739
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
    
//     cin >> n;
//     for (int i = 1; i < 10; i++)
//     {
//         cout << n << " * " << i << " = " << n*i << endl;
//     }
    

//    return 0;
// }

// #11022
// #include <iostream>
// using namespace std;

// int main() {
//     int test_num;
//     cin >> test_num;

//     for(int i=1; i<=test_num; i++){
//         int a, b;
//         cin >> a >> b;
//         cout << "Case" << " #" << i << ": " << a << " + " << b << " = " << a+b << endl;
//     }

//    return 0;
// }

// #10807
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cin >> num;

//     int cand[num];
//     for(int i=0;i<num;i++){
//         cin >> cand[i];
//     }

//     int v, cnt;
//     cnt = 0;
//     cin >> v;
    
//     for(int i=0;i<num;i++){
//         if(v==cand[i]){
//             cnt++;
//         }
//     }

//     cout << cnt << endl;;

//    return 0;
// }

// #2562
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[9];

//     for(int i=0;i<9;i++){
//         cin >> arr[i];
//     }

//     int max_val = 0;
//     int max_idx = 0;
//     for(int i=0;i<9;i++){
//         if(max_val<arr[i]){
//             max_val = arr[i];
//             max_idx = i+1;
//         }
//     }

//     cout << max_val << endl;
//     cout << max_idx << endl;

//    return 0;
// }

// #1546
// #include <iostream>
// using namespace std;

// int main() {
//     int num_subject;
//     cin >> num_subject;

//     float score[num_subject];
//     int max_score = 0;
//     for(int i=0;i<num_subject;i++){
//         cin >> score[i];
//         if(max_score<score[i]){
//             max_score = score[i];
//         }
//     }

//     // cout << "max score : " << max_score << endl; 

//     float new_score[num_subject];
//     float sum_score = 0;
//     for(int i=0;i<num_subject;i++){
//         new_score[i] = score[i]/max_score*100;
//         // cout << "new score : " << new_score << endl;
//         sum_score = sum_score+new_score[i];
//         // cout << "sum score : " << sum_score << endl;
//     }

//     float avg = sum_score/num_subject;

//     cout << avg << endl;

//    return 0;
// }

// #27866
// #include <iostream>
// using namespace std;

// int main() {
//     string str;
//     int num;
//     cin >> str;
//     cin >> num;

//     cout << str[num-1] << endl;

//    return 0;
// }

// #2743
// #include <iostream>
// using namespace std;

// int main() {
//     string str;
//     int length = 0;
//     int i = 0;

//     cin >> str;

//     while(true){
//         if(str[i]){
//             length++;
//         }
//         else{
//             break;
//         }
//         i++;
//     }

//     cout << length << endl;

//    return 0;
// }

// #11654
// #include <iostream>
// using namespace std;

// int main() {
//     char letter;
//     cin >> letter;

//     int ascii;
//     ascii = static_cast<int>(letter);

//     cout << ascii << endl;

//    return 0;
// }

// #1152
// #include <iostream>
// #include <sstream>

// using namespace std;

// int main() {
//     string str;
//     getline(cin, str);

//     istringstream iss(str);
//     string word;
//     int cnt = 0;

//     while(iss >> word){
//         cnt++;
//     }
    
//     cout << cnt << endl;

//    return 0;
// }

// #11718
// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main() {
//     vector<string> lines;
//     string line;
    
//     while(true){
//         getline(cin, line);
//         lines.push_back(line);

//         if(line.empty()){
//             break;
//         }
//     }

//     // for(const auto& l : lines ){
//     //     cout << l << endl;
//     // }

//     for(int i=0; i<lines.size(); i++){
//         cout << lines[i] << endl;
//     }

//    return 0;
// }

// #3003
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//     int arr[6] = {1, 1, 2, 2, 2, 8};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);
//     string input;
//     getline(cin, input);
//     istringstream iss(input);
//     vector<int> numbers;
//     int number;
//     int i = 0;
//     int diff;

//     while (iss >> number){
//         if(i==arr_size){
//             break;
//         }

//         diff = arr[i] - number;
//         numbers.push_back(diff);
//         cout << diff << endl;

//         i++;
//     }

//    return 0;
// }

// #10988
// #include <iostream>
// using namespace std;

// int main() {
//     string input;
//     string result;
//     cin >> input;
    
//     int number = input.length();
    
//     for(int i=number-1;i>=0;i--){
//         result.push_back(input[i]);
//     }

//     if(input == result){
//         cout << 1 << endl;
//     }
//     else {
//         cout << 0 << endl;
//     }
    

//    return 0;
// }

// #14503 구슬 탈출 2
#include <iostream>
using namespace std;

int main() {
    

   return 0;
}