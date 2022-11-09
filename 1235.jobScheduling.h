#pragma once
int max_profit = 0;
int tmp_max = 0;
void DFSJOB(vector<int>& startTime, vector<int>& endTime, vector<int>& profit, int start) {
    for (int i = start; i < startTime.size(); i++) {
            int end = endTime[start];
            for (int j = i + 1; j < startTime.size(); j++) {
                    if (startTime[j] >= end) {
                        DFSJOB(startTime, endTime, profit, j);
                    }
            }
            max_profit = max(tmp_max, max_profit);
            tmp_max += profit[start];

            for (int j = i + 1; j < startTime.size(); j++) {
                    if (startTime[j] >= end) {
                        DFSJOB(startTime, endTime, profit, j);
                    }
            }
            max_profit = max(tmp_max, max_profit);
            tmp_max -= profit[start];
    }
}
int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    for (size_t i = 0; i < startTime.size(); i++) {
        DFSJOB(startTime, endTime, profit, i);
        tmp_max = 0;
    }

    return max_profit;
}


