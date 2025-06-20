// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     string s = "lEetcOde";
//     vector<int> lower(26, 0); // lowercase vowels
//     vector<int> upper(26, 0); // uppercase vowels

//     // Step 1: Count and mark vowels
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
//         {
//             upper[s[i] - 'A']++;  // FIX: store in upper
//             s[i] = '#';
//         }
//         else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//         {
//             lower[s[i] - 'a']++;  // FIX: store in lower
//             s[i] = '#';
//         }
//     }

//     // Step 2: Create sorted vowel string
//     string vowel;
//     for (int i = 0; i < 26; i++) // lowercase vowels
//     {
//         while (lower[i]--)
//             vowel += char('a' + i);
//     }
//     for (int i = 0; i < 26; i++) // uppercase vowels
//     {
//         while (upper[i]--)
//             vowel += char('A' + i);
//     }

//     // Step 3: Replace '#' with sorted vowels
//     int first = 0, second = 0;
//     while (second < vowel.size())
//     {
//         if (s[first] == '#')
//         {
//             s[first] = vowel[second];
//             second++;
//         }
//         first++;
//     }

//     // Output
//     cout << s << endl;
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string s = "lEetcOde";
    vector<char> vowels; // Store vowels directly

    // Step 1: Collect vowels and mark their positions
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowels.push_back(s[i]);
            s[i] = '#';
        }
    }

    // Step 2: Sort all vowels together (case-sensitive)
    sort(vowels.begin(), vowels.end());

    // Step 3: Replace '#' with sorted vowels
    int second = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#')
        {
            s[i] = vowels[second++];
        }
    }

    // Output
    cout << s << endl;
    return 0;
}


