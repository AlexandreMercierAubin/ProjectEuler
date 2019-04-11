#import<vector>
using namespace std;

public class InfiniteNumber
{
    vector<short int> number;
    public InfiniteNumber(string strNum)
    {
        number = vector(strNum.size());
        for(int i = 0; i< number.size(); ++i)
        {
            number[i] = strNum[number.size() - 1 - i] - '0';
        }   
    }

    public InfiniteNumber(vector<short int> initNumber){number = initNumber;}

    public vector<short int> toVector()
    {
        return number;
    } 

    public vector<short int> addNumbers(vector<short int> &longer, vector<short int> &shorter){
        vector<short int> result;

        short int rest = 0;
        for(int i = 0; i < shorter.size(); ++i){
            short int value = rest + shorter[i] + longer[i];

            if(value >= 10){
                value = value - 10;
                rest = 1;
            }else{
                rest = 0;
            }

            result.push_back(value);
        }

        return result;
    }

    public InfiniteNumber & operator+(InfiniteNumber addedNum)
    {
        vector<short int> result;
        vector<short int> addedVec = addedNum.toVector();
        if(number.size()>addedVec.size()){
            result = addNumbers(number, addedVec);
        }
        else{
            result = addNumbers(addedVec, number);
        }
        return result;
    }    
}