import cv2 as cv
import numpy as np

pic1 = cv.imread('0.jpeg', 0)
thresholdv = 100
(T_value, B_threshold) = cv.threshold(pic1, thresholdv, 255, cv.THRESH_BINARY)
cv.imshow('test', B_threshold)


pic = np.zeros((500, 500, 3))
cv.rectangle(pic, (125, 125), (375, 375), (255, 0, 0), lineType=8, shift=0)
cv.line(pic, (125, 125), (375, 375), (0, 0, 255), lineType=8, shift=0)
cv.circle(pic, (250, 250), 179, (0, 255, 0), lineType=8, shift=0)
cv.imshow('rectangle', pic)
cv.waitKey(0)
cv.destroyAllWindows()
# -----------------------------
matrix = (7, 7)
blur = cv.GaussianBlur(pic1, matrix, 0)
cv.imshow('blur', blur)
cv.waitKey(0)
cv.destroyAllWindows()
