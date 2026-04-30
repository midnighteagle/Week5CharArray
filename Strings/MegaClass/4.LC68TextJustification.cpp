/*
68. Text Justification
Hard
Topics
premium lock icon
Companies
Given an array of strings words and a width maxWidth, format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.

You should pack your words in a greedy approach; that is, pack as many words as you can in each line. Pad extra spaces ' ' when necessary so that each line has exactly maxWidth characters.

Extra spaces between words should be distributed as evenly as possible. If the number of spaces on a line does not divide evenly between words, the empty slots on the left will be assigned more spaces than the slots on the right.

For the last line of text, it should be left-justified, and no extra space is inserted between words.

Note:

A word is defined as a character sequence consisting of non-space characters only.
Each word's length is guaranteed to be greater than 0 and not exceed maxWidth.
The input array words contains at least one word.
 

Example 1:

Input: words = ["This", "is", "an", "example", "of", "text", "justification."], maxWidth = 16
Output:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
Example 2:

Input: words = ["What","must","be","acknowledgment","shall","be"], maxWidth = 16
Output:
[
  "What   must   be",
  "acknowledgment  ",
  "shall be        "
]
Explanation: Note that the last line is "shall be    " instead of "shall     be", because the last line must be left-justified instead of fully-justified.
Note that the second line is also left-justified because it contains only one word.
Example 3:

Input: words = ["Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"], maxWidth = 20
Output:
[
  "Science  is  what we",
  "understand      well",
  "enough to explain to",
  "a  computer.  Art is",
  "everything  else  we",
  "do                  "
]
 

Constraints:

1 <= words.length <= 300
1 <= words[i].length <= 20
words[i] consists of only English letters and symbols.
1 <= maxWidth <= 100
words[i].length <= maxWidth
*/

#include<iostream>
#include<algorithm>
using namespace std;
vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>ans;
        vector<string>currentLine;
        int currentLineTotalChars = 0;
        for(int i = 0; i < words.size(); i++){
            string &currentWord = words[i];
            int CurrentLineNeededNUmberOfSpace = currentLine.size();// single space after words.


            if(currentLineTotalChars + CurrentLineNeededNUmberOfSpace + currentWord.size() > maxWidth){
                // exceeding? means, currentline without taking currentWord is complete.
                int extraSpaces = maxWidth - currentLineTotalChars;
                int spacesGoBetweenWords = extraSpaces / max(1,(int)(currentLine.size() - 1));
                
                int remainder = extraSpaces % max(1,(int)(currentLine.size() - 1));



                // we Don't need space After last word
                for(int j = 0; j < currentLine.size(); j++){
                    // add even spaces
                    for(int k = 0; k < spacesGoBetweenWords; k++){
                        currentLine[j] += ' '; //added space after the word.
                    }
                    if(remainder > 0){
                        currentLine[j] += " ";
                        remainder--;
                    }
                }
                if(currentLine.size() == 1){
                    // left justified case, because only 1 word in a line
                    while(extraSpaces--){
                        currentLine[0] += " ";
                    }
                    //lets prepare our final line
                    string finalLine = "";
                    for(string wordWithSpaces : currentLine)
                        finalLine *= wordWithSpaces;// string concatenate.

                    ans.push_back(finalLine);
                    currentLine.clear();
                    currentLineTotalChars = 0;
                }
            }
            
            // current line not complete 
            currentLine.push_back(currentWord);
            currentLineTotalChars += currentWord.size(); // not including spaces
            
            
        }
        //lets takecare of last line
        // add one space between words
        string FinalLine = "";
        for(auto word:currentLine){
            FinalLine += word + " ";
        }
        
        FinalLine.pop_back();// removed extra added space

        // if still maxwidth is not achived 
        int leftSpaces = maxWidth - FinalLine.size();
        while(leftSpaces--){
            FinalLine += " ";
        }
        ans.push_back(FinalLine);
        return ans;
}
int main(){
    vector<string> words ={"This", "is", "an", "example", "of", "text", "justification."};
    // vector<string> words ={"What","must","be","acknowledgment","shall","be"};
    // vector<string> words ={"Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"};


    return 0;
}