#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> portfolio_ids = {101, 102, 103, 104};
    
    auto it = portfolio_ids.begin();
    std::cout << "Before capacity expansion, first ID: " << *it << "\n";

    std::cout << "Initial capacity: " << portfolio_ids.capacity() << "\n";
    size_t old_capacity = portfolio_ids.capacity();

while (portfolio_ids.capacity() == old_capacity) {
    portfolio_ids.push_back(999);
}
    std::cout << "New capacity: " << portfolio_ids.capacity() << "\n";

    // ⚠️ CRITICAL TRAP: The old 'it' iterator is now dead/invalidated! 
    // Uncommenting the line below will cause undefined behavior or a crash.
    // std::cout << "Trying to read invalid iterator: " << *it << "\n";

    // 3. SAFE RE-INITIALIZATION & STL ALGORITHMS
    // Refresh the iterator to point to the new memory location
    it = portfolio_ids.begin();

    // Use STL algorithm 'std::find' which searches memory using iterators
    auto target = std::find(portfolio_ids.begin(), portfolio_ids.end(), 103);
    
    if (target != portfolio_ids.end()) {
        std::cout << "Found target ID 103 at relative index: " 
                  << std::distance(portfolio_ids.begin(), target) << "\n";
    }

    return 0;
}