# Cryptography
Strong encryption of messages

#Runing the program
Start with Crypt_Alien.cpp (The other files can be ignored if you wish).
Once you run it write a phrase and press enter. There will be a sentence of "nonsence" characters generated, that is your encrypted phrase.
As the compiler suggests, press 1 to give another phrase to encrypt or 2 to decrypt the phrase.
                    
                      --- Read the #How it works part first ---
                    
If you want to change the alphabet you're using go to: <Alien_alphabet_generator.cpp>
You can mess around with the alien characters to use (defaults are π, ' and .) by changing the code. If you want to change the number of alien characters you'd have to change the <Crypt_Alien.cpp> code as well as the <Code_Organizer.cpp>.

Once done, run the code and the will produce a lot of if statements. Copy paste those to the <Crypt_Alien.cpp> code on the "Alphabet to alien" section.

Then you run <Code_Organizer.cpp>. Paste the lines of if statements to the compiler.
-Note- The program is not well-polished so try pasting them like they are generated from <Crypt_Alien.cpp>. I am somewhat facing a glitch on my laptop and have to paste the lines in groups (approx ~20 to be sure).

#How it works
This program works by taking in a sentence and transcribing it to an "Alien language". The transcription happens so that only the person possessing the alphabet -which is generated in a random way that can take improvements- can decrypt this, directly at least. The concept of this encryption is quite simple, every character in the english alphabet, the digits from 0 to 9 as well as some other ascii characters have an equivalent from the "Alien alphabet".
