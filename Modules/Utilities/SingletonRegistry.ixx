export module SingletonRegistry;

import <map>;
import <stdexcept>;
import <string>;
import <format>;

export template<class TValue>
class SingletonRegistry
{
    std::map<std::string, TValue> _internalMap;

public:
    void Register(const std::string &key, const TValue value)
    {
        if (_internalMap.contains(key))
        {
            throw std::invalid_argument(std::format("Key ({}) is already registered in the registry.", key));
        }

        _internalMap[key] = value;
    }

    [[nodiscard]]
    TValue Get(const std::string &key) const
    {
        auto it = _internalMap.find(key);

        if (it != _internalMap.end())
        {
            return it->second;
        }

        throw std::out_of_range(std::format("Key ({}) not found in registry.", key));
    }
};