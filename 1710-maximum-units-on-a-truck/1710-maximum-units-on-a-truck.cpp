class Solution {
public:
    bool static compare(const vector<int> &v1, const vector<int> &v2){
        return v1[1]>v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int result = 0;
        for(int i = 0; i<boxTypes.size(); i++){
            if(truckSize>=boxTypes[i][0]){
                result += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else if(truckSize>0 && truckSize<boxTypes[i][0]){
                result += truckSize*boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else break;
        }
        return result;
    }
};