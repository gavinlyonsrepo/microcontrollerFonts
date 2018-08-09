Description
---------

Converts the opml(Xml) file of a youtube user subscriptions provided by youtube, 
into a text file which can added to rss feeder setup. 
file like newsboat for example. Thus converting your youtube subscriptions,
into a group of tagged RSS feeds.

Input:

Infile.xml file

Output:

Output.txt file in following format

[url] ~"[video_title]" [tag]

https://www.youtube.com/feeds/videos.xml?channel_id=UCI0vQvr9aFn27yR6Ej6n5UA  "~Python Training by Dan Bader"  youtube

where tag = youtube

usage
--------

1. Download the file, youtube_sub_convert.py.
2. In a web browser navigate to subscription manager page of youtube.
https://www.youtube.com/subscription_manager
3. At bottom of page click on ""Export to RSS readers Export subscriptions".
4. This subscription_manager file will be downloaded an opml(xml) file.
5. Rename it infile.xml.
6. copy it to same folder as script.
7. run script. python3 youtube_sub_convert.py.
8. A file called output.txt will be created. copy this into rss reader setup files.
 
 
