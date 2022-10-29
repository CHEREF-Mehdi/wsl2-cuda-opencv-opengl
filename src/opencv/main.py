import cv2

img = cv2.imread('img/hand.jpg')


cv2.imshow('img',img)

cv2.waitKey(0)

res = cv2.waitKey(0)
print('You pressed %d (0x%x), LSB: %d (%s)' % (res, res, res % 256,
    repr(chr(res%256)) if res%256 < 128 else '?'))

cv2.destroyAllWindows()