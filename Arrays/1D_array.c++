// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int time;
//     cin >> time;
//     int queries;
//     cin >> queries;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     while (time > 0){
//         int temp = arr[n - 1];
//         for (int i = n - 1; i > 0; i--)
//         {
//             arr[i] = arr[i - 1];
//         }
//         arr[0] = temp;
//         time--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     while(queries > 0){
//         int k;
//         cin>>k;
//         cout<<arr[k];
//         queries--;
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <string>
// #include <cctype>
// using namespace std;
// int main(int a, char* b [])
// {
//     vector<string> userString;      
//     string word;        
//     string sentence = "";           
//     for (decltype(userString.size()) i = 0; i <= userString.size() - 1; i++)
//     {
//         cin >> word;
//         userString.push_back(word);
//         sentence += userString[i] + " ";
//     }
//     cout << sentence;
//     system("PAUSE");
//     return 0;
// }

