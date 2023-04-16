#pragma once

template <class K, class V>
class ChacheMemory
{
public:
    void add(const K &key, const V &value);
    void erase(const K &key);
    std::shared_ptr<V> get(const K &key);
    std::vector<V> getCacheValues();

private:
    K key;
    V value;
}