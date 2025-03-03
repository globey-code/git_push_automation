# 🚀 Git Push Automation (Python Version)

This Python script automates the process of **staging, committing, and pushing** changes to a **GitHub repository**.  
It **automatically installs `gitpython`** if missing and works on **Windows, Mac, and Linux**.

---

## 📌 Features
✅ **Automates Git workflow** (add, commit, push)  
✅ **Automatically installs dependencies (`gitpython`)**  
✅ **Works on Windows, Mac, and Linux**  
✅ **No execution policy issues like PowerShell**  

---

## 🔧 Setup & Installation

### **Step 1: Clone the Repository**
```bash
git clone https://github.com/globey-code/git_push_automation.git
cd git_push_automation
```

### **Step 2: Run the Python Script**
1. **Ensure Python 3.6+ is installed**. Download it from [python.org](https://www.python.org/downloads/).
2. **Navigate to the script directory**:
   ```bash
   cd ~/Documents/GitHub/git_push_automation  # Linux/macOS
   cd C:\Users\YourName\Documents\GitHub\git_push_automation  # Windows
   ```
3. **Run the script**:
   ```bash
   python git_push_all.py
   ```
   - If `gitpython` is not installed, the script **automatically installs it**.
   - The script will **ask for a commit message** before pushing.

---

## 🚀 Usage
- **Make sure you are inside a Git repository** before running the script.
- **Follow the on-screen instructions** to enter a commit message.
- **Your changes will be pushed to `origin/main` automatically**.

---

## 🛠 Troubleshooting

### **Python not installed?**
🔹 Download Python from [python.org](https://www.python.org/downloads/) and install it.

### **GitPython not installed?**
🔹 The script will install it automatically, but you can also do it manually:
```bash
pip install gitpython
```

### **Git is not installed?**
🔹 Download and install Git from [git-scm.com](https://git-scm.com/).

### **Git repository not detected?**
🔹 Ensure you are inside a valid Git repository:
```bash
git init
```

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