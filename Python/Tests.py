import cv2 as cv
import numpy as np

pic1 = cv.imread('0.jpeg', 0)
thresholdv = 100
(T_value, B_threshold) = cv.threshold(pic1, thresholdv, 255, cv.THRESH_BINARY)
cv.imshow('test', B_threshold)
cv.imshow('Original', pic1)
cv.waitKey(0)
cv.destroyAllWindows()
# -----------------------------
# Drawing over images

pic = np.zeros((500, 500, 3))
cv.rectangle(pic, (125, 125), (375, 375), (255, 0, 0), lineType=8, shift=0)
cv.line(pic, (125, 125), (375, 375), (0, 0, 255), lineType=8, shift=0)
cv.circle(pic, (250, 250), 179, (0, 255, 0), lineType=8, shift=0)
cv.imshow('rectangle', pic)
cv.waitKey(0)
cv.destroyAllWindows()
# -----------------------------
# Image Filters

matrix = (7, 7)
blur = cv.GaussianBlur(pic1, matrix, 0)
kernel = 3
cv.imshow('Gaussian Blur', blur)
median = cv.medianBlur(pic1, kernel)
cv.imshow('Median Blur', median)
dimpixel = 5
color = 100
space = 100
filter = cv.bilateralFilter(pic1, dimpixel, color, space)
cv.imshow('Bileteral Blur', filter)
cv.imshow('Original', pic1)
cv.waitKey(0)
cv.destroyAllWindows()
# -----------------------------
# Canny Edge Detector
thresholdv1 = 50
thresholdv2 = 100

canny = cv.Canny(pic1, thresholdv1, thresholdv2)
cv.imshow('Canny Edge Detector', canny)
cv.imshow('Original', pic1)
cv.waitKey(0)
cv.destroyAllWindows()
# -----------------------------
# Loading Videos

vid = cv.VideoCapture('../../dva kings row_19-01-10_00-00-40.mp4')

while(vid.isOpened()):
    ret, frame = vid.read()
    cv.imshow('WINNAME', frame)
    if cv.waitKey(1) & 0xFF == ord('q'):
        break
vid.release()
cv.destroyAllWindows()
