# 🚀 Git Push Automation (C++ Version)

This C++ program automates the process of **staging, committing, and pushing** changes to a **GitHub repository**.  
It **automatically installs `libgit2`** and works on **Windows, Linux, and macOS**.

---

## 📌 Features
✅ **Automates Git workflow** (add, commit, push)  
✅ **Automatically installs dependencies (`libgit2`)**  
✅ **Works on Windows, Mac, and Linux**  
✅ **Compiles into a standalone `.exe` or binary file**  

---

## 🔧 Setup & Installation

### **Step 1: Clone the Repository**
```bash
git clone https://github.com/your-username/git_push_automation.git
cd git_push_automation
```

### **Step 2: Compile & Run (OS-Specific Instructions)**

#### **🔹 Windows (MinGW or MSVC)**
1. **Open Command Prompt (`cmd.exe`)** or **PowerShell**.
2. **Navigate to the script directory**:
   ```powershell
   cd C:\Users\YourName\Documents\GitHub\git_push_automation
   ```
3. **Compile the program using `g++` (MinGW required)**:
   ```powershell
   g++ git_push_all.cpp -o git_push_all.exe -lgit2
   ```
   If using **MSVC**, compile with:
   ```powershell
   cl git_push_all.cpp /Fegit_push_all.exe /Ipath\to\libgit2\include /link /LIBPATH:path\to\libgit2\lib libgit2.lib
   ```
4. **Run the compiled executable**:
   ```powershell
   .\git_push_all.exe
   ```

---

#### **🔹 Linux (Ubuntu/Debian)**
1. **Open Terminal**.
2. **Navigate to the project folder**:
   ```bash
   cd ~/Documents/GitHub/git_push_automation
   ```
3. **Install dependencies** (if not installed):
   ```bash
   sudo apt update && sudo apt install -y libgit2-dev g++
   ```
4. **Compile the program**:
   ```bash
   g++ git_push_all.cpp -o git_push_all -lgit2
   ```
5. **Run the program**:
   ```bash
   ./git_push_all
   ```

---

#### **🔹 macOS**
1. **Open Terminal**.
2. **Navigate to the project folder**:
   ```bash
   cd ~/Documents/GitHub/git_push_automation
   ```
3. **Install dependencies** (if not installed):
   ```bash
   brew install libgit2
   ```
4. **Compile the program**:
   ```bash
   g++ git_push_all.cpp -o git_push_all -lgit2
   ```
5. **Run the program**:
   ```bash
   ./git_push_all
   ```

---

## 🚀 Usage
- **Make sure you are inside a Git repository** before running the script.
- **Follow the on-screen instructions** to enter a commit message.
- **Your changes will be pushed to `origin/main` automatically**.

---

## 🛠 Troubleshooting

### **Getting `libgit2` Errors?**
🔹 **Windows**:
```powershell
vcpkg install libgit2
```
🔹 **Linux**:
```bash
sudo apt install libgit2-dev
```
🔹 **macOS**:
```bash
brew install libgit2
```

### **Compilation Issues?**
- Ensure `g++` or `cl` is installed and correctly linked.
- Check if `libgit2` is installed (`where libgit2` on Windows, `dpkg -s libgit2-dev` on Linux).

---

## 🎯 Future Improvements
- ✅ Add **branch selection**.
- ✅ Implement **error handling for push failures**.
- ✅ Support **multiple remotes**.

---

## 📜 License
MIT License. Feel free to modify and use this script in your projects.

---

## ✨ Contributing
Pull requests are welcome! If you find a bug or have suggestions, **open an issue**.