//求高精度幂
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int main() {
	int n;//幂数
	string s;// 输入的前六位
	while(cin>>s>>n) {
		int result[250]= {0};//存储结果
		char temp[6];//将输入的前六位转为数组
		int p=0,R=0;//P表示原始数据小数点后的有效位个数 ，R是不含小数点的数值
		int count = 0;
		for(int i = 0; i < 6 ; i++) { //找到小数点的位置
			if(s[i] == '.') {
				temp[i] = -1;//小数点标记成负一
				p =  5-i;//小数点后有几位
				continue;//把小数点标记
			}
			temp[i] = s[i];
		}
		//p=0说明没有小数点
		//倒着处理一次，把小数点后的无效0标记为-1,
		if( p != 0) {
			for(int i =5 ; i>=0 ; i--) {
				if(temp[i] != '0') {
					//除去无效0后，P的值
					p = p-(5-i);
					break;
				}
				temp[i] = -1;
			}
		}
		//	cout<<" P为"<<p<<endl;
		for(int i = 0; i < 6; i++) {
			if(temp[i] != -1) {
 
				R = R*10+(s[i]-'0');  //将输入输入的 R 提取出来
			}
		}
		//cout <<" R为"<<R<<endl;
		//把R整数转化成字符数组
		string med;
		stringstream ss;
		ss<<R;
		med = ss.str();
		int len = med.length();		//数据长度
		int m = p*n; //输出值里面小数点后应该有几位有效数
		int k=1;
		//cout <<" len为"<<len<<endl;
		for(int i = 1 ; i <= len ; i++) {
			result[249 - len+i] = med[i-1]-'0';//将初始值存入result,此时为R的有效值
		}
		while(n > 1) {
			int j = 249;
			int tp = 0;//临时存储
			++k;
			for(int j = 249; j >= 0 ; j--) {
				//每一个有效位位都乘以R值
				if( j <= 250 - k*len  && tp == 0 ) {//这里是为了满足100*100类似的末尾为0的情况
					continue;
				}
				int medi = result[j]*R+tp;
				tp = medi / 10;
				result[j] = medi % 10;
				//	cout<<j<<"位置的值是 "<< result[j] <<endl;
 
			}
			n--;
		}
		//开始处理输出，P是初始值小数点后面数据个数，n是幂数
		for(int i = 0 ; i<250 ; i++) {
			if(result[i] != 0) {
				count = 250 - i;//result里的有效数字
				break;
			}
		}
		if( m >= count) { //说明结果小于1
			if(count == 0) {//当结果为0
				cout<<0<<endl;
				continue;
			}
			cout << ".";
			for(int i = 250 - m; i < 250; i++) {
				cout << result[i];
			}
		} else { //结果大于1
			for(int i = 250 - count; i < 250; i++) {
				cout << result[i];
				if(i == 249 - m && i!=249) {
					cout << ".";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}