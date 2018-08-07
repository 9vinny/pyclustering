/**
*
* Copyright (C) 2014-2018    Andrei Novikov (pyclustering@yandex.ru)
*
* GNU_PUBLIC_LICENSE
*   pyclustering is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   pyclustering is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*/


#pragma once


#include "thread_pool.hpp"


namespace ccore {

namespace parallel {


class parallel_thread_controller : public thread_pool {
private:
    parallel_thread_controller(void);

    parallel_thread_controller(const parallel_thread_controller & p_other) = delete;

    parallel_thread_controller(parallel_thread_controller && p_other) = delete;

    ~parallel_thread_controller(void) = default;

public:
    static parallel_thread_controller & get_instance(void);
};


}

}