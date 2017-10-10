from hashlib import md5
from base64 import *
from Crypto import Random
from Crypto.Cipher import AES

BLOCK_SIZE = 16  
pad = lambda s: s + (BLOCK_SIZE - len(s) % BLOCK_SIZE) * \
                chr(BLOCK_SIZE - len(s) % BLOCK_SIZE)
unpad = lambda s: s[:-ord(s[len(s) - 1:])]

class AESCipher:
    def __init__(self, key):
        self.key = md5(key.encode('utf8')).hexdigest()

    def encrypt(self, raw):
        raw = pad(raw)
        iv = Random.new().read(AES.block_size)
        cipher = AES.new(self.key, AES.MODE_CBC, iv)
        return b64encode(iv + cipher.encrypt(raw))

msg = input('Message...: ')
pwd = input('Password..: ')

c = AESCipher(pwd).encrypt(msg)
print (c)