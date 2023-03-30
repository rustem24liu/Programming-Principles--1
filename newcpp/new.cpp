/*#include <iostream>
using namespace std;
int main (){
	string n;
	cin >> n;
	int x = 0, y = 0;
	string ans = "";
	if(n=="FB" || n =="BF"|| n =="LR"|| n =="RL"){
		cout << "Chill Yelnur";
	}
	for(int i = 0; i < n.length(); i++){
		if(n[i] == 'F') y++;
		if(n[i] == 'B') y--;
		if(n[i] == 'R') x++;
		if(n[i] == 'L') x--;
	}
	
	while(y > 0){
		ans += 'B';
		y--;
	}
	while(y < 0){
		ans += 'F';
		y++;
	}
	while(x > 0){
		ans += 'L';
		x--;
	}
	while(x < 0){
		ans += 'R';
		x++;
	}
	
	
		
	cout << ans;

}*/
/*#include <iostream>
using namespace std;
int main(){
	string c;
	cin >> c;
	int n,m;
	cin >>n >> m;
	char arr[n][m];
	for(int i = 0; i< n; i++){
		for(int j = 0; j< m; j++){
			arr[i][j] = 'X';
		}
	}
	arr[0][0] = '*';
	int x = 0, y = 0;
	for(int i = 0; i< c.size(); i++){
		if(c[i] == 'D' && y < n-1) y++;
		if(c[i] == 'U' && y > 0) y--;
		if(c[i] == 'R' && x < m-1x) x++;
		if(c[i] == 'L' && x > 0) x--;
		arr[y][x] = '*';
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j< m; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}

}	
*/

/*#include <iostream>
using namespace std;
bool IsinREctangle(int x, int y, int x1, int y1,int n, int m){
	if(n>=x && n<=x1 && m<= y && m>= y1){
		return true;
	}
	else return false;
	
}
int main (){
	int x , y, x1, y1 ,n, m;
	cin >> x >> y >> x1 >> y1 >> n >>m;
	if(IsinREctangle(x,y,x1,y1,n,m)){
		cout << "yes";
	}
	else{
		cout << "no";
	}
}
*/


/*#include <iostream>
using namespace std;
int Favnum(int n){
	int cnt = 0;
	int k = n%10;	
	while(n>0){
		cnt += n%10;
		n /= 10;
		
		
	}
	if(cnt%k== 0){
		cout << "yes";
	}
	else{
		cout << "no";
	}
}
int main(){
	int n;
	cin >> n;
	Favnum(n);
}
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int c;
	cin >> c;
	string k;
	for(int i = 0; i< c; i++){
		cin >> k;
	}
	
	for(int i = 0; i<c; i++){
	string m = k;
	reverse(m.begin(), m.end());
	
	if(m==k){
		cout << "YEs" << endl;
		
	}
	else{
		cout << "No" << endl;
		break;
	}
}
	
}



























