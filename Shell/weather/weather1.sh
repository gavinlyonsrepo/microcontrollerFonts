#!/bin/sh
MYLOC="cork"
echo "$MYLOC"
curl -s "http://api.wunderground.com/auto/wui/geo/ForecastXML/index.xml?query=${$MYLOC:-<YOURZIPORLOCATION>}"|perl -ne '/<title>([^<]+)/&&printf "%s: ",$MYLOC;/<fcttext>([^<]+)/&&print $MYLOC,"\n"';
