#include <iostream>
#include<string>
class ClearDigits
{
private:
    std::string s;

public:
    std::string remove(std::string word)
    {
        s  = word;
        while (true)
        {
            size_t digitPos = s.find_first_of("0123456789");
            if (digitPos == std::string::npos)
            {
                break;
            }
            size_t leftPos = digitPos;
                if (leftPos > 0 && isdigit(s[leftPos - 1]))
                {
                    --leftPos;
                }
                if (leftPos > 0)
                {
                    s.erase(leftPos - 1, 1);
                    --digitPos;
                }
                s.erase(digitPos, 1);
        }

        return s;
    }
};
int main(){
 ClearDigits w;
    std::cout<<w.remove("c34bqr");
}