#pragma once
#include <utility>
#include <vector>
#include <map>
#include <iostream>

template<typename T>
T Sqr(const T& );

template<typename T, typename K>
std::pair<T, K> Sqr(const std::pair<T, K>&);

template<typename K, typename T>
std::map<K, T> Sqr(const std::map<K, T>&);

template<typename T>
std::vector<T> Sqr(const std::vector<T>&);


template<typename T>
T Sqr(const T& a) {
    return a * a;
}

template<typename T>
std::vector<T> Sqr(const std::vector<T>& vec) {
    std::vector<T> sqr_vec;
    sqr_vec.reserve(vec.size());
    for (size_t i = 0; i < vec.size(); ++i) {
        sqr_vec.push_back(Sqr(vec[i]));
    }
    return sqr_vec;
}

template<typename T, typename K>
std::pair<T, K> Sqr(const std::pair<T, K>& para) {
    std::pair<T, K> sqr_para = std::make_pair(Sqr(para.first), Sqr(para.second));
    return sqr_para;
}

template<typename K, typename T>
std::map<K, T> Sqr(const std::map<K, T>& dict) {
    std::map<K, T> sqr_map = dict;
    for (auto const& [key, val] : dict) {
        sqr_map[key] = Sqr(val);
    }
    return sqr_map;
}