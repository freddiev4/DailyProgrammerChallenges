
# [](#EasyIcon) *(Easy)*: Log throughput counter
You are responsible for a search engine of a large website and the servers are getting overloaded. You are pretty sure there's an increase in the number of queries per second, probably because someone is crawling you like there is no tomorrow. To be really sure you need to help the sysadmin in setting up a monitoring system which will alert everyone when the num. of queries per second reach a certain threshold. All he needs to get this going is a file that has one number corresponding to the number of queries in the past x seconds. The file needs to be updated every x seconds automatically so he can integrate that in his monitoring system.
You have a log file from the search engine which has one query per line and is constantly being written to. Now all you need to do is to come up with a little program that runs in the background with a very small footprint and is very efficient in counting the query throughput every x seconds. This count is then written to a file. It has to be very precise, so if the program is set to count the last 3 seconds it really needs to be 3.
If there are no entries in the past x seconds then obviously the file needs to show 0.
The output file and the interval should be options with default values.

*Author: soundjack*
# Formal Inputs & Outputs
## Input Description
The input is a growing log file. The script should read the input from stdin.
## Output Description
The output should be a file that contains only one single number that represents the number of lines counted in the last X seconds. For the purpose of this challenge it's ok if the output is stdout.
# Sample Inputs & Outputs
## Sample Input
    INFO : [query] [2012/12/10 19:19:51.819] 0c9250e0-3272-4e2c-bab4-0a4fd88e0d75  
    INFO : [query] [2012/12/10 19:19:52.108] 2e9cf755-7f39-4c96-b1c7-f7ccd0a573aa  
    INFO : [query] [2012/12/11 19:19:52.120] 336974ad-d2b6-48e6-93f7-76a92aca0f64  
    INFO : [query] [2012/12/11 19:19:52.181] 71b5f768-d177-47f8-b280-b76eb1e85138  
    INFO : [query] [2012/12/11 19:19:52.183] d44df904-9bc4-46c6-a0c0-e23992345tfd  
    INFO : [query] [2012/12/12 19:19:52.377] 25473f3a-5043-4322-a759-6930abe30c50  

## Sample Output
23
# Challenge Input
None needed
## Challenge Input Solution
None needed
# Note
None
				