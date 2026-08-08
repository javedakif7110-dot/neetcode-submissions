class Solution {
public:
    int calPoints(vector<string>& operations) {

        int num = 0;
        stack<int> s;

        for (string i : operations) {

            if (i != "+" && i != "C" && i != "D") {
                s.push(stoi(i));
            }

            else if (i == "+") {
                int a = s.top();
                s.pop();

                int b = s.top();

                s.push(a);
                s.push(a + b);
            }

            else if (i == "C") {
                s.pop();
            }

            else if (i == "D") {
                int a = s.top();
                s.push(2 * a);
            }
        }

        while (!s.empty()) {
            num += s.top();
            s.pop();
        }

        return num;
    }
};