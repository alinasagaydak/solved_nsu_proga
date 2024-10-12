#pragma once

#include <vector>
#include <algorithm>

template <typename T>
class Table {
    private:
        std::vector<std::vector<T>> table;
        size_t num_row;
        size_t num_col;
    
    public:
        Table(size_t rows, size_t cols) : num_row(rows), num_col(cols) {
            Resize(num_row, num_col);
        }

        std::vector<T> operator[](int i) const {
            return table[i];
        }
        std::vector<T>& operator[](int i) {
            return table[i];
        }

        void Resize(size_t new_rows, size_t new_cols) {
            num_row = new_rows;
            num_col = new_cols;
            table.resize(num_row, std::vector<T>(num_col));
        }

        std::pair<size_t, size_t> Size() const {
            return std::make_pair(num_row, num_col);
        }

};
