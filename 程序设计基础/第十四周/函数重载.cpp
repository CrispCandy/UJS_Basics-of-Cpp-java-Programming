#include<bits/stdc++.h>
using namespace std;
int Finddata(int* arr, int N, int fid);
int Finddata(int* arr, int N, int fid) {
    int i, k = -1;

    for (i = 0; i < N; i++) {
        if (arr[i] == fid) {
            k = i;
            break;
        }
    }
    return k;
}
    int Finddata(char* str, int s, char ch);
    int Finddata(char* str, int s, char ch){
        int i, j = -1;



        for (i = 0; i < s; i++) {
            if (str[i] == ch) {
                j = i;
                break;
            }

        }
        return j;

    }
    int main()

    {

        int fid, arr[] = { -11,3,5,13,27,8,23,45,2,3,-14,0,43,20,2,30,5,45,0,42,38,67 };

        char ch, str[] = "The university seeks to integrate social service into its schooling.";

        int N = sizeof(arr) / sizeof(int);

        cin >> fid;//fid为要查找的整数
        int i = -1;
         i = Finddata(arr, N, fid);
        if (i == -1) { cout << "Not Found!\n"; }
        else {
            cout << "Found:" << i<<endl;
        }
        i = -1;
        cin >> ch; //ch为要查找的字符
        int s = sizeof(str) / sizeof(char);

        i = Finddata(str, s, ch);

        if (i == -1) { cout << "Not Found!\n"; }
        else { cout << "Found:" << i; }


        return 0;

    }

