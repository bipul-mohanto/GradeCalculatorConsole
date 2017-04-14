/* Software Development Lab Marking Calculator
Bipul Mohanto, Lecturer
VU
Date: 9/4/2017
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int answer;
    do{
    // Attendance 10 Marks
    int _NumberOfClass = 8;
    float _ClassAttendance;
    printf("Input Class Attendance: ");
    scanf("%f", &_ClassAttendance);
    float _AttendanceMark;
    _AttendanceMark = ((10*_ClassAttendance)/_NumberOfClass);
    printf("Class Attendance Mark: %.2f \n", _AttendanceMark);

    // Research Proposal 10 + Presentation 20 = 30
    float _ResearchProposal;
    printf("Input Research Proposal Mark: ");
    scanf("%f", &_ResearchProposal);
    float _PresentationMark;
    printf("Input Presentation Mark: ");
    scanf("%f", &_PresentationMark);

    //  Daily Assessment 15 + Question 10 + Final Work 35
     float _DailyAssessment;
     printf("Input Daily Assessment Mark: ");
     scanf("%f", &_DailyAssessment);

     float _Question;
     printf("Input Question Mark: ");
     scanf("%f", &_Question);

     float _FinalWork;
     printf("Input Final Work Mark: ");
     scanf("%f", &_FinalWork);

     float _TotalMark;
     _TotalMark = _AttendanceMark + _ResearchProposal + _PresentationMark + _DailyAssessment + _Question + _FinalWork;
     printf("\n Press 1 to continue. Press any Key To Exit ");
     scanf(" %d",&answer);
}
while(answer == 1 );

}
