/*
	Made by: DjCtavia

	This file only contain:
		- member variables
		- The prototype of the methods, as well as their properties (protected/private)
*/

class EternalDay
{	
	int m_Year = 2018;
	int m_Month = 11;
	int m_Day = 9;
	
	ref ConvertTime m_StartDay;
	ref ConvertTime m_EndDay;
	
	ref ScriptCallQueue m_Caller;
	
	/**
	Brief: Default constructor. The basic day setup is 8:00AM to 5:00PM
	*/
	void EternalDay();
	
	/**
	Brief: Set a specific time slot for day.
		param:
			float - The time at which the day begins
			float - The time at which the day ends
	*/
	void setDayTime(float startDay, float endDay);
	
	/**
	Brief: Change actual day time by a new one between [m_StartDay] and max [m_EndDay].
	*/
	void setRandomTime();
	
	/**
	Brief: Change game date by a new one.
	*/
	void setRandomDate();
	
	/**
	Brief: Change game date by user input.
		param:
			int - The new Year to set
			int - The new Month to set
			int - The new Day to set
	*/
	void setDate(int year, int month, int day);
	
	/**
	Brief: Add to the current date { m_Day+1 } if the time slot is exceeded or lower.
	*/
	private void setNewDay();
	
	/**
	Brief: Verify if the [startDay] and [endDay] are valid for a 24 hours format.
		param:
			float - Start of Day
			flaot - End of Day 
		return:
			bool - Is a valid range for a day ?
	*/
	private bool isValidStartAndEndDay(float startDay, float endDay);
	
	/**
	Brief: Verify if the [year] / [month] / day are valid.
		param:
			int - Year selected
			int - Month selected
			int - Day selected
		return:
			bool - Is a valid date ?
	*/
	private bool isValidDate(int year, int month, int day);
	
	/**
	Brief: Fix actual date of class if they are wrong.
	*/
	private void fixDate();
	
	/**
	Brief: Increment { m_Day+1 }. And increment { m_Month } if { m_Day } is superior to 30.
	*/
	void incrementDay();
	
	/**
	Brief: Increment { m_Month+1 }. And increment { m_Year } if { m_Month } is superior to 12.
	*/
	void incrementMonth();
};
