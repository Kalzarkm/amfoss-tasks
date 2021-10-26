import requests,json
import re

data=input("Enter Key: ")
ida=int(input("Enter id(0,1,2..): "))
idt1=(input("Enter date in form YYYY-MM-DD: "))
idt2=idt1+"&api_key="
base='https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date='
url=base+idt2+data
resp=json.loads(requests.get(url).text)
rep=dict(resp)
print("IMG_URL:\n",rep['photos'][ida]['img_src'])


