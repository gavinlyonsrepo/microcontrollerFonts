#!/usr/bin/env python3
"""python script to turn youtube opml sub file into text file for rss reader"""
# =========================HEADER=======================================
# title             : youtube_sub_convert.py
# description       : python script to turn youtube
# opml sub file into text file for rss reader newsboat.
# author            :Gavin Lyons
# date              :17/08/2017
# version           : 1.0
# web               :https://github.com/gavinlyonsrepo/
# mail              :glyons66@hotmail.com
# python_version    : 3.6

# ==========================IMPORTS======================
# Import the system modules needed to run 
from xml.etree import ElementTree


# =====================MAIN===============================
def test(test):
    """ function to turn opml file into textfile"""
    print(test)

    urls = []
    texts = []
    filename = "infile.xml"

    with open(filename, 'rt') as f:
        tree = ElementTree.parse(f)
    for node in tree.findall('.//outline'):
        url = node.attrib.get('xmlUrl')
        if url:
            urls.append(url)

    for node in tree.findall('.//outline'):
        text = node.attrib.get('text')
        if text:
            texts.append(text)

    texts.pop(0)

   # for i, j in zip(urls, texts):
    #    print('{0}  "{1}"  youtube'.format(i, j))

    try:
        with open("outfile.txt", "w") as myoutfile:
            for i, j in zip(urls, texts):
                myoutfile.write('{0}  "~{1}"  youtube'.format(i, j) + '\n')
    except Exception as error:
            print("Problem with output file".format(error))
    else:
            print("Output file created outfile.txt")


if __name__ == '__main__':
    test("main")
else:
    test("Imported {}".format(__name__))
# =====================END===============================
