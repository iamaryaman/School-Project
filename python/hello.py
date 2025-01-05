from PIL import Image
import hashlib

def image_to_encryption_key(image_path):
    # Open the image
    img = Image.open(image_path).convert('RGB')  # Ensure RGB format
    pixels = list(img.getdata())  # Get pixel values as a list
    
    # Serialize pixel data
    pixel_data = ''.join([f'{r},{g},{b}' for r, g, b in pixels])
    
    # Create a hash (e.g., SHA-256) of the pixel data
    key = hashlib.sha256(pixel_data.encode('utf-8')).hexdigest()
    
    return key

# Example usage
image_path = "path_to_your_image.jpg"
encryption_key = image_to_encryption_key(image_path)
print(f"Generated Encryption Key: {encryption_key}")
