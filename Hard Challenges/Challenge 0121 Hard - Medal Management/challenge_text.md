#Description

The moderators of [/r/DailyProgrammer](https://www.reddit.com/r/DailyProgrammer) give out medals (either gold or silver) as community rewards / community achievements. Though everyone has the two medal icons next to their names, the actual amount you have are reflected as two integers (gold first, then silver). The side-bar to the right has a section titled "Achievements System", which describes how medals are earned.

The problem though is that mods have to use the sub-Reddit's administration page to add the basic flair to a user and to change the medal count in any way. Though not hard, it certainly isn't a simple process, so we would like your help in building a better solution!

Your goal is to write a single web-page in JavasScript that "wraps" these admin features together in a nice single form. Essentially it should be a page with **minimal server-side code** or **you can ditch the idea of a page and just make a browser add-on (Chrome or FireFox please)**, when given Reddit login credentials, allows:

- Loading a user's flair string and type
- Saving a user's flair string and type
- Allowing a one-click +1 Gold and +1 Silver for any given Reddit username
- Load a user's [/r/DailyProgrammer](https://www.reddit.com/r/DailyProgrammer) post history for any given Reddit username

Reddit provides an external API interface for these purposes: [learn more about the web-based API here](http://www.reddit.com/dev/api).

**Though this will be a typical [hard] level challenge, we will be giving out a gold medal and Reddit gold (3 months) for the person who gives a fully-featured solution. Note that solutions must be open-source (hey, we want to use your system!) and you will be given full credits to it in our sub-Reddit's side-bar. Starting from today (Friday), all solutions are due in exactly 7 days: the competition ends at 11:55pm, American pacific time, UTC−8. It'll take about day to confirm who wins.**

To help get started, check out these Reddit JavaScript APIs: (note that none are a "perfect" solution, and some heavy work will be required)

- [Official Reddit API](http://www.reddit.com/dev/api)
- [Handson Reddit](https://github.com/timisbusy/handson-reddit)
- [Reddit JS Client](https://github.com/tommyvyo/reddit-js-client)

This is quite a big challenge to take on, so I'll be much more involved with responding to questions and comments. Good luck, and have fun!

**Edit 1**: Our awesome user [Skeeto](http://www.reddit.com/r/dailyprogrammer/comments/1dk7c7/05213_challenge_121_hard_medal_management/c9r4obj) has pointed out that a pure client-side implementation is not possible for security reasons; my bad! I've updated the rules to allow minimal server-side code or the choice of just making all of this a browser add-on.
