# 🔐 Simple Password Encryption & Decryption in C++

This console-based C++ application implements a **custom symmetric encryption algorithm** that modifies each character in a password string using a 4-digit parameter. The same parameter is used to decrypt the string back to its original form.

---

## 🎯 Features

- Encrypts a password using basic ASCII shifting
- Decrypts the encrypted password using the same parameter
- Splits the password into two halves for two-part encryption
- Accepts a 4-digit integer (e.g., `1423`) as the encryption key

---

## 🧠 How It Works

- The 4-digit parameter is split:
  - `first = param / 100` → used for the **first half** of the password
  - `second = param % 100` → used for the **second half**
- Each character's ASCII value is shifted by `+first` or `+second`
- Decryption reverses this with `-first` and `-second`

---

## 🛠️ Build and Run

```bash
g++ -o passcrypt PasswordEncryptor.cpp
./passcrypt
