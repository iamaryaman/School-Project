from PIL import Image
import hashlib
import base64
import ast

def encryption_key_to_image(encryption_key, output_image_path, width, height):
    # Decode the base64 encoded key back to pixel data
    decoded_data = base64.b64decode(encryption_key).decode('utf-8')
    pixel_data = ast.literal_eval(decoded_data)  # Convert string back to list
    
    # Ensure pixel data matches image dimensions
    if len(pixel_data) != width * height:
        raise ValueError("Pixel data does not match specified dimensions")
    
    # Create a new image and populate it with the pixel data
    img = Image.new('RGB', (width, height))
    img.putdata(pixel_data)
    
    # Save the image
    img.save(output_image_path)
    print(f"Image saved to {output_image_path}")

# Example usage
encryption_key = "base64_encoded_pixel_data_from_previous_step"
output_image_path = "reconstructed_image.jpg"
width, height = 100, 100  # Use the original dimensions of the image

encryption_key_to_image(encryption_key, output_image_path, width, height)
