class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int count[2] = {0, 0};

        // Count students who want each type
        for (int student : students) {
            count[student]++;
        }

        // Go through sandwiches from top to bottom
        for (int sandwich : sandwiches) {
            
            // Nobody wants this sandwich
            if (count[sandwich] == 0) {
                break;
            }

            // One student eats it
            count[sandwich]--;
        }

        // Remaining students
        return count[0] + count[1];
    }
};