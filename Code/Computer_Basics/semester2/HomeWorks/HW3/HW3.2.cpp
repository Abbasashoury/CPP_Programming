#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    string first = s[0];
    string answer = "";

    // Tol zirreshteha ra az bozorg be koochak check mikonim
    for (int l = first.size(); l >= 1; l--)
    {
        // Check kardan tamame zirreshteha be tol l dar reshte aval
        for (int i = 0; i + l <= first.size(); i++)
        {
            string sub = "";
            for (int j = 0; j < l; j++)
                sub += first[i + j]; // Sakht zirreshte az index i be tol l

            string rev = "";
            for (int j = l - 1; j >= 0; j--)
                rev += sub[j]; // Varoon kardan zirreshte baraye check kardane halate makoos

            bool ok = true;
            // Check kardan aya in zirreshte ya makoos shodeye an dar tamame reshteha hast ya na
            for (int k = 1; k < n; k++)
            {
                bool found = false;

                // Dar reshte k-om donbal zirreshte sub ya rev migardim
                for (int t = 0; t + l <= s[k].size(); t++)
                {
                    bool match1 = true, match2 = true;
                    
                    for (int m = 0; m < l; m++)
                    {
                        if (s[k][t + m] != sub[m])
                            match1 = false; // Agar yek harf moghayese nashod, pas zirreshte vojood nadarad
                        if (s[k][t + m] != rev[m])
                            match2 = false; // Agar makoos shode moghayese nashod, pas vojood nadarad
                    }
                    if (match1 || match2)
                    {
                        found = true; // Yeki az halat-ha peida shod
                        break;
                    }
                }

                if (!found)
                {
                    ok = false; // Agar dar yek reshte peida nashod, az halghe kharej mishavim
                    break;
                }
            }

            if (ok)
            {
                cout << sub << endl; // Chape natije zirreshte bozorg ke dar tamame reshteha hast
                return 0;            // Etmam barname ba peida kardan javab
            }
        }
    }

    return 0; // Agar hich zirreshte moshtareki peida nashod, barname be payan mire bedune output
}
