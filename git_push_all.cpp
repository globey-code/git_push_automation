#include <iostream>
#include <cstdlib>   // For system() and OS detection
#include <git2.h>    // libgit2 header
#include <string>

using namespace std;

// Function to check and install libgit2 automatically
void installLibgit2() {
#ifdef _WIN32
    cout << "🔍 Checking for libgit2 on Windows..." << endl;
    system("where libgit2 || (echo Installing libgit2... & vcpkg install libgit2)");
#elif __APPLE__
    cout << "🔍 Checking for libgit2 on macOS..." << endl;
    system("brew list libgit2 || (echo Installing libgit2... && brew install libgit2)");
#elif __linux__
    cout << "🔍 Checking for libgit2 on Linux..." << endl;
    system("dpkg -s libgit2-dev || (echo Installing libgit2... && sudo apt update && sudo apt install -y libgit2-dev)");
#else
    cout << "❌ Unsupported OS. Install libgit2 manually." << endl;
    exit(1);
#endif
}

// Function to commit and push changes
void gitCommitAndPush() {
    git_libgit2_init();  // Initialize libgit2

    git_repository* repo = nullptr;
    if (git_repository_open(&repo, ".")) {
        cerr << "❌ Error: Not a valid Git repository!" << endl;
        exit(1);
    }

    cout << "✅ Git repository detected!" << endl;

    // Stage all changes
    system("git add .");

    // Get commit message from user
    string commitMessage;
    cout << "✍️  Enter your commit message: ";
    getline(cin, commitMessage);

    if (commitMessage.empty()) {
        cerr << "❌ Commit message cannot be empty!" << endl;
        exit(1);
    }

    // Commit changes
    string commitCmd = "git commit -m \"" + commitMessage + "\"";
    system(commitCmd.c_str());

    // Push to GitHub
    cout << "📤 Pushing changes to GitHub..." << endl;
    system("git push origin main");

    cout << "✅ Push completed successfully!" << endl;

    git_repository_free(repo);
    git_libgit2_shutdown();  // Clean up libgit2
}

int main() {
    cout << "🚀 Starting Git Push Automation..." << endl;

    // Step 1: Install libgit2 if missing
    installLibgit2();

    // Step 2: Run Git operations
    gitCommitAndPush();

    return 0;
}
