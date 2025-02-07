#include "iostream"
using namespace std;


class ReverseWords{

    public:

    int arrayInput(char arr[100]){
        int i = 0;
        char ch;
    cout << "Enter the string: ";
        while(i <= 100){
            ch = getchar();

            if (ch == '\n'){
                break;
            }
            else{
                arr[i] = ch;
                i++;
            }
        }
        arr[i] = '\0';

        return i;
    }

    void display(char arr[100], int length){
        cout << "String: ";
        for (int i = 0; i < length; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
    void reverseWholeString(char arr[], int length){

        for (int i = 0; i < length/2; i++)
        {
            char temp = arr[i];
            arr[i] = arr[length - i - 1];
            arr[length - i - 1] = temp;
        }
        
    }
    void reversWords(char arr[100], int length){
        int start = 0;
        for (int i = 0; i <= length; i++)
        {
            if (arr[i] == ' ' || arr[i] == '\0')
            {
                int end = i - 1;

                while (start < end)
                {
                    char temp = arr[start];
                    arr[start] = arr[end];
                    arr[end] = temp;
                    start++;
                    end--;
                }
                start = i + 1;
                
            }
            
        }
        
    }

};

int main(){

   

    
}
