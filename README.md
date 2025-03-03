# 🚀 Git Push Automation

This script automates the process of **staging, committing, and pushing** changes to a **GitHub repository**. It supports both **PowerShell (`git_push_all.ps1`)** and **Python (`git_push_all.py`)**.

---

## 📌 Features
✅ **Automates Git workflow** (add, commit, push)  
✅ **Automatically installs dependencies** (`gitpython` for Python)  
✅ **Works on Windows, Mac, and Linux** (Python version)  
✅ **Bypasses PowerShell script execution restrictions**  

---

## 🔧 Setup & Installation

### **Option 1: Using Python**
> **Python 3.6+ is required.** If you don’t have Python, [download it here](https://www.python.org/downloads/).

1. **Clone the repository**:
   ```bash
   git clone https://github.com/your-username/git_push_automation.git
   cd git_push_automation
   ```
2. **Run the Python script**:
   ```bash
   python git_push_all.py
   ```
   - If `gitpython` is not installed, the script **automatically installs it**.
   - The script will **ask for a commit message** before pushing.

---

### **Option 2: Using PowerShell (Windows Only)**
1. **Open PowerShell and navigate to the folder**:
   ```powershell
   cd C:\Users\YourName\Documents\GitHub\git_push_automation
   ```
2. **Run the script**:
   ```powershell
   .\git_push_all.ps1
   ```
   - If execution policy blocks it, the script **creates a batch file** to relaunch in bypass mode.
   - The script will **ask for a commit message** before pushing.

---

## 🚀 Usage
- **Make sure you are inside a Git repository** before running the script.
- **Follow the on-screen instructions** to enter a commit message.
- **Your changes will be pushed to `origin/main` automatically**.

---

## 🛠 Troubleshooting

### **PowerShell script won’t run?**
🔹 Try running manually in Bypass mode:
```powershell
powershell -ExecutionPolicy Bypass -File .\git_push_all.ps1
```

### **Python not installed?**
🔹 Download Python from [python.org](https://www.python.org/downloads/) and install it.

### **GitPython not installed?**
🔹 The script will install it automatically, but you can also do it manually:
```bash
pip install gitpython
```

---

## 🎯 Future Improvements
- ✅ Add **automatic branch detection**.
- ✅ Implement **error logging**.
- ✅ Add **support for multiple remotes**.

---

## 📜 License
MIT License. Feel free to modify and use this script in your projects.

---

## ✨ Contributing
Pull requests are welcome! If you find a bug or have suggestions, **open an issue**.