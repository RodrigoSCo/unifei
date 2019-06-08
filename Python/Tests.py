import cv2 as cv
import numpy as np
import pandas as pd

pic = np.zeros((500,500,3))
cv.rectangle(pic,(125,125),(375,375),5,lineType=8, shift=0)
cv.line(pic,(125,125),(375,375),5,lineType=8, shift=0)
cv.circle(pic,(250,250),200,5,lineType=8, shift=0)
cv.imshow('rectangle',pic)
cv.waitKey(0)
cv.destroyAllWindows()
