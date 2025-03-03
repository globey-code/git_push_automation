import os
import sys
import subprocess

# Function to check and install GitPython
def install_gitpython():
    try:
        import git  # Try importing GitPython
    except ImportError:
        print("🔄 GitPython is not installed. Installing it now...")
        subprocess.check_call([sys.executable, "-m", "pip", "install", "gitpython"])
        import git  # Import again after installation

# Ensure GitPython is installed before running the script
install_gitpython()

import git  # Now it's safe to import GitPython

# Get the current directory (assumes the script is inside the project folder)
project_path = os.getcwd()

print(f"🔄 Detected project directory: {project_path}")

# Check if it's a valid Git repository
if not os.path.exists(os.path.join(project_path, ".git")):
    print("❌ This directory is not a Git repository. Please initialize it first using 'git init'.")
    sys.exit(1)

try:
    # Load the Git repository
    repo = git.Repo(project_path)

    # Show git status
    print("🔍 Checking for changes...")
    print(repo.git.status())

    # Stage all changes
    print("📌 Staging all changes...")
    repo.git.add(all=True)

    # Ask for commit message
    commit_message = input("✍️  Enter your commit message: ").strip()
    if not commit_message:
        print("❌ Commit message cannot be empty. Please run the script again with a valid message.")
        sys.exit(1)

    # Commit changes
    repo.git.commit(m=commit_message)

    # Push changes to GitHub
    print("📤 Pushing changes to GitHub...")
    repo.git.push("origin", "main")

    print("✅ Push completed successfully!")

except Exception as e:
    print(f"❌ Push failed! Error: {e}")
    print("Try running 'git pull origin main --rebase' first.")
    sys.exit(1)
