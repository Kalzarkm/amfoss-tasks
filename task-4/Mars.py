import requests,json
import re

data=input("Enter Key: ")
roverid=int(input("Enter rover id (5=Curiosity, 6=Opportunity, 7=Spirit): "))

rovna=""

if roverid==5:
    rovna="curiosity"
elif roverid==6:
    rovna="opportunity"
elif roverid==7:
    rovna="spirit"
else:
    print("Wrong id")
    exit()

idt1=(input("Enter date in form YYYY-MM-DD: "))
ida=int(input("Enter image id (0,1,2..): "))
idt2=rovna+"/photos?earth_date="+idt1+"&api_key="

base='https://api.nasa.gov/mars-photos/api/v1/rovers/' 

url=base+idt2+data

resp=json.loads(requests.get(url).text)
rep=dict(resp)

print("IMG_URL:\n",rep['photos'][ida]['img_src'])


