This is a small encryption based challenge made by pranav(I named it EnigmaChallenge, although I know it is nothing compared to the original challenge)


Here, you will find 4 text files and a executable(windows).


The 'encrypted.txt' is the output of a plain text containing a Key that is encrypted using an extremely weak encryption algorithm that I just made up. You are to find a way to identify the algorithm or a way to decrypt the file and obtain the key.


The 'half.txt' is the output of encrypted.txt decrypted using my algorithm with an almost identical password to the real one, with only one character changed.

The '0-9.txt' and 'A-T.txt' are outputs of my algorithm when tried to decrypt encrypted.txt using the passwords "01234567890123456789" and "ABCDEFGHIJKLMNOPQRST" respectively. 


The decryption and encryption are the same process. The password length is exactly 20.

The encryption is XOR based.

If you think you have obtained the key, use that in check.exe to make sure you have succeded or not.



(Trying to guess the password using check.exe only might mislead you as check.exe may have false positives. If you have identified the real password, encrypted.txt will output plain text and check.exe will identify)


GOOD LUCK!!!