#include "Header.h"
#define ll long long
#define rep(i, k, n) for(i=k;i<=n;i++)
#define irep(i, k, n) for(i=k;i>=n;i--)
#define rrep(i, k, n, j) for(i=k;i<=n;i+= j)
#define newl cout << "\n";
#define len(x) x.length()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define cendl(k) cout << k << endl;
#define cspace(k) cout << k << " ";
#define MIN(a, b) (a > b) ? b : a;
#define MAX(a, b) (a > b) ? a : b;
const double PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
#pragma warning(disable : 4996);
const long long inf = (long long)1e18 + 111;
const int iinf = (int)1e9 + 111;

void Generate();
void PrintFieldPlayerDefense();

ll cordx, cordy;

void GAME() {
	Generate();
	PrintFieldPlayerDefense();
}