import requests,json
import re

data=input("Enter Key: ")
ida=int(input("Enter id: "))
base='https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date=2015-6-3&api_key='
url=base+data
#print(url)
resp=json.loads(requests.get(url).text)
rep=dict(resp)
#print("Dic:\n",resp)
print("IMG_URL:\n",rep['photos'][ida]['img_src'])


