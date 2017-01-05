#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <algorithm>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	vector<int> res;
	if (nums1.empty() || nums2.empty())
		return  res;

	unordered_map<int, size_t> isu;
	for (const auto e : nums1)
		isu[e] = 1;
	for (const auto e : nums2) {
		if (isu.find(e) != isu.end()) {
			res.push_back(e);
			isu.erase(isu.find(e));
		}
	}
	

	return res;
}
vector<int> intersection1(vector<int>& nums1, vector<int>& nums2) {
	// Write your code here
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	vector<int> intersect;
	vector<int>::iterator it1 = nums1.begin(), it2 = nums2.begin();
	while ((it1 != nums1.end()) && (it2 != nums2.end())) {
		if (*it1 < *it2) it1++;
		else if (*it1 > *it2) it2++;
		else {
			intersect.push_back(*it1);
			it1++; it2++;
		}
	}

	auto last = unique(intersect.begin(), intersect.end());
	intersect.erase(last, intersect.end());
	return intersect;
}
int main() {


}