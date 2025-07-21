from google import genai

# Please make sure you run this before executuing this program
# source .venv/bin/activate

client = genai.Client(api_key="AIzaSyDQyO-fPN-gR-h6BWuq1oVS0GqYpY71-vI")

topic = input("What do you want to do in Toronto, Canada? ")

response = client.models.generate_content(
    model="gemini-2.5-flash",
    contents="If I was in toronto, canada, how can I do " + topic
)
print(response.text)