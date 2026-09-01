class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0.0;

    int minn = *min_element(salary.begin(), salary.end());
    int maxx = *max_element(salary.begin(), salary.end());

    for (int i = 0; i < salary.size(); i++)
    {
        if (minn == salary[i] || maxx == salary[i])
        {
            continue;
        }
        else
        {
            sum += salary[i];
        }
    }

    return sum / (salary.size() - 2);
        
    }
};