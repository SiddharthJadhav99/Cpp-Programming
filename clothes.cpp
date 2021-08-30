#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int getVisibleClothes(int input1, int input2, int **input3){
    vector<int> xArr;
	vector<int> yArr;
		int k = 0;
		for (int i = 0; i < input2; i++)

		{
			xArr[k] = input3[i][0];
			k++;
		}

		k = 0;
		for (int i = 0; i < input2; i++)

		{
			yArr[k] = input3[i][1];
			k++;
		}

        sort(xArr.begin(), xArr.end());
        sort(yArr.begin(), yArr.end());
		int overlapping = 0;
		int count = 0;
		for (int i = 0; i < yArr.size() - 1; i++) {
			if (yArr[i] <= xArr[i + 1]) {
				overlapping++;

			} else
				count++;
		}
		return overlapping;
}

int main(){
    int input1;
    int input2;
    cin >> input1 >> input2;
    int **input3 = new int*[input2];
    for(int i = 0; i < input2; i++){
        input3[i] = new int[2];
    }
    for(int i = 0; i < input2; i++){
        for(int j = 0; j < 2; j++){
            cin >> input3[i][j];
        }
    }
    cout << getVisibleClothes(input1, input2, input3);
    return 0;

    
}
