class Date
{
public:
	Date() { month = year = day = 0; }
	Date(int m, int y, int d) : month(m), year(y), day(d) {}
	~Date() {}
	std::string convert(int month)
	{
		std::string months[12] =
		{
			"January", "February", "March", "April",
			"May", "Jun", "July", "August",
			"September", "October", "November", "December"
		};
		return (month > 12 || month < 1) ? "INVALID" : months[month - 1];
	}
	void Print(int printingWay)
	{
		if (day == 0 || month == 0 || year == 0)
		{
			cout << "NOTHING IS SET";
			return;
		}
		switch (printingWay)
		{
		case 1:
			cout << day << "/" << month << "/" << year;
			break;
		case 2:
			cout << convert(month) << " " << day << "," << year;
			break;
		case 3:
			cout << day << " " << convert(month) << " " << year;
			break;
		default:
			cout << day << "/" << month << "/" << year;
			break;
		}
	}
private:
	int month, year, day;
};


int main()
{
	Date d(3, 2020, 29);
	d.Print(1);
	cout << endl;
	d.Print(2);
	cout << endl;
	d.Print(1);
}