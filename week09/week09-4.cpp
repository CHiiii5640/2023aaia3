class Solution {
public:
    double average(vector<int>& salary) {
        double max=salary[0];
        double min=salary[0];
        double total=0;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]>max)
                max=salary[i];
            if(salary[i]<min)
                min=salary[i];
            total+=salary[i];
        }
        return (total-max-min)/(salary.size()-2);
    }
};
