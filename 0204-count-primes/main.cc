class Solution {
public:
    // Sieve of Eratosthenes
    // Time complexity: O(n)
    // Space complexity: O(n)
    int countPrimes(int n)
    {
      if (n < 2)
        return 0;
      vector<int> prime(n, 1);
      for (int i = 2; i <= static_cast<int>(sqrt(n)); i++)
      {
        if (prime[i] != 0)
        {
          int j = i * i; // 2i, 3i, .... (i-1)i hava been eliminated.
          while (j < n)
          {
            prime[j] = 0;
            j = j + i;
          }
        }
      }
      // count is not 0 for 2 to n
      int count = 0;
      for (int i = 2; i < n; i++)
      {
        if (prime[i] != 0)
          count++;
      }
      return count;
    }
};