# 🚀 Git Push Automation (PowerShell Version)

This PowerShell script automates the process of **staging, committing, and pushing** changes to a **GitHub repository**.  
It also **bypasses execution policy restrictions** to ensure smooth execution on any system.

---

## 📌 Features
✅ **Automates Git workflow** (add, commit, push)  
✅ **Bypasses execution policy restrictions automatically**  
✅ **Works on Windows (PowerShell 7+)**  
✅ **No additional dependencies required**  

---

## 🔧 Setup & Installation

### **Step 1: Clone the Repository**
```powershell
git clone https://github.com/globey-code/git_push_automation.git
cd git_push_automation
```

### **Step 2: Run the PowerShell Script**
1. **Open PowerShell and navigate to the script directory**:
   ```powershell
   cd C:\Users\YourName\Documents\GitHub\git_push_automation
   ```
2. **Run the script**:
   ```powershell
   .\git_push_all.ps1
   ```

---

## 🚀 Usage
- **Make sure you are inside a Git repository** before running the script.
- **Follow the on-screen instructions** to enter a commit message.
- **Your changes will be pushed to `origin/main` automatically**.

---

## 🛠 Troubleshooting

### **PowerShell script won’t run due to execution policy?**
🔹 Try running manually in Bypass mode:
```powershell
powershell -ExecutionPolicy Bypass -File .\git_push_all.ps1
```

### **PowerShell execution policy is blocking scripts?**
🔹 Change the execution policy to allow script execution:
```powershell
Set-ExecutionPolicy -ExecutionPolicy Bypass -Scope CurrentUser -Force
```

### **Git is not installed?**
🔹 Download and install Git from [git-scm.com](https://git-scm.com/).

### **Git repository not detected?**
🔹 Ensure you are inside a valid Git repository:
```powershell
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