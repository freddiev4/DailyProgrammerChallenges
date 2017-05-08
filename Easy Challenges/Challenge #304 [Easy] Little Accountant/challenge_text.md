#Description

Your task is to design a program to help an accountant to get balances from accounting journals.

#Formal Inputs & Outputs
##Input files
###Journal
The first input is accounting journals

    ACCOUNT;PERIOD;DEBIT;CREDIT;
    1000;JAN-16;100000;0;
    3000;JAN-16;0;100000;
    7140;JAN-16;36000;0;
    1000;JAN-16;0;36000;
    1100;FEB-16;80000;0;
    1000;FEB-16;0;60000;
    2000;FEB-16;0;20000;
    1110;FEB-16;17600;0;
    2010;FEB-16;0;17600;
    1000;MAR-16;28500;0;
    4000;MAR-16;0;28500;
    2010;MAR-16;17600;0;
    1000;MAR-16;0;17600;
    5000;APR-16;19100;0;
    1000;APR-16;0;19100;
    1000;APR-16;32900;0;
    1020;APR-16;21200;0;
    4000;APR-16;0;54100;
    1000;MAY-16;15300;0;
    1020;MAY-16;0;15300;
    1000;MAY-16;4000;0;
    4090;MAY-16;0;4000;
    1110;JUN-16;5200;0;
    2010;JUN-16;0;5200;
    5100;JUN-16;19100;0;
    1000;JUN-16;0;19100;
    4120;JUN-16;5000;0;
    1000;JUN-16;0;5000;
    7160;JUL-16;2470;0;
    2010;JUL-16;0;2470;
    5500;JUL-16;3470;0;
    1000;JUL-16;0;3470;

###Chart of accounts

    ACCOUNT;LABEL;
    1000;Cash;
    1020;Account Receivables;
    1100;Lab Equipement;
    1110;Office Supplies;
    2000;Notes Payables;
    2010;Account Payables;
    2110;Utilities Payables;
    3000;Common Stock;
    4000;Commercial Revenue;
    4090;Unearned Revenue;
    5000;Direct Labor;
    5100;Consultants;
    5500;Misc Costs;
    7140;Rent;
    7160;Telephone;
    9090;Dividends;

##User input
User input has the following form

AAAA BBBB CCC-XX DDD-XX EEE

AAA is the starting account (* means first account of source file), BBB is the ending account(* means last account of source file), CCC-YY is the first period (* means first period of source file), DDD-YY is the last period (* means last period of source file), EEE is output format (values can be TEXT or CSV).


###Examples of user inputs

    12 5000 MAR-16 JUL-16 TEXT

This user request must output all accounts from acounts starting with "12" to accounts starting with "5000", from period MAR-16 to JUL-16. Output should be formatted as text.

    2 * * MAY-16 CSV

This user request must output all accounts from accounts starting wiht "2" to last account from source file, from first periof of file to MAY-16. Output should be formatted as CSV.


##Outputs

**Challenge Input 1**

    * 2 * FEB-16 TEXT

**Output 1**

    Total Debit :407440 Total Credit :407440
    Balance from account 1000 to 2000 from period JAN-16 to FEB-16
    
    Balance:
    ACCOUNT         |DESCRIPTION     |           DEBIT|          CREDIT|         BALANCE|
    -------------------------------------------------------------------------------------
    1000            |Cash            |          100000|           96000|            4000|
    1100            |Lab Equipement  |           80000|               0|           80000|
    1110            |Office Supplies |           17600|               0|           17600|
    2000            |Notes Payables  |               0|           20000|          -20000|
    TOTAL           |                |          197600|          116000|           81600|


**Challenge Input 2**
    
    40 * MAR-16 * CSV

**Challenge Output 2**

    Total Debit :407440 Total Credit :407440
    Balance from account 4000 to 9090 from period MAR-16 to JUL-16
    
    
    Balance:
    ACCOUNT;DESCRIPTION;DEBIT;CREDIT;BALANCE;
    4000;Commercial Revenue;0;82600;-82600;
    4090;Unearned Revenue;0;4000;-4000;
    4120;Dividends;5000;0;5000;
    5000;Direct Labor;19100;0;19100;
    5100;Consultants;19100;0;19100;
    5500;Misc Costs;3470;0;3470;
    7160;Telephone;2470;0;2470;
    TOTAL;;49140;86600;-37460;

#Notes/Hints

##Controls

Before calcultating any balance, the program must check that the input journal file is balanced (total debit = total credit).

##Accountancy reminder

In accountancy: balance = debit - credit.

#Finally

Have a good challenge idea, like /u/urbainvi did?

Consider submitting it to /r/dailyprogrammer_ideas