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
def opml_txt(text):
    """ function to turn opml file into textfile"""
    print(text)

    urls = []
    texts = []
    filename = "infile.xml"

#  Parse the input file.
    try:
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
        
    except Exception as error:
            print("Problem with input file infile.xml".format(error))
    else:
            print("Input file infile.xml parsed")

# Create the output file.
    try:
        with open("outfile.txt", "w") as myoutfile:
            for i, j in zip(urls, texts):
                myoutfile.write('{0}  "~{1}"  youtube'.format(i, j) + '\n')
    except Exception as error:
            print("Problem making output file".format(error))
    else:
            print("Output file outfile.txt created")

    print("End")

if __name__ == '__main__':
    opml_txt("Start in main")
else:
    opml_txt("Imported {}".format(__name__))
# =====================END===============================
