class Solution:
    def generateTag(self, s: str) -> str:
        result = "#"
        words = s.split()
        first_word = True

        for word in words:
            filtered = ''.join(c.lower() for c in word if c.isalpha())
            if not filtered:
                continue
            if first_word:
                result += filtered
                first_word = False
            else:
                result += filtered.capitalize()

        return result[:100]