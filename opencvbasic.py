import cv2

image = cv2.imread(r'C:\Users\Aryaman\Desktop\road.jpg')

h,w = image.shape[:2]

print(f"height = {h}, and width {w}")