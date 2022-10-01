#pragma once
class Validation
{
public:
	static bool checkName(string name) {
		bool flag = true;
		if (name.size() >= 5 && name.size() <= 20) {
			for (int i = 0; i < name.length(); i++) {
				if ((name[i] <= 'a' && name[i] >= 'z') || ((name[i] <= 'A' && name[i] >= 'A'))) {
					flag = false;
				}
				
			}
		}
		else {
			flag = false;
		}
		return flag;
	}
	static bool checkPassword(string pass) {
		if (pass.size() >= 5 && pass.size() <= 20) {
			return true;
		}
		else {
			return false;
		}
	}
	static bool checkBalance(double balance) {
		if (balance >= 1500) {
			return true;
		}
		else {
			return false;
		}
	}
	static bool checkSalary(double salary) {
		if (salary >= 5000) {
			return true;
		}
		else {
			return false;
		}
	}
};

