export module Registry;

import <map>;
import <stdexcept>;

using namespace std;

template<class TKey, class TValue>
class Registry
{
    map<TKey, TValue> _internalMap;

public:
    void Register(const TKey key, const TValue value)
    {
        if (_internalMap.contains(key))
        {
            throw std::invalid_argument("Key already registered in the registry.");
        }

        _internalMap[key] = value;
    }

    [[nodiscard]]
    TValue Get(const TKey key) const
    {
        auto it = _internalMap.find(key);

        if (it != _internalMap.end())
        {
            return it->second;
        }

        throw std::out_of_range("Key not found in registry.");
    }
};