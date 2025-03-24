class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        vector<vector<int>> mergedMeetings;
        for(int i=0;i<meetings.size();i++){
            if(mergedMeetings.empty() || meetings[i][0]>mergedMeetings.back()[1]){
                mergedMeetings.push_back(meetings[i]);
            } 
            else{
                mergedMeetings.back()[1] = max(mergedMeetings.back()[1], meetings[i][1]);
            }
        }
        int meetingDaysCount = 0;
        for(int i=0;i<mergedMeetings.size();i++){
            meetingDaysCount += (mergedMeetings[i][1]-mergedMeetings[i][0]+1);
        }
        return days - meetingDaysCount;
    }
};