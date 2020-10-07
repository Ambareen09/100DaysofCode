Problem link: https://practice.geeksforgeeks.org/problems/quadratic-equation-roots/0/?track=DSASP-Mathematics&batchId=154

class Solution 
{
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> roots;
        int root1 = 0, root2 = 0;
        // value of b^2-4ac
        int temp = (pow(b, 2) - 4 * a * c);

        // if b^2-4ac is less then zero then roots are imaginary
        if (temp < 0)
            roots.push_back(-1);
        else {
            // root1
            root1 = floor((-b + sqrt(temp)) / (2 * a));
            // root2
            root2 = floor((-b - sqrt(temp)) / (2 * a));

            roots.push_back(max(root1, root2));
            roots.push_back(min(root1, root2));
        }
        return roots;
    }
};
