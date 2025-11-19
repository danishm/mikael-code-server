from google import genai

# Please make sure you run this before executuing this program
# source .venv/bin/activate
# Mikael: thank you, my friends love it
# STEM teacher asked it to bake a pie!! 

client = genai.Client(api_key="AIzaSyDQyO-fPN-gR-h6BWuq1oVS0GqYpY71-vI")

topic = input("What do you want me to do?\n")

response = client.models.generate_content(
    model="gemini-2.5-flash",
    contents=topic
)
print(response.text)